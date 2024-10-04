#include<stdio.h>
#define num 10
 int main()
 {  int i,r;
    for(i=1;i<=10;++i)
    {
        r=num*i;
        // cout<<num<<"*"<<i<<"="<<r<<endl;
        printf("r=%d\n",r);
    }
    return 0;
 }