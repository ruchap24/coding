#include<stdio.h>
int num(int n);
int main()
{
    int n;
    // int c;
    printf("enter n= ");
    scanf("%d",&n);
    // c=n;
    num(n);
    return 0;
}
int num(int n)
{
    // int arm=0;
    // int r,c;
    if(n%2==0)
    {
    printf("even num");
    }
    else
    {
    printf("odd");
    }
    return 0;
}