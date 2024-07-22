#include<stdio.h>

int main()
{
        char name[20];
        printf("Enter your name:\n");
        fgets(name,sizeof(name),stdin);
	printf("Name:\n");
        puts(name);

        return 0;
}
        
