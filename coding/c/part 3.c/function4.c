#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
    fact=fact*i;
    }
    return fact;
}
int main(){
// {int n;
// printf("enter n: ");
// scanf("%d",&n);
// int r;
// printf("enter r: ");
// scanf("%d",&r);
// int nfact=factorial(n);
// int rfact=factorial(r);
// int nrfact=factorial(n-r);
// for(int i=2;i<=n;i++){
//     nfact = nfact*1;
// }
// for(int i=2;i<=n-r;i++){
//     rfact = rfact*1;
// }
// for(int i=2;i<=n-r;i++){
//     nrfact = nrfact*1;
// }
// int ncr = nfact/rfact*nrfact;
// printf("%d",ncr);
int a=factorial(5);
printf("%d",a);
return 0;
}