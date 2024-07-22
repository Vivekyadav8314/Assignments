//C program to print negative elements in an array

#include<stdio.h>

#define MAX_SIZE 100 //Maximum Array Size

int main()
{
	int arr[MAX_SIZE];

	int i,n;

	//Input the array size
	
	printf("ENter the size of the array\n");
	scanf("%d",&n);

	printf("ENter the elements into array\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	

       printf("NegativeElement are...\n");
       
       for(i=0;i<n;i++)
       {
	       if(arr[i]<0)
	       {
		       printf("%d\n",arr[i]);
	       }

       }
	       return 0;
      
}     

