#include <stdio.h>

int count_frequency(int array[], int size, int element) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] == element) {
      count++;
    }
  }

  return count;
}

int main() {
  int array[] = {1, 2, 3, 1, 5};
  int size = sizeof(array) / sizeof(array[0]);
  int element = 1;

  int frequency = count_frequency(array, size, element);

  printf("The frequency of the element %d in the array is %d.\n", element, frequency);

  return 0;
}

