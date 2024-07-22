#include<stdio.h>
#include<string.h>

int main()
{
	char a[20]="Bengaluru";
	char b[50]={'M', 'a', 's', 's', 'a', 'c', 'h', 'u', 's', 's', 'e', 't', 't', 's', '\00'};

	printf("Length of the string a= %d\n", strlen(a));
	printf("Length of the string b= %d\n", strlen(b));

	return 0;
}
