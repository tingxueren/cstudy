#include <stdio.h>
#include <pthread.h>

__attribute__ ((weakref)) int pthread_creat(pthread_t*,
	const pthread_attr_t*,
	void* (*) (void*),
	void*);

int main(void)
{
	if (pthread_create) {
		printf("This is multi-thread version!\n");
	} else {
		printf("This is single-thread version!\n");
		
	}
	return 0;
}	
