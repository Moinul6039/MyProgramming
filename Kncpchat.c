#include <stdio.h>

int knapsack(int items[], int weights[], int profits[], int n, int capacity) {
  int i, w;
  int table[n + 1][capacity + 1];

  // Initialize the table
  for (i = 0; i <= n; i++) {
    for (w = 0; w <= capacity; w++) {
      if (i == 0 || w == 0) {
        table[i][w] = 0;
      } else if (weights[i - 1] <= w) {
        table[i][w] = max(profits[i - 1] + table[i - 1][w - weights[i - 1]], table[i - 1][w]);
      } else {
        table[i][w] = table[i - 1][w];
      }
    }
  }

  // Return the maximum profit
  return table[n][capacity];
}

int main() {
  int items[] = {1, 2, 3, 4};
  int weights[] = {1, 2, 3, 4};
  int profits[] = {10, 20, 30, 40};
  int n = sizeof(items) / sizeof(items[0]);
  int capacity = 5;

  int maxProfit = knapsack(items, weights, profits, n, capacity);

  printf("The maximum profit is: %d\n", maxProfit);

  return 0;
}
