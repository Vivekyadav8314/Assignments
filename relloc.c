#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *darray;
	int initialsize=5;
	int finalsize=8;

	darray=(int*)malloc(initialsize*sizeof(int));

	if(darray==NULL)
	{
		printf("Memory Allocation Failed\n");
		return 1;
	}

	printf("Initial array elements are...\n");
	for(int i=0;i<initialsize;i++)
	{
		darray[i]=i*2;
		printf("Element %d is %d\n", i,darray[i]);
	}

	printf("\n");

	darray=(int*)realloc(darray,finalsize*sizeof(int));
	 printf("Final array elements are...\n");
	 for(int i=initialsize;i<finalsize;i++)
	 {
		 darray[i]=i*5;
		 printf("Enter %d is %d\n",i,darray[i]);
	 }
	  free(darray);

	  return 0;
}
