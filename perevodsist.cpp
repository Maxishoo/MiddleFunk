#include "middle.h"

long long itc_bin_num(long long a)
{
    long long k=1;
    long long otv=0;
    long long b;
    while(a>0)
    {
        b=a%2;
        otv=otv+b*k;
        a=a/2;
        k=k*10;
    }
    return(otv);
}

long long itc_oct_num(long long a)
{
    long long k=1;
    long long b;
    long long otv=0;
    while(a>0)
    {
        b=a%8;
        otv=otv+b*k;
        k=k*10;
        a=a/8;
    }
    return (otv);
}
int itc_rev_bin_num(long long a)
{
    int k=1;
    int b;
    int otv=0;
    int l=itc_len_num(a);
    for(int i=0;i<l;i++)
    {
        b=a%10;
        otv=otv+b*k;
        k=k*2;
        a=a/10;
    }
    return otv;
}

int itc_rev_oct_num(long long a)
{
    int k=1;
    int b;
    int otv=0;
    int l=itc_len_num(a);
    for(int i=0;i<l;i++)
    {
        b=a%10;
        otv=otv+b*k;
        k=k*8;
        a=a/10;
    }
    return otv;
}


