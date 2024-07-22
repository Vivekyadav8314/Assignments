#include<stdio.h>
#include<string.h>

void reversestring(char str[])
{
	int length=strlen(str);
	int start=0;
	int end=length-1;
	char temp;
	while(start<end)
	{
		temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
	}
}
int main()
{
	char str[100];

	printf("Enter the string:\n");
	fgets(str,sizeof(str),stdin);

	//strcspn() is define in the header file #include<string.h>
	//strcspn() function remove the newline characte that fgets() function 
	//may insert at end of the string
	
	str[strcspn(str,"\n")]=0;
	reversestring(str);

	printf("Reverse string is %s\n", str);
	return 0;
}
