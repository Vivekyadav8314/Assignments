#include<stdio.h>
#include<pthread.h>
#include"bank.h"
#include<unistd.h>

//Declaration of Mutex Variable
pthread_mutex_t mutex;

void *deposit(void *amount);

int main()
{
    int before=read_balance();
    printf("Before :%d\n",before);

    pthread_t t1,t2;
    //Initialize the Mutex:
    pthread_mutex_init(&mutex,NULL);

    int deposit1=300,deposit2=500;

    pthread_create(&t1,NULL,deposit,(void*)&deposit1);
    pthread_create(&t2,NULL,deposit,(void*)&deposit2);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
   
    //Destroy the Mutex
    pthread_mutex_destroy(&mutex);

    int after=read_balance();
    printf("After : %d\n",after);

    pthread_exit(NULL);

    return 0;
}

void *deposit(void *amount)
{
    pthread_mutex_lock(&mutex);

    //retrieve the account balance
    int account_balance=read_balance();

    account_balance+=*((int*)amount);
    write_balance(account_balance);

    pthread_mutex_unlock(&mutex);

    return NULL;
}
