/*#include<stdio.h>

int main()
{
	//Initialize a string
	char str[]="Welcome, Vivek!";

	//Pointer to string
	char *ptr=str;

	//Print the string using the pointer
	printf("String :%s\n",ptr);

	//Print each characters using the pointer
	printf("Printing each characters using the pointer\n");
			while(*ptr!='\0')
			{
				printf("%d", *ptr);
			}
			printf("\n");

			//Reset the pointrr to statt of the string
		         ptr =str;

			 //Modifying the string using the pointer
		         ptr[7]='a';
			 ptr[7]='l';
			 ptr[9]='l';
			 ptr[10]='a';
			 ptr[11]='n';

			 //print the modified string
			 printf("Modified string:%s\n",str);

			 return 0;
}*/
#include<stdio.h>

int main()
{
    //Initialize a string
    char str[]="Welcome, RPS!";

    //Pointer to string
    char *ptr=str;

    //Print the string using the pointer
    printf("String : %s\n",ptr);

    //print each character using the pointer
    printf("Printing each character using the pointer\n");
    while(*ptr!='\0')
    {
        printf("%c ",*ptr);
        ptr++;
    }
    printf("\n");

    //Reset the pointer to start of the string
    ptr=str;

    //Modify the string using the pointer
    ptr[7]='a';
    ptr[8]='l';
    ptr[9]='l';
    ptr[10]='a';
      ptr[11]='n';

    //print the modified the string
    printf("Modified string : %s\n",str);

    return 0;
}
