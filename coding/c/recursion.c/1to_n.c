#include<stdio.h>
void incre(int n)
{
    if(n==0)
    return;
    // printf("%d",n);       //yat 4321 print hoil
    incre(n-1);
    printf("%d",n);    //yat 1234 print hoil
    return;
}
int main()
{
    int n;
    printf("enter a no.= ");
    scanf("%d",&n);
    incre(n);
    return 0;
}