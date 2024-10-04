#include<stdio.h>
int sum(int,int);
int sum(int a,int b)
{
    return a+b;
}
void main()
{
    int s=0;
    int (*ptr)(int,int)=&sum;
    s=(*ptr)(1,2);
    printf("sum =%d",s);
}