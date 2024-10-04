#include<stdio.h>
union uu
{
    int a;
    float b;
    char c;
};
void main()
{
    union uu r;
    r.a=10;
    r.b=12;
    r.c=155;
    printf("a=%d",r.a);
    printf("b=%f",r.b);
    printf("c=%c",r.c);
}