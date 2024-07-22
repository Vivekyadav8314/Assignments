#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *func()
{
	printf("Testing Threads\n");
	sleep(3);//Context Swithching
	printf("Ending Threads\n");
}

int main()
{
	pthread_t t1,t2;//declare the thread

	pthread_create(&t1, NULL, func, NULL);
        pthread_create(&t2,NULL,func, NULL);

	pthread_join(t1, NULL);
	pthread_join(t2,NULL);

	printf("Back in int main()\n");
	pthread_exit(NULL);

	return 0;
}

