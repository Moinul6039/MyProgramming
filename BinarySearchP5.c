#include <stdio.h>

int find_peak_element(int array[], int size) {
  int low = 0;
  int high = size - 1;
  int mid;

  while (low <= high) {
    mid = (low + high) / 2;

    // Check if the middle element is a peak element.
    if ((mid == 0 || array[mid - 1] <= array[mid]) &&
        (mid == size - 1 || array[mid + 1] <= array[mid])) {
      return mid;
    } else if (mid > 0 && array[mid - 1] > array[mid]) {
      // The peak element is in the left subarray.
      high = mid - 1;
    } else {
      // The peak element is in the right subarray.
      low = mid + 1;
    }
  }

  // The peak element was not found.
  return -1;
}

int main() {
  int array[] = {1, 3, 5, 7, 9, 8, 7, 5, 3, 115,120,160};
  int size = sizeof(array) / sizeof(array[0]);

  int peak_index = find_peak_element(array, size);

  if (peak_index == -1) {
    printf("No peak element found.\n");
  } else {
    printf("The peak element is at index %d.\n", peak_index);
  }

  return 0;
}

