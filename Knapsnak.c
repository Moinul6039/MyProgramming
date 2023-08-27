#include <stdio.h>

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to solve the 0/1 Knapsack Problem
int knapsack(int W, int weights[], int values[], int n) {
    int dp[n + 1][W + 1];

    // Initialize the dynamic programming table
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (weights[i - 1] <= w) {
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W];
}

int main() {
    int values[] = {60, 100, 120};  // Example values of items
    int weights[] = {10, 20, 30};    // Example weights of items
    int n = sizeof(values) / sizeof(values[0]);  // Number of items
    int W = 50;  // Knapsack capacity

    int maxValue = knapsack(W, weights, values, n);
    printf("Maximum value that can be obtained: %d\n", maxValue);

    return 0;
}

