#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>   // include the C string library

int main(void) {
    char str[32];
    char* ptr;

    strcpy(str, "Zebra fish");
    strcat(str, " stripes");  // str gets "Zebra fish stripes"
    printf("%s\n", str);     // prints: Zebra fish stripes

    strncat(str, " are black.", 8);
    printf("%s\n", str);     // prints: Zebra fish stripes are bla  (spaces count)

    ptr = strstr(str, "trip");
    if (ptr != NULL) {
        printf("%s\n", ptr);   // prints: tripes are bla
    }

    ptr = strchr(str, 'e');
    if (ptr != NULL) {
        printf("%s\n", ptr);   // prints: ebra fish stripes are bla
    }
    return 0;
}