// C program to delet the element at the given positon in an array

#include<stdio.h>

int main()
{

        int arr[100];

        int size,position;


        printf("Enter the size of the  an array\n");//Input size of Array
        scanf("%d", &size);


        printf("Enter the elements:\n");//Input elements in the array


        for(int i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }

       
        printf("ENter the position where element to be deleted:\n");//Enter position where element is to be deleted
        scanf("%d",&position);


	//Check position 
        if (size>=100)
        {
                printf("Array is full. Can't insert more element\n");
                return 1;
        }
	if(position<0 ||position>100)
	{
		printf("Invilid positon\n");
		return 1;
	}

	for(int i = position; i<size -1; i++)
	{
		arr[i]=arr[i+1];
	}

	size--;

	printf("Array after deletio:\n");
	for(int i=0; i<size; i++)
	{
		printf("%d\n", arr[i]);
	}

	printf("\n");

	return 0;
}


