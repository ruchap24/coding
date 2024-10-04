#include<stdio.h>
float sum();
void main()
{
    sum();
}
float sum()
{
    float a,b,sum=0;
    printf("enter 2 no.= ");
    scanf("%f%f",&a,&b);
    sum=a+b;
    printf("sum=%f\n",sum);
}