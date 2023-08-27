#include <stdio.h>
int maximum_element(int array[], int size) {
  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }

  return max;
}

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int size = sizeof(array) / sizeof(array[0]);

  int max = maximum_element(array, size);

  printf("The maximum element in the array is %d.\n", max);

  return 0;
}

