//C program to delete duplicate  elements and print unique element in an array.
//Example
//Input: 1 2 2 3 4 4 5 5
//Output 1 2 3 4 5
//
//If else, for loop, nested loop, array

#include<stdio.h>

#define MAX_SIZE 100 //Maximum Array Size

int main()
{
        int arr[MAX_SIZE];
        int size;
        int i,j,k;

        //Input the array size

        printf("ENter the size of the array\n");
        scanf("%d",&size);

        printf("ENter the elements into array\n");
        
	for(i=0; i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	//Find the duplicates in array
	
	for(i=0;i<size;i++) /* Outer loop from 0 to size. This loop is used to select each element of the arra and chck net subsequest for                                  dublicate using nested loop*/
	{
		for(j=i+1;j<size;j++) //Inner loop to find the fist dublicate of current elements.
		{
			if(arr[i]==arr[j])//If any duplicate found
			{
				for(k=j;k<size-1;k++) //Delet the cuurrent duplicate element
				{
					arr[k]=arr[k+1];
				}

				size--; //Decrement array size after deleting duplicate element

				j--; //If shifting of elements occur then don't increment j
				  }
		}
	}

        printf("Array element after deleting the dublicate element:\n");

	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}


