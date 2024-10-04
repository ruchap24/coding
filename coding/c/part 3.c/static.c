#include<stdio.h>
int st()
{
    static int c=0;
    c++;
    return c;
}
void main()
{
    printf("%d",st());
    printf("\n%d",st());
}