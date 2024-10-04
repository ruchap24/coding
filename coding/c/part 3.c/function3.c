#include<stdio.h>
int add(int *a,int *b)
{return *a+*b;}
int main()
{
    int a,b;
    a=2;
    b=4;
    int sum=add(&a,&b);
    printf("%d",sum);
    return 0;
}