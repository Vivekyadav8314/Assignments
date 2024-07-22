//C program to Add diagonal elements of a matrix.

#include<stdio.h>

#define SIZE 3

int main()
{

        int A[SIZE][SIZE];


        int row,col,sum=0;

        //Input the elements in Matrix A
        printf("Enter the elements in matrix of size %dx%d:\n",SIZE,SIZE);
        for(row=0;row<SIZE;row++)
        {
                for(col=0;col<SIZE;col++)
                {
                        scanf("%d",&A[row][col]);
                }

        }

        //fIND THE SUM OF DIAGONLA ELEMENT
        for(row=0;row<SIZE;row++)
        {

                sum=sum+A[row][SIZE-1-row];
        }

        printf("Sum of left diagonal elements =%d\n",sum);

        return 0;
}
 
