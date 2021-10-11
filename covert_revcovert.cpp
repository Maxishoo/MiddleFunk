#include "middle.h"

int itc_covert_num(long long a,int sis)
{
    if(sis<2 || sis>10)
    {
        return (-1);
    }
    if(sis==10)
    {
        return(a);
    }
    else
    {
    long long k=1;
    long long otv=0;
    long long b;
    while(a>0)
    {
        b=a%sis;
        otv=otv+b*k;
        a=a/sis;
        k=k*10;
    }
    return(otv);
    }
}
int itc_rev_covert_num(long long a,int sis)
{
    if(sis<2 || sis>10)
    {
        return (-1);
    }
    int k=1;
    int b;
    int otv=0;
    int l=itc_len_num(a);
    for(int i;i<l;i++)
    {
        b=a%10;
        otv=otv+b*k;
        k=k*sis;
        a=a/10;
    }
    return otv;
}
