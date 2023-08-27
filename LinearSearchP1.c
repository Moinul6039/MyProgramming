#include <stdio.h>

int sum_array(int array[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += array[i];
  }

  return sum;
}

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int size = sizeof(array) / sizeof(array[0]);

  int sum = sum_array(array, size);

  printf("The sum of all elements in the array is %d.\n", sum);

  return 0;
}

