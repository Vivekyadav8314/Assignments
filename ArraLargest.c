//C program to print the second largest elements from array

#include<stdio.h>

#define MAX_SIZE 100

int main()
{
        int arr[MAX_SIZE],firstMax,secondMax;
        int size=sizeof(arr) /sizeof(arr[0]);
       


   //Input the size of the array
        printf("Enter the size of the array:\n");
        scanf("%d",&size);

        //Input the elements in the array
        printf("Enter the elements in the array\n");
        for(int i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }

	if(arr[0]>arr[1])//Initialize firstMax and secondMax with the first two elements
	{
		firstMax=arr[0];
		secondMax=arr[1];
	}
	else
	{
		firstMax=arr[1];
		secondMax=arr[0];
	}

	for(int i=2;i<size;i++) //Traverse the array to find the largest and second largest elements
	{

		if(arr[i]>firstMax)
		{
			secondMax=firstMax;
			firstMax=arr[i];
		}
		else if(arr[i]> secondMax && arr[i] !=firstMax)
		{
			secondMax=arr[i];
		}
	}
		//Print the second largest element

		printf("The second largest element in the array is %d\n",secondMax);

		return 0;
}

