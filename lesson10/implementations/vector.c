#include <stdio.h>
#include <stdlib.h>

struct Vector
{
    double* A;
    int count;
};

void Vector_init(struct Vector* Vec)
{
    Vec->A = NULL;
    Vec->count = 0;
}

void Push_back(struct Vector* Vec, double a)
{
    Vec->A = (double*)realloc(Vec->A, (Vec->count + 1) * sizeof(double));
    Vec->A[Vec->count] = a;
    Vec->count++;
}

void Print(struct Vector* Vec)
{
    printf("Vector:\n");
    for (size_t i = 0; i < Vec->count; ++i)
        printf("%lf\n", Vec->A[i]);
}

void Insert(struct Vector* Vec, int N, double a)
{
    Vec->A = (double*)realloc(Vec->A, (Vec->count + 1) * sizeof(double));
    Vec->count++;
    for (size_t i = Vec->count - 1; i > N; i--)
        Vec->A[i] = Vec->A[i - 1];
    Vec->A[N] = a;
}

void Erase(struct Vector* Vec, int N)
{
    for (size_t i = N; i < Vec->count - 1; ++i)
        Vec->A[i] = Vec->A[i + 1];
    Vec->A = (double*)realloc(Vec->A, (Vec->count - 1) * sizeof(double));
    Vec->count--;
}

void Pop_back(struct Vector* Vec)
{
    Vec->A = (double*)realloc(Vec->A, (Vec->count - 1) * sizeof(double));
    Vec->count--;
}

double get_vector_element(struct Vector* Vec, int elem)
{
    return Vec->A[elem];
}

void Vector_free(struct Vector* Vec)
{
    free(Vec->A);
    Vec->count = 0;
}

int main()
{
    struct Vector Vec;
    Vector_init(&Vec);
    Push_back(&Vec, 5);
    Push_back(&Vec, 2.5);
    Push_back(&Vec, -9.84);
    Print(&Vec);
    Erase(&Vec, 0);
    Insert(&Vec, 0, 3.8);
    Insert(&Vec, 3, 123);
    Print(&Vec);
    printf("A[0]=%lf\n", get_vector_element(&Vec, 0));
    Vector_free(&Vec);
    return 0;
}
