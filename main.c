#include <pthread.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <ctype.h>


void* fun(void *arg){
    if ( fork() ){
        printf("Thread \n");
    }
    else
        printf("Fork \n");

    printf("Koniec Funkcji \n");
    return 0;
}

int main(){
    pthread_t thread_id;
    pthread_create(&thread_id,NULL,fun,NULL);
    pthread_join(thread_id,NULL);
    printf("Koniec Maina \n");
    return 0;
}
