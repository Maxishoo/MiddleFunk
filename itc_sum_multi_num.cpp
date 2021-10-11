#include "middle.h"
int itc_sum_num(long long a)
{
    int sum=0;
    int ch=0;
    if(a<0)
    {
        a=a*(-1);
    }
    int l=itc_len_num(a);
    for(int i=0;i<l;i++)
    {
        ch=a%10;
        sum=sum+ch;
        a=a/10;

    }
    return(sum);
}

long long itc_multi_num(long long a)
{
    if(a<0)
    {
        a=a*(-1);
    }
    int pr=1;
    int ch=0;
    int l=itc_len_num(a);
    for(int i=0;i<l;i++)
    {
        ch=a%10;
        pr=pr*ch;
        a=a/10;

    }
    return(pr);
}
