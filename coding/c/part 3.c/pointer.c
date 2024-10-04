// #include<stdio.h>
// int main()
// {
//     int a=25;
//     int *x=&a;
//     printf("%d\n",*x);
// }
#include<stdio.h>
int main()
{
    int a=25;
    int *x=&a;

    printf("%d\n",*x);
       printf("%p\n",*x);
    printf("%p\n",x);
    printf("%d\n",&x);
    printf("%p\n",&x);
    printf("%d\n",x);
}