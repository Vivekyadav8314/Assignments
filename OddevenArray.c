//C program to count even and odd elements in the array

#include<stdio.h>

#define MAX_SIZE 100

int main()
{
        int arr[MAX_SIZE];
        int i,size,even,odd;

        printf("Enter the size of the array:\n");
        scanf("%d",&size);

        printf("Enter %d array elements:\n",size);
        for(i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }

        //Assuming that there are 0 even and odd elements
        even=0;
        odd=0;

	   for(i=0;i<size;i++)
        {
                if(arr[i]%2==0)
                {
                        even++;
                }
                else
                {
                        odd++;
                }
        }

        printf("Total even elements:%d\n",even);
        printf("Total odd elements:%d\n",odd);

        return 0;
}
