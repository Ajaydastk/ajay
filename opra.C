#include<stdio.h>
void main ()
{
char op;
double num1,num2;
printf("Enter the operator (+,-,*):");
scanf("%c"&op);
printf("Enter two operands:");
scanf("%f %f",&num1,&num2);
switch(operators)
{
case+:printf("%f"+"%f"="%f",num1,num2,num1+num2);
      break;
case-:printf("%f"-"%f"="%f",num1,num2,num1-num2);
      break;
case*:printf("%f"*"%f"="%f",num1,num2,num1*num2);
      break;
default:printf("invalid operators");
}
return 0;
}
