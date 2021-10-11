#include "middle.h"

int itc_second_max_num(long long a)
{
    if(itc_len_num(a)==1){return(-1);}
    int max1=0;
    int max2=0;
    int b=0;
    int l=itc_len_num(a);
    for(int i;i<l;i++)
    {
        b=a%10;
        if(b>max1)
        {
            max1=b;
        }
        else if(b>max2)
        {
            max2=b;
        }
        a=a/10;
    }
    return max2;
}

int itc_second_simple_max_num(long long a)
{
    if(itc_len_num(a)==1){return(-1);}
    int max1=0;
    int max2=0;
    int b=0;
    int l=itc_len_num(a);
    for(int i;i<l;i++)
    {
        b=a%10;
        if(b>max1)
        {
            max1=b;
        }
        else if(b>max2)
        {
            max2=b;
        }
        a=a/10;
    }
    if(max1==max2)
    {
        return(-1);
    }
    return(max2);
}
