#include<stdio.h>
int a=1;
void check()
{
    a++;
    printf("\n%d",a);
}
void main()
{
    printf("%d",a);
    a+=4;// a=+4 .....ans=4
    printf("\n%d",a);
    check();
}