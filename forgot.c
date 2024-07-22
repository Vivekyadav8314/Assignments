#include<stdio.h>

int main()
{
	int num, i;

	printf("Enter a number:\n");
	scanf("%d",&num);

		if(num <=1)
		{
			printf("%d is not a prime number\n", num);
			goto end;
		}
	
	        for(i=2; i<=num/2; i++)
		{
			if (num % i==0)
			{
				printf("%d is not a prime number\n",num);
                                   goto end;
			}
                  }
			if (i> num/2)
			{
				printf("%d is a prime number\n",num);
			}

                        end:
			return 0;
}

