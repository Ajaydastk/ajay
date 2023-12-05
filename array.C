#include<stdio.h>
//Function to display the elements of an array
void display(int arr[],int size)
{
for(int i=0;i<size;i++)
{
printf("%d",arr[i]);
}
printf("\n");
}
//Function to insert an element at a specified position in the array
void insert(int arr[],int*size,int element,int position)
{
if(position<0||position>*size)
{
printf("invalid position for insertion.\n");
return;
}
//Shift elements to the right to make space for the new element
for(int i=*size;i>position;i--)
{
arr[i]=arr[i-1];
}
arr[position]=element;
(*size)++;
}
//Function to delete an element at a specified position in the array
void deleteElement(int arr[],int*size,int position)
{
if(position<0||position>=*size)
{
printf("invalid position for deletion.\n");
return;
}
//Shift elements to the left to remove the specified element
for(int i=position;i<*size-1;i++)
{
arr[i]=arr[i+1];
}
(*size)--;
}
//Function to search for an element in the array and tis position
int search(int arr[],int size,int element)
{
for(int i=0;i<size;i++)
{
if (arr[i]==element)
{
return i;
}
}
return-1;//Element not found
}
//Function to perform a simple selection sort on the array
void selectionSort(int arr[],int size)
{
for (int i=0;i<size-1;i++)
{
int minindex=i;
for(int j=i+1;j<size;j++)
{
if (arr[j]<arr[minindex])
{
minindex=j;
}
}
if (minindex!=i)
{
//Swap arr[i] and arr[minindex]
int temp=arr[i];
arr[i]=arr[minindex];
arr[minindex]=temp;
}
}
}
int main()
{
int arr[100],size=0,choice,element,position;
do{
printf("Array Operations Menu:\n");
printf("1.insert\n");
printf("2.delete\n");
printf("3.search\n");
printf("4.sort\n");
printf("5.display\n");
printf("6.exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the elements to insert:");
scanf("%d",&element);
printf("enter the position to insert:");
scanf("%d",&position);
insert(arr,&size,element,position);
 break;
case 2:
printf("enter the position to delete:");
scanf("%d",&position);
deleteElement(arr,&size,position);
 break;
case 3:
printf("enter the elements to search:");
scanf("%d",&element);
position=search(arr,size,element);
if( position!=-1)
{
printf("element found at position %d.\n",position);
}
else
{
printf("elements not found.\n");
}
 break;
case 4:
selectionSort(arr,size);
printf("array sorted successfully.\n");
 break;
case 5:
printf("array elements:");
display(arr,size);
 break;
case 6:
printf("exiting program.\n");
 break;
default:
printf("invalid choice.please try again.\n");
}
}
while(choice !=6);
return 0;
}

