#include<stdio.h>

#include<ctype.h>
void touppercase(char str[])
{
	int i=0;
	while(str[i])
	{
		str[i]=toupper(str[i]);
		i++;
	}
}
int main()
{
	char str[100];

	printf("Enter the string:\n");
	fgets(str,sizeof(str),stdin);

	touppercase(str);
	printf("Uppercase  string : %s\n",str);

	return 0;
}

