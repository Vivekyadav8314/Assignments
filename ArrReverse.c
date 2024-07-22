//C program to print the revers elements.

#include<stdio.h>

#define MAX_SIZE 100

int main()
{
        int arr[MAX_SIZE];
        int size;



   //Input the size of the array
        printf("Enter the size of the array:\n");
        scanf("%d",&size);

        //Input the elements in the array
        printf("Enter the elements in the array\n");
        for(int i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }

	printf("\n");

	printf("Reverse array:\n");
	for(int i=size-1;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}

	printf("\n");

	return 0;
}

