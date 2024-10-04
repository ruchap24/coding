#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<=4;i++)
    {
        printf("\nEnter element no.%d=%d",i,i+1);
        // scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("\n%d",arr[i]);
    }
      return 0;
}