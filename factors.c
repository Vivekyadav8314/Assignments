#include<stdio.h>


int main()
{
	

       int num,i;

       printf("Enert a positive integer :\n");
       scanf("%d",&num);

       printf("Factor of %d are :\n", num);

       for(i=1; i<=num;i++);
       {
	       if(num%i==0)
	       {
		       printf("%d\n",i);
	       }
       }

       return 0;
}
