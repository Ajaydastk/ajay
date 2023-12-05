#include<stdio.h>
#inlude<stdlib.h>
#define MAX_SIZE 100
{
int items[MAX_SIZE];
int top;
};
{
stack->top=-1;
}
{
return(stack->top ==-1);
}
{
return(stack->top == MAX_SIZE-1);
}
{
printf("stack is full.cannot push %d.\n",item);
}
else
{
stack->items[++stack->top]=item;
printf("%d pushed onto the stack.\n",item);
}
}
{
if(isEmpty

