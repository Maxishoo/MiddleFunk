#include "middle.h"
int itc_max_num(long long a)
{
    if(a<0)
    {
        a=a*(-1);
    }
    int maxnum=a%10;
    int ch;
    int l=itc_len_num(a);
    for(int i=0;i<l;i++)
    {
        ch=a%10;
        if(ch>maxnum)
        {
            maxnum=ch;
        }
        a=a/10;
    }
    return(maxnum);
}

int itc_min_num(long long a)
{
    if(a<0)
    {
        a=a*(-1);
    }
    long long minnum=a%10;
    long long ch;
    int l=itc_len_num(a);
    for(int i=0;i<l;i++)
    {
        ch=a%10;
        if(ch<minnum)
        {
            minnum=ch;
        }
        a=a/10;
    }
    return(int(minnum));
}
