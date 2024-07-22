// C program toinsert the element at the given positon in an array

#include<stdio.h>

int main()
{

        int arr[100];

        int size,element,position;


        printf("Enter the size of the  an array\n");
	scanf("%d", &size);

        
        printf("Enter the elements:\n");


        for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("ENter the element to be insert:\n");
	scanf("%d",&element);

	printf("ENter the position where element to be inserted:\n");
	scanf("%d",&position);

	if (size>=100)
	{
		printf("Array is full. Can't insert more element\n");
		return 1;
	}

	if(position<0 || position>100)
	{
		printf("Invalid Positio\n");
		return 1;
	}

	for(int i=size;i>position;i--)
	{
		arr[i]=arr[i-1];
	}

	arr[position]=element;

	size++;

	printf("Array elemetn after Insertion are...\n");
 
	for(int i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");

                return 0;
}

