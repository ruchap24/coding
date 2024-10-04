// circle
#include<stdio.h>
void area(r)
{
    A= 3.14*r*r;
    // printf("the area of circle is%d",A);
    return A;
}
int main()
{
    float r,A;
    printf("the radius of circle=");
    scanf("%d",&r);
    area(r);
    printf("the area of circle is%d",A);
    return 0;
}