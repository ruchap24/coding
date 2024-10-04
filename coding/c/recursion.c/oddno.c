#include<stdio.h>
int main()
{
    int n;
    printf("enter a no= ");
    scanf("%d",&n);
    int i,q;
    
    for(int i=1; i<=n; i++)
    {
        int a=1;
        for(int q=1; q<=i; q++)
        
            {printf("%d",a);
            a=a+2;
            }
        
        printf("\n");
    }
    return 0;
}