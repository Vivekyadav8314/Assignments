#include<stdio.h>

#include<ctype.h>
void tolowercase(char str[])
{
	int i=0;
	while(str[i])
	{
		str[i]=tolower(str[i]);
		i++;
	}
}
int main()
{
	char str[100];

	printf("Enter the string:\n");
	fgets(str,sizeof(str),stdin);

	tolowercase(str);
	printf("Lowercase  string : %s\n",str);

	return 0;
}

