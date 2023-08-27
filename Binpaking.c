#include <stdio.h>
#include <stdlib.h>

#define MAX_ITEMS 100

int main() {
  int n, i, j, count=1, min_space;
  int weight[MAX_ITEMS], capacity;

  // Get the number of items and the bin capacity
  printf("Enter the number of items: ");
  scanf("%d", &n);
  printf("Enter the bin capacity: ");
  scanf("%d", &capacity);

  // Initialize the weight array
  for (i = 0; i < n; i++) {
    printf("Enter the weight of item %d: ", i + 1);
    scanf("%d", &weight[i]);
  }

  // Sort the weight array in decreasing order
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (weight[i] < weight[j]) {
        int temp = weight[i];
        weight[i] = weight[j];
        weight[j] = temp;
      }
    }
  }




  // Initialize the minimum space in a bin
  min_space = capacity;

  // Traverse the weight array
  for (i = 0; i < n; i++) {
    // If the current item can fit in the current bin
    if (weight[i] <= min_space) {
      min_space -= weight[i];
    } else {
      // Create a new bin
      count++;
      min_space = capacity - weight[i];
    }
  }

  // Print the minimum number of bins
  printf("The minimum number of bins required is: %d\n", count);

  return 0;
}
