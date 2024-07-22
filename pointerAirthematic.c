//C program to demonstrate to mathematical operation using pointers
//

#include<stdio.h>

int main()
{
        float num1,num2,sum,sub,mult,div;
        float *ptr1,*ptr2;
        
        ptr1=&num1; //ptr1 store the address of num1
        ptr2=&num2; //ptr2 store the address of num2

        printf("Enter any two number:\n");
        scanf("%f %f",ptr1,ptr2);//We are not using the &(address of operator) in the scanf() function
                                 //scanf() take the actual memeory address where the user input is yo be stoored.
                                 //SInce we are the pointers, the pointer variable ptr1 and ptr2 containes
                                 //The actual memeory adrees of num1 and num2

        sum=*ptr1+*ptr2;

        printf("Sum =%f\n",sum);

	sub=*ptr1-*ptr2;
	printf("Sub =%f\n",sub);

	mult=*ptr1 * *ptr2;
	printf("mult =%f\n",mult);

	div=*ptr1/ *ptr2;
	printf("div =%f\n",div);

        return 0;
}


