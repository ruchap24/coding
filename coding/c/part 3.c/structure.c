#include<stdio.h>
#include<conio.h>
struct stu
{
    int a;
    char b;
    float c;
};
void main()
{
    struct stu s;
    // clrscr();
    // printf("maximum value of structure stu is%d bytes",sizeof(int));
    // printf("\nmaximum value of structure stu is%d bytes",sizeof(char));
    // printf("\nmaximum value of structure stu is%d bytes",sizeof(float));
    // getch();
    // printf("\nmaximum value of structure stu is%d bytes",sizeof(s));
    s.a=10;
    s.b=97;
    s.c=23;
    printf("a=%d",s.a);
    printf("b=%c",s.b);
    printf("c=%f",s.c);   
}