#include<stdio.h>

void print_big(int number);

int main(){
    int array[] = {3, 7, 9, 13, 19, 25};
    int i;
    for(i = 0; i < 6; i++){
        print_big(array[i]);
    }
}

void print_big(int number){
    if(number > 11){
    printf("%d is big\n", number);
    }
}