#include<stdio.h>
int main()
{
    int n;
    printf("enter a no= ");
    scanf("%d",&n);
    int i,q;
    for(int i=1; i<=n; i++)
    {
        for(int q=1; q<=i; q++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}