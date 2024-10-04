#include<stdio.h>
int palindrome(int n);
int main()
{
    int n;
    int c;
    printf("enter n= ");
    scanf("%d",&n);
    c=n;
    palindrome(n);
    return 0;
}
int palindrome(int n)
{
    int s=0;
    int r,c;
    while(n>0)
    {
        r=n%10;
        s =r+(s*10);
        n=n/10;
    }
    if(c==s)
    printf("palindrome no");
    else
    printf("NOT");
    return 0;
}

//call by reference

// #include<stdio.h>
// int palindrome(int *n);
// int main()
// {
//     int n;
//     int c;
//     printf("enter n= ");
//     scanf("%d",&n);
//     c=&n;
//     palindrome(&n);
//     return 0;
// }
// int palindrome(int *n)
// {
//     int s=0;
//     int r,c;
//     while(*n>0)
//     {
//         r=*n%10;
//         s =r+(s*10);
//         *n=*n/10;
//     }
//     if(c==s)
//     printf("palindrome no");
//     else
//     printf("NOT");
//     return 0;
// }