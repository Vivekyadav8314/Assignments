// C program to demonstrate relational operators

#include<stdio.h>

int main()
{
	 int a=5, b=5, c=10;

	 printf("%d ==%d is %d\n", a, b, a==b); //5==5 is return 1


	 printf("%d ==%d is %d\n", a, c, a==c); //5==10 return 0

	 printf("%d > %d is %d\n", a, b , a>b); // 5>5 retuen 0

	printf("%d > %d is %d\n",a, c,a>c); // 5> 10 return 0

        printf(" %d < %d  is %d\n", a, b, a<b); // 5 < 5 return 0

        printf("%d < %d is %d \n", a, c, a<c); //5<10 return 1

        printf("%d != %d is %d\n", a, b ,a!=b);//5 !=5 return 0

        printf("%d !=  %d is %d\n",a, c, a!=c);//5!=10 is 1

        printf("%d >= %d is %d\n",a, b, a>=b); //5>= 5 is 1
                                      
        printf("%d >= %d is %d\n",a, c, a>=c); //5>=10 is 0
           
        printf("%d <= %d is %d\n",a, b, a<=b); // 5<= 5 is 1
        
         printf("%d <= %d is %d\n",a, c, a<=c);//5<= 10 is 1
                                       
  return 0;
 }
