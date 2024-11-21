#include <stdio.h>

typedef struct person
{
    char * name;
    int age;
}person; 

void birthday(person *p);

void birthday(person *p)
{
    p->age++;
}

int main()
{
    person Xena;
    Xena.name = "Xena";
    Xena.age = 18;

    printf("%s was before %d years old\n", Xena.name, Xena.age);
    birthday(&Xena);
    printf("%s is now %d yers old\n", Xena.name, Xena.age);
}