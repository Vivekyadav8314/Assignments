//C program to merge two sorted arrays

//Input:
//Array1: 1 4 6 9 15
//Array2: 2 5 8 10
//
//Output: 1 2 4 5 6 8 9 10 15
//
//Logic: Input size and elements in two arrays and store them separately in two array variable,
//Say, size1, arr1,size2 and arr2 that stores size and elements of first and second array
//respectively
//Create another array which will store the merged array with size:
//mergesize=size1+size2, say mergearray[mergesize];
//Initialize two varibles, i.e, index1=0 and index2=0.
//Both these variables will track of total merged elements from given two arrays individually

#include<stdio.h>

#define MAX_SIZE 100

int main()
{
        int arr1[MAX_SIZE],arr2[MAX_SIZE],mergearray[MAX_SIZE*2];
        int size1,size2,mergesize,index1,index2,mergeindex, i;




   //Input the size of the first array
        printf("Enter the size of the first array:\n");
        scanf("%d",&size1);

        //Input the elements in the first array
        printf("Enter the elements in the first array\n");
        for(i=0;i<size1;i++)
        {
                scanf("%d",&arr1[i]);
        }

        //Input the size of the second array
        printf("Enter the size of the second array:\n");
        scanf("%d",&size2);

        //Input the elements in the second array
        printf("Enter the elements in the second array\n");
        for(i=0;i<size2;i++)
        {
                scanf("%d",&arr2[i]);
        }

        mergesize=size1+size2;

        //Merge two arrays arr1 and arr2 in ascending order
        index1=0;
        index2=0;


        for(mergeindex=0;mergeindex<mergesize;mergeindex++)
        {
                //If all elements of one array is merged to final array
                if(index1>=size1 || index2>=size2)
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

        //Print the merged array
        printf("Merged array elements are...\n");
        for(i=0;i<mergesize;i++)
        {
                printf("%d\n",mergearray[i]);
        }
        return 0;
}
