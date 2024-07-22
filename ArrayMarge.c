//C program to marge two shored arrays
//Input:
//Array1: 1 4 6 9 15
//Array2: 2 5 8 10
//
//Output: 1 2 4 5 6 8 9 10 15
//
//Logic: Input size and eleemnts in two array and store them seprately in two arraya variable,
//Say, size1, arr1, size2 and arr2 that storees size and elements of firat and second array
//respectively
//Create another array which will store the merged array with size:
//mergesize =size2, say mergearray[mergesize];
//Initializeee two varibles, i.e, index1=0 and index2=0.
//Both these variables will track of total merged element from given two arrays individually


#include<stdio.h>

#define MAX_SIZE 100

int main()
{
	int arr1[MAX_SIZE],arr2[MAX_SIZE],mergearray[MAX_SIZE];
	int size1,size2,mergesize,index1,index2,mergeindex, i;

	//Input the size of the first array
	
	printf("Enter the size of first arra:\n");
	scanf("%d",&size1);

	printf("Enter the elements in first array\n");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&arr1[i]);
	}

	printf("Enter the size of second arra:\n");
        scanf("%d",&size2);

        printf("Enter the elements in second array\n");
        for(i=0;i<size2;i++)
        {
                scanf("%d",&arr2[i]);
        }

	mergesize=size1+size2;

	//Merg two arrays in assending orders
	
	index1=0;
	index2=0;

	for(mergeindex=0;mergeindex<mergesize;mergeindex++)
	{
		//If all the elements of one array is merge to final array
		if(index1>=size1 ||index2>=size2)
		{
			break;
		}

		if(arr1[index1]<arr2[index2])
		{
			mergearray[mergeindex]=arr1[index1];
			index1++;
		}
		else
		{
			mergearray[mergeindex]=arr2[index2];
			index2++;
		}
	}

	//Merge the remaining array elements
	
	while(index1<size1)
	{
		mergearray[mergeindex]=arr1[index1];
		mergeindex++;
		index1++;
	}

	 while(index2<size2)
        {
                mergearray[mergeindex]=arr2[index2];
                mergeindex++;
                index2++;
        }

	 //Print the mergemerge array
         printf("Mergerd array element are...\n");
	 {
		 printf("%d\n",mergearray[i]);
	 }
	  return 0;
}




