#include <stdio.h>

int main() {
    int a1 = 3, b1 = 4;
    int s1 = a1 * b1;
    printf("Площадь 1 = %d\n", s1);

    int a2 = 5, b2 = 6;
    int s2 = a2 * b2;
    printf("Площадь 2 = %d\n", s2);

    int a3 = 7, b3 = 8;
    int s3 = a3 * b3;
    printf("Площадь 3 = %d\n", s3);

    return 0;
}


тип_возврата имя_функции(тип1 параметр1, тип2 параметр2, ...) {
    // тело функции
    return значение;   // если тип не void
}