#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *func(void *ptr)
{
	char *message;
	message=(char*) ptr;
	printf("%s\n",message);

}	
int main()
{
	pthread_t t1, t2;

	char *message1="Wipro"; //Pointer to char

	char *message2="TCS";

	pthread_create(&t1, NULL,func,(void*)message1);   
        sleep(3);
	pthread_create(&t2, NULL,func,(void*)message2);

	pthread_join(t1,NULL);
	pthread_join(t2,NULL);

	pthread_exit(NULL);

	return 0;
}

