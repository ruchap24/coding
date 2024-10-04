#include<stdio.h>
void change();
void change(int *no)
{
  printf("%d",*no);
  (*no)+=100;
  printf("\n%d",*no);
  (*no)+=200;
  printf("\n%d",*no);
}
int main()
{
    int x=100;
    printf("\n%d",x);
    change(&x);
    printf("\n%d",x);
    return 0;
}