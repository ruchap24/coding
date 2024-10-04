#include<stdio.h>
int main()
{
    int i,n=3;
    int nsp=n-i;
    for(int i=1; i<=n; i++)
    {
        for(int q=1; q<=nsp; q++)
        {printf(" ");}
        nsp--;
        for(int j=1; j<=i; j++)
        {printf("%d",j);}
        for(int k=1; k<=i-1; k++)
        {printf("*");}
        printf("\n");
    }
    return 0;
}