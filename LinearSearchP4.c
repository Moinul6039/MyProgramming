#include <stdio.h>

int linear_search(int array[], int size, int element) {
  for (int i = 0; i < size; i++) {
    if (array[i] == element) {
      return i;
    }
  }

  return -1;
}

int main() {
  int array[] = {1, 2, 3, 5, 6};
  int size = sizeof(array) / sizeof(array[0]);
  int element = 5;

  int index = linear_search(array, size, element);

  if (index == -1) {
    printf("Element not found.\n");
  } else {
    printf("Element found at index %d.\n", index);
  }

  return 0;
}

