#include <stdio.h>

int main()
{
    int cuanto_te_mide = 9;
    int * largo = &cuanto_te_mide;
    cuanto_te_mide += 7;

    *largo += 3;

    if(cuanto_te_mide == 19)
    {
        printf("hermano la tienes to grande te mide %d cm\n", cuanto_te_mide);
    }
    
    if(cuanto_te_mide < 19)
    {
        printf("pringao la tienes pequeña\n");
    }

    if(cuanto_te_mide > 19)
    {
        printf("eso hace daño hasta con la puntita\n");
    }
}