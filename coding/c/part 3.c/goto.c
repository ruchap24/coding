#include<stdio.h>
int main()
{
    int age;
    printf("enter ur age:");
    scanf("%d",&age);
    if(age>=18)
   { goto vote;
   }
    else
   { goto notvote;
   }
    vote:
    {printf("eligible");
        return 0;}
    notvote:
    {printf("not eligible");
    return 0;}
}

// another example

// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("enter ur age:");
//     scanf("%d",&age);
//     if(age>=18)
//     {printf("eligible");
//      goto end;}
//     else
//     printf("not eligible");
//     end:
//     return 0;
// }