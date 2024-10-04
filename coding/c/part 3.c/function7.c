#include<stdio.h>
char fun();
void main()
{
    char ch;
    ch=fun();
    // fun();
    printf("ch=%c",ch);
}
char fun()
{
    char c;
    printf("enter a character= ");
    scanf("%c",&c);
}