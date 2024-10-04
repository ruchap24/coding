// wap to check if a no. is prime or not
#include<stdio.h>
int main()
{
    char n;
    printf("enter a no= ");
    scanf("%c",&n);
    int a=0;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        printf("the given no. is composite\n");
        a=1;
       break;
    }
    return 0;
}