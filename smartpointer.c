/*
#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
	int *ptr;
}SmartPointer;
 
// 
// Define a SmartPointer structure that containes a single member, ptr, which is pointer to integer. 
//This struct will be used to simulate a smart pointer using C Programming
//
SmartPointer create_smart_pointer(int value)
{
	SmartPointer sp;
	sp.ptr=(int*)malloc(sizeof(int));
	if(sp.ptr!=NULL)
	{
		*(sp.ptr)=value;
	}

	return sp;
}
//
// destory_smart_pointer function:
 //Takes a pointer to a SmartPointer Structure
 //If sp-> ptr is not NULL, it free the allocated memeory and sets sp-> to NULL to prevent dangling references
 //
 
void destroy_smart_pointer(SmartPointer *sp)
{
	if(sp->ptr!=NULL)
	{
		free(sp->ptr);
		sp->ptr=NULL;
	}
}

void set_value(SmartPointer *sp, int value)
{
	if(sp->ptr!=NULL)
	{
		*(sp->ptr)=value;
	}
}
//
// set_value function
// Takes apointer to a Smartapointer striture and an integer value 
 //If sp->ptr is not NULL, it sets the value pointer to by sp->ptr to value
 //

int main()
{
	SmartPointer sp=create_smart_pointer(10);

	printf("Value=%d\n", get_value(sp)); //Output =10

	set_value(&sp, 20);
	printf("New Value=%d\n", get_value(sp)); //output 20

	destroy_smart_pointer(&sp);

	return 0;
}


*/
#include<stdio.h>
#include<stdlib.h>

typedef struct
{
        int *ptr;
}SmartPointer;

/*
Defines a SmartPointer structure that containes a single member, ptr, which is pointer to integer.
This struct will be used to simulate a smart pointer using C programming
*/

SmartPointer create_smart_pointer(int value)
{
        SmartPointer sp;
        sp.ptr=(int*)malloc(sizeof(int));
        if(sp.ptr!=NULL)
        {
                *(sp.ptr)=value;
        }
        return sp;
}
/*
destroy_smart_pointer function:
Takes a pointer to a SmartPointer Structure
If sp->ptr is not NULL, it frees the allocated memory and sets sp->ptr to NULL to prevent
dangling references
*/
void destroy_smart_pointer(SmartPointer *sp)
{
        if(sp->ptr!=NULL)
        {
                free(sp->ptr);
                sp->ptr=NULL;
        }
}

void set_value(SmartPointer *sp, int value)
{
        if(sp->ptr!=NULL)
        {
                *(sp->ptr)=value;
        }
}

/*set_value function
Takes a pointer to a SmartPointer structure and an integer value
If sp->ptr is not NULL, it sets the value pointed to by so->ptr to value
*/
int get_value(SmartPointer sp)
{
        if(sp.ptr!=NULL)
        {
                return *(sp.ptr);
        }
        return 0; //Default value is 0 iff pointer is NULL
}

int main()
{
        SmartPointer sp=create_smart_pointer(10);

        printf("Value = %d\n",get_value(sp)); //Output 10

        set_value(&sp,20);
        printf("New Value = %d\n",get_value(sp)); //Output 20

        destroy_smart_pointer(&sp);

        return 0;
}
