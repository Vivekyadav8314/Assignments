//C program to input and display 2D Array

#include<stdio.h>

#define ROW_SIZE 4
#define COL_SIZE 3

int main()
{
	int matrix[ROW_SIZE][COL_SIZE];
	int row,col;

	printf("Enter the elements in matrix %d x %d\n",ROW_SIZE,COL_SIZE);

	//Outet loop to iterate through each row
	for(row=0;row<ROW_SIZE;row++)
	{
		//Inner loop to iterate through column to each row
		for(col=0;col<COL_SIZE;col++)
		{
			scanf("%d", &matrix[row][col]);
		}
	}

	//Printe all the elements of the 2D array
	printf("2D Array elements are...\n");
	for(row=0;row<ROW_SIZE;row++)
	{
		for(col=0;col<COL_SIZE;col++)
		{
			printf("%d ", matrix[row][col]);
		}
		printf("\n");
	}

	return 0;
}


