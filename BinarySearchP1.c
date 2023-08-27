#include <stdio.h>

int binary_search(int array[], int size, int element) {
  int low = 0;
  int high = size - 1;
  int mid;

  while (low <= high) {
    mid = (low + high) / 2;

    if (array[mid] == element) {
      return mid;
    } else if (array[mid] < element) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  int array[] = {1, 3, 5, 7, 9};
  int size = sizeof(array) / sizeof(array[0]);
  int element = 5;

  int index = binary_search(array, size, element);

  if (index == -1) {
    printf("Element not found.\n");
  } else {
    printf("Element found at index %d.\n", index);
  }

  return 0;
}

