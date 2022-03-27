#include <stdio.h>
#include <string.h>

int main()
{
    const int N = 10;
    const int N_students = 2;
    char name[N_students][N];
    char surname[N_students][N];
    int grade[N_students];

    for (int i = 0; i < N_students; ++i)
    {
        printf("Name: ");
        scanf_s("%s", name[i], N);
        printf("Surname: ");
        scanf_s("%s", surname[i], N);
        printf("Grade: ");
        scanf_s("%d", &grade[i]);
    }

    for (int i = 0; i < N_students; ++i)
    {
        printf("Name = %s\n", name[i]);
        printf("Surname = %s\n", surname[i]);
        printf("Grade = %d\n", grade[i]);
    }
return 0;
}
