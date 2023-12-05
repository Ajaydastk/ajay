#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
printf("Before swap\n a=%d b=%d",a,b);
temp=a;
a=b;
b=temp;
printf("\nAfter swap\n a=%d b=%d",a,b);
return 0;
}
