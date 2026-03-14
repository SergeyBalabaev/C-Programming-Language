#include <stdio.h>
#include <stdlib.h>
void input_array(double** x, int X_arr, int Y_arr)
{
  int arrMax = 100, arrMin = 0;
  for (int i = 0; i < X_arr; i++)
    for (int j = 0; j < Y_arr; j++)
      x[i][j] = arrMin + (arrMax - arrMin) * ((double)rand() / RAND_MAX);
}

void print_array(double** x, int X_arr, int Y_arr)
{
  for (int i = 0; i < X_arr; i++) {
    for (int j = 0; j < Y_arr; j++)
      printf("%lf ", x[i][j]);
    printf("\n ");
  }
}

int main(){
  int arr_X, arr_Y;
  scanf_s("%d%d", &arr_X, &arr_Y);
  double** array_heap = (double**)malloc(arr_X * sizeof(double*));
  for (int i = 0; i < arr_X; ++i){
    array_heap[i] = (double*)malloc(arr_Y * sizeof(double));
  }
  input_array(array_heap, arr_X, arr_Y);
  print_array(array_heap, arr_X, arr_Y);
  for (int i = 0; i < arr_X; i++)  // цикл по строкам
    free(array_heap[i]);   // освобождение памяти под строку
  free(array_heap);
  return 0;
}
