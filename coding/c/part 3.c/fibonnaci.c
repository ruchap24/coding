#include<stdio.h>
int F(int n);
int F(n)
{
    int a=0,b=1,c,i;
    for(i=1;i<=n;i++)
    {printf("%d  ",a);
    c=a+b;
    a=b;
    b=c;
    }
}
int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    F(n);
    return 0;
}