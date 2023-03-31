#include <stdio.h>
#include <string.h>

const int N = 10;
const int N_students = 2;
struct Student
{
    char name[N];
    char surname[N];
    int grade;
};

int main()
{
    struct Student student[N_students];
    
    for (int i = 0; i < N_students; ++i)
    {
        printf("Name: ");
        scanf_s("%s", student[i].name, N);
        printf("Surname: ");
        scanf_s("%s", student[i].surname, N);
        printf("Grade: ");
        scanf_s("%d", &student[i].grade);
    }

    for (int i = 0; i < N_students; ++i)
    {
        printf("Name = %s\n", student[i].name);
        printf("Surname = %s\n", student[i].surname);
        printf("Grade = %d\n", student[i].grade);
    }
    return 0;
}
