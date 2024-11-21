#include <stdio.h>

int main(){

    int array[] = {1, 2, 3, 4, 8, 10};
    int factorial = 2;
    int i;

        for(i = 0; i < 6; i++){
            factorial *= array[i];
        }
        printf("La multiplicación es %d\n", factorial);
}