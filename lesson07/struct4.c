#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>   // include the C string library
#include <stdlib.h>

const int sizeOfClass = 5;

struct personT {
    char* name;     // for a dynamically allocated string field
    int  age;
};

void initPerson(struct personT* classroom, int size) {
    int i;
    for (i = 0; i < size; i++) {
        classroom[i].age = rand() * (22 - 18) / RAND_MAX + 18;
    }
}

void updateAges(struct personT* classroom, int size) {
    int i;
    for (i = 0; i < size; i++) {
        classroom[i].age += 1;
    }
}

void printPerson(struct personT* classroom, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d\n",classroom[i].age);
    }
}

int main(void) 
{
    struct personT* classroom;
    classroom = (struct personT*)malloc(sizeof(struct personT) * sizeOfClass);
    initPerson(classroom, sizeOfClass);
    printPerson(classroom, sizeOfClass);
    updateAges(classroom, sizeOfClass);
    printPerson(classroom, sizeOfClass);
    free(classroom);
}