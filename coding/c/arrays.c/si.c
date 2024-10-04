#include<stdio.h>
int si(int p,int t,int r)
{
    int si=(p*t*r)/100;
    printf("si is%d ",si);
    return 0;
}
int main()
{
    int p,t,r;
    printf("enter p");
    scanf("%d",&p);
    printf("enter t");
    scanf("%d",&t);
    printf("enter r");
    scanf("%d",&r);
    si(p,t,r);
    return 0;
}