#include<stdio.h>

int main()
{

	double number,sum=0;
	
	//body of the loop is executed atleeast once
	do
	{
		printf("Enter a number :\n");
		scanf("%lf",&number);
		sum=sum+number;//sum+=number
	}
	while(number!=0.0);

	printf("Sum = %.2f\n",sum);

	return 0;
}

