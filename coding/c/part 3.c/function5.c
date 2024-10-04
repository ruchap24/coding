// #include<stdio.h>
// void greet()
// {
//     printf("good morning\n");
//     return;
// }
// int main()
// {
//     int n;
//     printf("enter a no.=");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         greet();
//     }return 0;
// }

//RECURSION
#include<stdio.h>
void greet(int n)
{
   for(int i=1;i<=n;i++)
   { printf("good morning\n");
   }
    return;
}
int main()
{
    int n;
    printf("enter a no.=");
    scanf("%d",&n);
        greet(n);
    return 0;
}