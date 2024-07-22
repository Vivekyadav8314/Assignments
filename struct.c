#include<stdio.h>
#include<string.h>
struct employee
        {
	char name[50];
	int emp_id;
	float salary;
	}
	e1; //e1 is thr variable of the structure employee

int main()
{

	strcpy(e1.name,"vivek");
	e1.emp_id=10;
	e1.salary=50000;

	printf("Name : %s\n",e1.name);
	printf("NEmployee ID : %d\n",e1.emp_id);

         printf("Salary : %.2f\n",e1.salary);


	return 0;
}

