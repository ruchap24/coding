#include<stdio.h>
void fibbo(int n);
void main()
{
    int n;
    printf("enter a no.= ");
    scanf("%d",&n);
    fibbo(n);
}
void fibbo(int n)
{
    int a=0;
    int b=1;
    int c;
    for(int i=1;i<=n;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n");
}