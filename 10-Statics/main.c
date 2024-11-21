#include <stdio.h>

int suma_penes(int num)
{
    static int total = 0;
    total += num;
    return total;
}

int main()
{
    printf("El primer pene que chupó Ale medía %d cm\n", suma_penes(5));
    printf("El segundo pene que chupó Ale medía %d cm\n", suma_penes(5));
    printf("El tercer pero no último pene que chupó Ale medía %d cm\n", suma_penes(9));
}