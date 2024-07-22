//C program to right rotate an array.

#include<stdio.h>

#define MAX_SIZE 100

int main()
{
        int arr[MAX_SIZE];
        int size,i,lastElement;



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

	//Perform right rotation 
	lastElement =arr[size-1];
	for(i=size-1;i>0;i--)
	{
		arr[i]=arr[i-1];
	}

	arr[0]=lastElement;

	//Printf rotated array
	
	for(i=0;i<size;i++)
	{
		printf("Roted elements is %d\n",arr[i]);
	}

	printf("\n");

	return 0;
}

