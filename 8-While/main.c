#include <stdio.h>

int main(){

    int array[] = {7, 3, 5, 8, 6, 11, 2};
    int i = 0;

    while(i < 7){
    
        if(array[i] < 4){ 
            i++;
            continue;
        }

        if(array[i] > 10){
            break;
        }
    printf("%d\n", array[i]);
    i++;
    } 
}