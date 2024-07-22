/*#include<stdio.h>

enmu {success,fail}status;

int main()
{
	status=success;

	printf("The value of status =%d\n",status);

	status=fail;

	printf("The value of staus =%d\n",status);



	return 0;
}
*/
#include<stdio.h>

enum {success,fail}status;

int main()
{
    status=success;

    printf("The value of status = %d\n",status);

    status=fail;

    printf("The value of status = %d\n",status);

    return 0;
}

