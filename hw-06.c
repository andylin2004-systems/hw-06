#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int tenInt[10];
    tenInt[0] = 0;
    int i;
    srand(time(NULL));
    for (i = 1; i<10; i++){
        tenInt[i] = rand();
    }
    for (i = 0; i<10; i++){
        printf("value of %p is %d\n", tenInt + i, tenInt[i]);
    }
    return 0;
}