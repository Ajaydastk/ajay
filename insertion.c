#include<stdio.h>
//function to display the elements of an array void display(int arr{[],int  size)
{
for(int i=o;i<size;i++)
{
printf("%d",arr[i];
}
printf("\n");
}
//function to insert an element at a specified position in tha array void insert(int arr[],int *size,int element,int position)
{
if(position<0||position>*size)
{
printf("invalid position for insertion.\n");
return;
}
//shift elements to the right to make space for the new element
for(int i=*size;i>position;i--)
{
arr[i]=arr[i-1];
}
arr[position]=element;
(*size)++;
}
//function to delete an element at a specified position in the array void deleteElement(int arr[],int*size,int position)
{
if(position<o||position>=*size)
{
printf("invalid position for deletion.\n");
return;
}
//shift elements to the left to remove the specified element
for(int i=position;i<*size-1;i==)
{
arr[i]=arr[i+1];
}
(*size)--;
}
//function to search for an element in the array and return its position
int search(int arr[],int size,int element)
{
for(int i=0;i<size;i+)
{
if(arr[i]==element)
{
return i;
}
}
return -1;//element not found
}
//function to perform a simple seletion sort on the array void selectionsort(int arr[],int size)
{
for(int i=0;i<size-1;i++)
{
int minindex !

