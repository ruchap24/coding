// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter n= ");
//     scanf("%d",&n);
//     int i,j,a;
//     a=n;
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=a;j++)
//        {
//          printf("*");
//        }
//          --a;
//         //  a--;
//        printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
void main()
{
  int n=4;
  for(int i=n;i>=1;i--)
  {
    for(int j=1;j<=i;j++)
    {
      printf("%d",i);
    }
    printf("\n");
  }
}