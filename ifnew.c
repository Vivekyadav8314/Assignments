#include<stdio.h>

int main()
{
	int num;

	printf("Enter the number\n");
	scanf("%d",&num);

	if(num%2==0)
	{
		printf("Enter number is Even =%d\n",num);
	}
	else if(num%2!=0)
	{
		printf("ENter numbe is odd %d\n", num);
	}
	else
	{
		printf("Enter number is Nor Even Neither Odd =%d",num);
	}
	return 0;
}
