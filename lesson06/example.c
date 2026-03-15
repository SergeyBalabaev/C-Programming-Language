#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 3;
const int M = 3;

void processMatrices(int staticM[][M], int **dynamicM, int rows, int cols)
{
    printf("Addition:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            int sum = staticM[i][j] + dynamicM[i][j];
            printf("%4d", sum);
        }
        printf("\n");
    }
}

int main()
{

    srand(time(NULL));
    int staticMatrix[N][M];
    int **dynamicMatrix = (int**)malloc(N * sizeof(int*));
    for(int i = 0; i < N; i++)
        dynamicMatrix[i] = (int*)malloc(M * sizeof(int));

    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            staticMatrix[i][j] = rand() % 100;

    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            dynamicMatrix[i][j] = rand() % 100;

    processMatrices(staticMatrix, dynamicMatrix, N, M);

    for(int i = 0; i < N; i++)
        free(dynamicMatrix[i]);
    free(dynamicMatrix);
    return 0;
}