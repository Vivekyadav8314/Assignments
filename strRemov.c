#include<stdio.h>
#include<string.h>

int main()
{
	char str[]="Hello, Vivek!\n"; //Sample string wiht newline characer

	//Loop through the string to find the newline character
	 for(int i=0; i<strlen(str); i++)
	 {
		 if(str[i]=='\n') //Check if the current character is a newline character
		 {
			 str[i]='\0'; //Overwrite the newline character with the null character

			 break;
		 }
	 }

	 printf("String after removing newline character: %s\n",str);

	 return 0;
}
