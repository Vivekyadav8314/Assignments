//C program to Sort even and odd elements of array seprately.

#include<stdio.h>

#define MAX_SIZE 100

int main()
{
        int arr[MAX_SIZE];
        int size,i,j,temp;



   //Input the size of the array
        printf("Enter the size of the array:\n");
        scanf("%d",&size);

        //Input the elements in the array
        printf("Enter the elements in the array\n");
        for(int i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }

	//sort even elements
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]%2==0 && arr[j] %2==0)
			{
				if(arr[i]>arr[j])
				{
					temp =arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
	}

	//Sort for odd elements
	   for(i=0;i<size-1;i++)
        {
                for(j=i+1;j<size;j++)
                {
                        if(arr[i]%2!=0 && arr[j] %2!=0)
                        {
                                if(arr[i]>arr[j])
                                {
                                        temp =arr[i];
                                        arr[i]=arr[j];
                                        arr[j]=temp;
                                }
                        }
                }
        }

	   //Print sorted even elements
	   printf("Sorted even elements:\n");
		   for(i=0;i<size;i++)
		   {
			   if (arr[i]%2==0)
			   {
				   printf("%d\n",arr[i]);
			   }
		   }
	   printf("\n");

	   // //Print sorted odd elements
           printf("Sorted odd elements:\n");
                   for(i=0;i<size;i++)
                   {
                           if (arr[i]%2!=0)
                           {
                                   printf("%d\n",arr[i]);
                           }
                   }
           printf("\n");

	   return 0;
}




						


