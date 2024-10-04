#include<stdio.h>
int prime();
int main()
{
    int n;
    printf("enter n= ");
    scanf("%d",&n);
    prime(n);
    return 0;
}
int prime(n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
      if(n%i==0)
      {count++; }
    }
    if(count==2)
    printf("prime no");
else
printf("not");
return 0;
}
