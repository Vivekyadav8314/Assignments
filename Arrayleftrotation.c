//C program to left rotate the arrays
//Input: 10 20 30 40
//Number time to rotate : 3
//Output: 40 50 10 20 30


#include<stdio.h>

#define SIZE 10

void printarray(int arr[]); //Function Prototype
void rotatebyone(int arr[]);

int main()
{
	int i,n;
	int arr[SIZE];

	printf("Enter 10 elements:\n)");

	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the number of time to left rotate:\n");
	scanf("%d",&n);

	//Actual Rotatio
	n=n%SIZE;

	printf("Array elements before rotation are...\n");
	printarray(arr);

	//Rotate array n times
	 for(i=1;i<=n;i++)
	 {
		 rotatebyone(arr);
	 }

	 printf("Array elements after rotation are...\n");
	 printarray(arr);

	 return 0;
}

void rotatebyone(int arr[])
{
	int i,first;

	first=arr[0]; //Store the firat elements of the array

	for(i=0;i<SIZE-1;i++)
	{
		arr[i]=arr[i+1];//Move each array element to its left
	}

	arr[SIZE-1]=first;

}

//Function to print the elements of array
void printarray(int arr[])
{
	for(int i=0;i<SIZE; i++)
	{
		printf("%d\n", arr[i]);
	}


}
 
