#include <stdio.h>

int main() {
    int grades[5];
    int average;

    grades[0] = 27;
    grades[1] = 42;
    grades[2] = 51;
    grades[3] = 83;
    grades[4] = 2005;

    average = grades[0] + grades[1] + grades[2] + grades[3] + grades[4] / 5;

    printf("The average of the 5 grades is: %d\n", average);

    return (0);
}