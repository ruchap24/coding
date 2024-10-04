#include<stdio.h>
void pali(int n)
{
    int r;
    int s=0;
    int c;
    c==n;
while(n>0)
    {
        r=n%10;
        s=r+(s*10);
        n=n/10;
    }
    if(c==s)
    {
        printf("pali");
    }
    else{
        printf("not");
    }
}
int main()
{
    int n;
    printf("enter n ");
    scanf("%d",&n);
    pali(n);
    return 0;
}