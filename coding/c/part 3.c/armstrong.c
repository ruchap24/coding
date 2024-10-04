#include<stdio.h>
// int armstrong(int n);
int main()
{
    int n;
    int c;
    printf("enter n= ");
    scanf("%d",&n);
    c=n;
    armstrong(n);
    return 0;
}
int armstrong(int n)
{
    int arm=0;
    int r,c;
    while(n>0)
    {
        r=n%10;
        arm =(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm)
    printf("armstrong no");
    else
    printf("NOT");
    return 0;
}