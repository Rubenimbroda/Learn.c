#include <stdio.h>
#include <stdlib.h>

typedef struct coordination 
{
    int x;
    int y;
} coordination;

int main()
{
    coordination * mycoordination;
    mycoordination = (coordination *) malloc(sizeof(coordination));

    mycoordination->x = 34;
    mycoordination->y = 54;

    printf("My coordination: %d, %d\n", mycoordination->x, mycoordination->y);

    free(mycoordination);
}