#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    int **numbers;

    numbers = (int **) malloc(3 *sizeof(int *));
    numbers[0] = (int*) malloc(1 *sizeof(int));
    numbers[1] = (int*) malloc(2 *sizeof(int));
    numbers[2] = (int*) malloc(3 *sizeof(int));

    numbers[0][0] = 1;
    numbers[1][0] = numbers[0][0] + numbers[0][0];
    numbers[1][1] = numbers[1][0] + numbers[0][0];
    numbers[2][0] = numbers[1][1] + numbers[1][0] + numbers[0][0];
    numbers[2][1] = numbers[2][0] + numbers[1][1] + numbers[1][0] + numbers[0][0];
    numbers[2][2] = numbers[2][1] + numbers[2][0] + numbers[1][1] + numbers[1][0] + numbers[0][0];

    for(x = 0; x < 3; x++){
        for(y = 0; y <= x; y++){
        printf("%d ", numbers[x][y]);
        }
        printf("\n");     
    }
    for(x = 0; x < 3; x++){
        free(numbers[x]);
    }     
        free(numbers);
}