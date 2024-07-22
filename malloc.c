//Comment and uncommet free() and check for the test commands.
/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *dynamicarray;
	int size,i;

	printf("Enter the size of the array:\n");
	scanf("%d",&size);

	//Allocatiing the memory for the dynamic array during the runtime
	dynamicarray=(int*)malloc(size*sizeof(int));

	if (dynamicarray==NULL)
	{
		printf("Memory Allocation Failed\n");
		return 1;
	}

	printf("ENter the elements into the dynamic array:\n");
	for(i=0;i<size;i++);
	{
		scanf("%d",&dynamicarray[i]);
	}

	printf("Dynamic array element are...\n");
	for( i=0;i<size;i++)
	{
		printf("%d\n",dynamicarray[i]);
	}

	printf("\n");

	free(dynamicarray);

	return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *dynamicarray;
    int size;

    printf("Enter the size of the array:\n");
    scanf("%d",&size);

    //Allocating the memory for the dynamic array during the runtime
    dynamicarray=(int*)malloc(size*sizeof(int));

    if(dynamicarray==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 1;
    }

    printf("Enter the elements into the dynamic array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&dynamicarray[i]);
    }

    printf("Dynamic array elements are...\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",dynamicarray[i]);
	 }
    printf("\n");

    free(dynamicarray);
    return 0;
}
