// #include<stdio.h>
// void sum(int n)
// {
//     if(n==0)
//     return;
// int sum=0;
//     for(int i=1;i<=n;i++)
//     {
//         sum=sum+i;
//     }
//     printf("%d",sum);
//     return;
// }
// int main()
// {
//     int n;
//     printf("enter a no.= ");
//     scanf("%d",&n);
//     sum(n);
//     return 0;
// }
//USING RECURSION....
#include<stdio.h>
void sum(int n,int s)
{
    if(n==0) return;
    sum(n-1,s+n);
    return;
}
int main()
{
    int n;
    printf("enter a no.= ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}