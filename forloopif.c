#include<stdio.h>

int main()
{

	int i;
        double number,sum=0.0;

         for (i=1;i<=10;i++)
        {
                printf("Enter n%d",i);
                scanf("%lf",&number);

		if(number<=0.0)
		{
		break;
		}
                sum=sum+number;//sum+=number
        }
  

        printf("Sum = %.2f\n",sum);

        return 0;
}
