#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct student
{
    char* fio;
    char* group;
    int mark;
};

int CAPASITY = 2;


double avg_stud(struct student* s, int count) {
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += s[i].mark;
    }
    return (double)sum / count;
}

void print_student(struct student* s, int count ) {
    for (int i = 0; i < count; ++i) {
        printf("ФИО: %s\n", s[i].fio);
        printf("Группа: %s\n", s[i].group);
        printf("Оценка: %d\n", s[i].mark);
    }

}

int main() {
    setlocale(LC_ALL, "Russian");
    FILE* file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Не могу открыть файл!!\n");
        return 1;
    }
    char line[256];
    int count = 0;

    student* students = (student*)malloc(CAPASITY * sizeof(student));

    while (fgets(line, sizeof(line), file)) {

        if (count == CAPASITY) {
            CAPASITY *= 2;
            student* tmp_s = (student*)realloc(students, CAPASITY * sizeof(student));
            if (tmp_s == NULL) {
                printf("Ай ай ай!!\n");
                for (int i = 0; i < count; ++i) {
                    free(students[i].fio);
                    free(students[i].group);
                }
                free(students);
                fclose(file);
                return 1;
            }
            students = tmp_s;
        }

        char* fio = strtok(line, ",");
        char* group = strtok(NULL, ",");
        char* grade_str = strtok(NULL, ",");
        students[count].fio = (char*)malloc(strlen(fio) + 1);
        students[count].group = (char*)malloc(strlen(group) + 1);
        strcpy(students[count].fio, fio);
        strcpy(students[count].group, group);
        students[count].mark = atoi(grade_str);
        count++;
    }
    print_student(students, count);
    printf("%lf\n", avg_stud(students, count));
    for (int i = 0; i < count; ++i) {
        free(students[i].fio);
        free(students[i].group);
    }
    free(students);
    
    fclose(file);
    return 0;
}
