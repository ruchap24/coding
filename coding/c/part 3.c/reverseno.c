// #include<stdio.h>
// int main()
// {int n;
// printf("enter a number= ");
// scanf("%d",&n);
// int r=0;
// while(n!=0)
// {
//     r=r*10;
//     r=r+(n%10);
//     n=n/10;
// }
// printf("the reverse of the given no.is%d",r);
// return 0;
// }

//call by reference

// #include<stdio.h>
// int reverse(int *n);
// int reverse(int *n)
// {
// int r=0;
// while(*n!=0)
// {
//     r=r*10;
//     r=r+(*n%10);
//     *n=*n/10;
// }
// printf("the reverse of the given no.is%d",r);
//     return 0;
// }
// int main()
// {int n;
// printf("enter a number= ");
// scanf("%d",&n);
// reverse(&n);
// // int RR = reverse(n);
// // printf("the reverse of the given no.is%d",RR);
// return 0;
// }





//call by value

#include<stdio.h>
int reverse(int n);
int reverse(int n)
{
int r=0;
while(n!=0)
{
    r=r*10;
    r=r+(n%10);
    n=n/10;
}
printf("the reverse of the given no.is%d",r);
    return 0;
}
int main()
{int n;
printf("enter a number= ");
scanf("%d",&n);
reverse(n);
// int RR = reverse(n);
// printf("the reverse of the given no.is%d",RR);
return 0;
}