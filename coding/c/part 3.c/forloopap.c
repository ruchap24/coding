#include<stdio.h>
int main()
// {
//     // display this AP--4,7,10,13,16___upto 'n'term
//     int n;
//     printf("enter a no.");
//     scanf("%d",&n);
//     for(int i=4;i<=3*n+1;i=i+3)
//     {
//          printf("%d",i);
//         return 0;
//     }
// }
{
    int n;
    printf("enter a no.= ");
    scanf("%d",&n);
    int a=4;
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",a);
        a=a+3;
    }
    return 0;
}