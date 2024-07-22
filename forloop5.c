#include<stdio.h>

int main()
{
        int n=5; //Number of rows


        int i,j,k=0;

        for (i=1; i<=n; i++)
        {
                for(j=1;j<=i;j++)
                {
                        printf("*");
                }
                printf(" ");
        

	for(k=1; k<=(2*i-1); k++)
	{
		printf("*");
	}

	printf("\n");
	}
        return 0;
}
   
