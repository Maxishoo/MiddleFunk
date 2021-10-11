#include "middle.h"
int itc_len_num(long long a)
{
    int k=0;
    while(a>0)
    {
        k=k+1;
        a=a/10;
    }
    return (int(k));
}
