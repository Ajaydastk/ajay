#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers:");
scanf("%d %d %d",&a,&b,&c);
if(a>=b&&a>=c)
{
printf("a greaterthan band c %d",a);
}
else if (b>=a&&b>=c)
{
printf ("b greaterthan a and c %d",b);
}
else
{
printf("c greaterthan a and b %d",c);
}
return 0;
}
