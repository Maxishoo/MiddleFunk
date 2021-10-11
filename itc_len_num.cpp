#include "middle.h"
int itc_len_num(long long a)
{
    int k=0;
    if(a<0)
    {
        a=a*(-1);
    }
    if(a==0)
    {
        return 1;
    }
    while(a>0)
    {
        k=k+1;
        a=a/10;
    }
    return (int(k));
}
