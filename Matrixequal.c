//C program to check whether two matrices are equal or not.

#include<stdio.h>

#define SIZE 3

int main()
{
        int A[SIZE][SIZE]; //Matrix 1
        int B[SIZE][SIZE]; //Matrix 2
       

        int row,col,isequal;

        //Input the elements in the first matrix
        printf("Enter the elements in Matrix A of size %dx%d:\n",SIZE,SIZE);
        for(row=0;row<SIZE;row++)
        {
                for(col=0;col<SIZE;col++)
                {
                        scanf("%d",&A[row][col]);
                }
        }

	   //Input the elements in the second matrix
        printf("Enter the elements in Matrix B of size %dx%d:\n",SIZE,SIZE);
        for(row=0;row<SIZE;row++)
        {
                for(col=0;col<SIZE;col++)
                {
                        scanf("%d",&B[row][col]);
                }
        }

	//Assume that bothe matrices A and B are equla
	isequal=1;
	for(row=0;row<SIZE;row++)
	{
		for(col=0;col<SIZE;col++)
		{
			//If the corresponding entries of the matrixes are not equal
			if(A[row][col]!=B[row][col])
			{
				isequal=0;
				break;
			}
		}
	}

	if (isequal==1)
	{
		printf("Matrix A is equal to Matrix B\n");
	}
	else
	{
		printf("Matrix is A is not equal to matrix B\n");
	}
	return 0;
}

