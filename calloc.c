#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Request memory allocation for an array of 10 integers
    int *arr=(int*)calloc(10,sizeof(int));

    //Check if the allocation was successful
    if(arr==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 1;
    }

    for(int i=0;i<10;i++)
    {
        arr[i]=i*10;
    }

    //Print the contents of the array
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;
}

