#include "middle.h"
int itc_rev_num(long long a)
{
    if(a==0)
    {
        return 1;
    }
    int k=a%10;
    while( k == 0)
    {
        a=a/10;
        k=a%10;

    }
    return(itc_len_num(a));
}

int itc_null_count(long long a)
{
    int k=0;
    int b;
    int l=itc_len_num(a);
    for(int i=0; i<l;i++)
    {
        b=a%10;
        if(b==0){
            k=k+1;
        }
        a=a/10;
    }
    return k;
}

bool itc_mirror_num(long long a)
{
    bool otv=false;
    int b;
    int k=0;
    long long p=a;
    int l=itc_len_num(a);
    for(int i=0; i<l;i++)
    {
        b=a%10;
        k=k*10+b;
        a=a/10;
    }
    if(k==p)
    {
        otv=true;
    }
    return otv;
}

int itc_mirror_count(long long a)
{
    int k=0;
    for(long long i=1;i<a+1;i++)
    {
        if(itc_mirror_num(i)==true)
        {
            k++;
        }
    }
    return k;
}
