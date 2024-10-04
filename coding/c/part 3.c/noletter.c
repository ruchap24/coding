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
        {if(i%2==0)
            {printf("%d",q);}
         else
            {int d=q+64;
            char ch=(char)d;
            printf("%c",ch);}
        }
        printf("\n");
    }
    return 0;
}