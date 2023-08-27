#include <stdio.h>

int binary_search_first_occurrence(int array[], int size, int element) {
  int low = 0;
  int high = size - 1;
  int mid;

  while (low <= high) {
    mid = (low + high) / 2;

    if (array[mid] == element) {
      // Check if this is the first occurrence of the element.
      if (mid == 0 || array[mid - 1] != element) {
        return mid;
      } else {
        high = mid - 1;
      }
    } else if (array[mid] < element) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  int array[] = {1, 1, 1, 3, 5, 5, 7, 9};
  int size = sizeof(array) / sizeof(array[0]);
  int element = 1;

  int index = binary_search_first_occurrence(array, size, element);

  if (index == -1) {
    printf("Element not found.\n");
  } else {
    printf("The first occurrence of the element is at index %d.\n", index);
  }

  return 0;
}

