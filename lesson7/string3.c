#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>   // include the C string library

int main(void) {
    char str1[10];
    char str2[10];

    str1[0] = '1';
    str1[1] = '2';
    str1[2] = '\0';   // explicitly add null terminating character to end
    str1[3] = '4';
    str1[4] = '5';
    str1[5] = '6';
    // strcpy copies the bytes from the source parameter (str1) to the
    // destination parameter (str2) and null terminates the copy.
    strcpy(str2, str1);
    printf("%s %s\n", str1, str2);  // prints: hi ho

    for (int i = 0; i < 10; ++i) {
        printf("%c ", str1[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; ++i) {
        printf("%c ", str2[i]);
    }
    printf("\n");

    printf("STRLEN str1: %d\n", strlen(str1));
    printf("STRLEN str2: %d\n", strlen(str2));

    return 0;
}