#include <stdio.h>

typedef struct animals
{
    char * name;
    char * type;
    int age;
    float weight;   
} animals;

int main()
{
    animals Rodolfo;
    animals Dana;
    animals Akira;

    Rodolfo.name = "Rodolfo";
    Rodolfo.type = "siberyan husky";
    Rodolfo.age = 4;
    Rodolfo.weight = 35.60;

    Dana.name = "Dana";
    Dana.type = "yorsai";
    Dana.age = 15;
    Dana.weight= 3.20;

    Akira.name = "Akira";
    Akira.type = "carlino pug";
    Akira.age = 7;
    Akira.weight = 8.6;

    printf("The dog whith name %s and type %s is %d years old and weight %f\n",Rodolfo.name, Rodolfo.type, Rodolfo.age, Rodolfo.weight);
    printf("The dog whith name %s and type %s is %d years old and weight %f\n",Dana.name, Dana.type, Dana.age, Dana.weight);
    printf("The dog whith name %s and type %s is %d years old and weight %f\n",Akira.name, Akira.type, Akira.age, Akira.weight);
}