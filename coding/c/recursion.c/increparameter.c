#include<stdio.h>
void increasing(int n)
{
    for(int i=1;i<=n;i++)
   { printf("%d",i);}
    return;
}
int main()
{
    int n;
    printf("enter a no.= ");
    scanf("%d",&n);
    increasing(n);
    return 0;
}