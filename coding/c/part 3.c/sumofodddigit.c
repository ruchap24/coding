#include<stdio.h>
int main()
{
    int n=12355;
    int sum=0;
    int lastdigit=0;
    while(n!=0)
    {
        lastdigit=n%10;
        if(lastdigit%2!=0)
        {sum=(sum+lastdigit);}
        n=n/10;
    }
    printf("the sum of all odd digits are%d",sum);
    return 0;
}