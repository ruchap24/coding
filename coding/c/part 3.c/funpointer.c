// #include<stdio.h>
// #include<stdlib.h>
// int sum(int a,int b)
// {
//     return a+b;
// }
// int main()
// {int z;
//     z=sum(2,4);
//     printf("the sum of a & b is %d",z);
//     int(*fptr)(int,int);
//     fptr=&sum;
//     int d= (*fptr)(4,6);
//     printf("\nthe value of d is %d",d);
//     return 0;
// }

// example 2 of function pointer

#include<stdio.h>
int addnumber(int n1,int n2)
{return n1+n2; }
int main()
{
    int (*fun)(int ,int);
    fun=addnumber;
    int res1=fun(20,20);
    int res2=addnumber(40,20);
    printf("using fun pointer=%d",res1);
    printf("\nusing fun name=%d",res2);
    return 0;
}