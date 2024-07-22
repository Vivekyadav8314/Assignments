#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100]="Welcome to", str2[100]="C Progrmaing";

	//strcap concatenates str1 and str2. Result string is srore in str1
	strcat(str1,str2);

	puts(str1);
	puts(str2);

	return 0;
}

