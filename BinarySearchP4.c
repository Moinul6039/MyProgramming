#include <stdio.h>

int binary_search_maximum_bitonic_array(int array[], int size) {
  int low = 0;
  int high = size - 1;
  int mid;

  while (low <= high) {
    mid = (low + high) / 2;

    // Check if the middle element is the maximum element.
    if (mid == 0 || array[mid - 1] < array[mid]) {
      // The middle element is the maximum element.
      return array[mid];
    } else if (array[mid] < array[mid + 1]) {
      // The maximum element is in the right subarray.
      low = mid + 1;
    } else {
      // The maximum element is in the left subarray.
      high = mid - 1;
    }
  }

  // The maximum element was not found.
  return -1;
}

int main() {
  int array[] = {1, 3, 5, 8, 7, 6, 4, 2};
  int size = sizeof(array) / sizeof(array[0]);

  int maximum = binary_search_maximum_bitonic_array(array, size);

  if (maximum == -1) {
    printf("The maximum element was not found.\n");
  } else {
    printf("The maximum element is %d.\n", maximum);
  }

  return 0;
}
