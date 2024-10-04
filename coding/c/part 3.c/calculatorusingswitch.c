#include <stdio.h>
void main()
{
    int a,b,sum,minus,div,multi;
	char operator;
    printf("enter operator= ");
    scanf("%c",&operator);
	printf("Enter 2 operands= ");
	scanf("%d %d",&a,&b);

	switch (operator)
	{
		case '+': sum=a+b;
                printf("sum=%d",sum);
                break;
		case '-':minus=a-b;
                printf("minus=%d",minus);
                break;
		case '*': multi=a*b;
		        printf("multi=%d",multi);
	 	        break;
        case '/': div=a/b;
		        printf("div=%d",div);
	 	        break;  
         default :
                printf("enter valid operator");             
	 	
	}
}