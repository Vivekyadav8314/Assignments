//C program to perform scaler multiplyication.

#include<stdio.h>

#define SIZE 3

int main()
{

        int A[SIZE][SIZE];


        int row,col,num;

        //Input the elements in Matrix A
        printf("Enter the elements in matrix of size %dx%d:\n",SIZE,SIZE);
        for(row=0;row<SIZE;row++)
        {
                for(col=0;col<SIZE;col++)
                {
                        scanf("%d",&A[row][col]);
                }

        }

	//Input multipler from the user
	printf("Enter any number t multply Matrix A:\n");
	scanf("%d",&num);

	//Perform scaler multiplication of matrixs
       for(row=0;row<SIZE;row++)
        {
                for(col=0;col<SIZE;col++)

		{
			A[row][col]=num*A[row][col];
		}
	}

       //Print the result of scaler multiplication
        printf("Resultant mateix is..\n");
	for(row=0;row<SIZE;row++)
        {
                for(col=0;col<SIZE;col++)

		{
			printf("%d ",A[row][col]);
		}
		printf("\n");
	} 
	return 0;
}


