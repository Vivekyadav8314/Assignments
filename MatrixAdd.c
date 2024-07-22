//C program to find sum of two matrices of size 3X3

#include<stdio.h>

#define SIZE 3

int main()
{
        int A[SIZE][SIZE]; //Matrix 1
        int B[SIZE][SIZE]; //Matrix 2
        int C[SIZE][SIZE]; //Resultant Matrix

        int row,col;

        //Input the elements in the first matrix
        printf("Enter the elements in Matrix A of size 3X3:\n");
        for(row=0;row<SIZE;row++)
        {
                for(col=0;col<SIZE;col++)
                {
                        scanf("%d",&A[row][col]);
                }
        }

        //Input the elements in the second matrix
        printf("Enter the elements in Matrix B of size 3X3:\n");
        for(row=0;row<SIZE;row++)
        {
                for(col=0;col<SIZE;col++)
                {

			 scanf("%d",&B[row][col]);
                }
        }

        //Add both matrices A and B and stores the result in Matrix C
        for(row=0;row<SIZE;row++)
        {
                for(col=0;col<SIZE;col++)
                {
                        C[row][col]=A[row][col]+B[row][col];
                }
        }

        //Print the values of resultant matrix C
        printf("Elements of Resultant Matrix C are...\n");
        for(row=0;row<SIZE;row++)
        {
                for(col=0;col<SIZE;col++)
                {
                        printf("%d ",C[row][col]);
                }
                printf("\n");
        }

	return 0;
}
