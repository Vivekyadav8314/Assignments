//C program to demonstrate the void pointer

#include<stdio.h>

void printvalue(void *ptr,char type); //Function Prototype
				      //
int main()
{
     int a=10;
     float b=5.5;
     char c='A';

     void *ptr; //void pointer
		//
     //Pointing to an integer
     ptr=&a;
     printvalue(ptr,'i');

     //Pointing to a float
     ptr=&b;
     printvalue(ptr,'f');

     //Pointing to a character
     ptr=&c;
     printvalue(ptr,'c');

     return 0;


}

void printvalue(void *ptr,char type)
{
	switch(type)
	{
		case 'i':
			printf("INTEGER VALUE: %d\n",*(int*)ptr);
			break;

		case 'f':

			printf("Float Value: %.2f\n",*(float*)ptr);
                        break;

		case 'c':
			printf("Charcter Value:%c\n",*(char*)ptr);
			break;

		default:
			printf("Unknown Type\n");
	}
}

