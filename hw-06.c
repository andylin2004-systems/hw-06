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
    int anotherTenInt[10];
    int *tenIntPointer = tenInt;
    int *anotherTenIntPointer = anotherTenInt;
    for (i = 0; i < 10; i++){
        if (i % 2 == 0){
            *(anotherTenIntPointer + 9 - i) = *(tenIntPointer + i);
        }else{
            anotherTenIntPointer[9 - i] = tenIntPointer[i];
        }
    }
    for (i = 9; i>=0; i--){
        printf("value of %p is %d\n", anotherTenInt + i, anotherTenInt[i]);
    }
    return 0;
}