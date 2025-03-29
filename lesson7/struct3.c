#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>   // include the C string library
#include <stdlib.h>

struct personT {
    char* name;     // for a dynamically allocated string field
    int  age;
};

int main(void) {
    struct personT p1, * p2;

    // need to malloc space for the name field:
    p1.name = (char*)malloc(sizeof(char) * 8);
    strcpy(p1.name, "Zhichen");
    p1.age = 22;


    // first malloc space for the struct:
    p2 = (struct personT*)malloc(sizeof(struct personT));

    // then malloc space for the name field:
    p2->name = (char*)malloc(sizeof(char) * 4);
    strcpy(p2->name, "Vic");
    p2->age = 19;

        // Note: for strings, we must allocate one extra byte to hold the
        // terminating null character that marks the end of the string.
}