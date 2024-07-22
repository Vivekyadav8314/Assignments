//C program to demonstrate the working of enumeratios(enum)

#include<stdio.h>

enum team{Germany,Portugal,France,Italy,Englanf,Croatia};

int main()
{
	for(int i=Germany;i<=Croatia;i++)
	{
		printf("%d\n", i);
	}
        printf("\n");
	enum team day;
	day=France;

	printf("%d\n",day);

	return 0;
}

