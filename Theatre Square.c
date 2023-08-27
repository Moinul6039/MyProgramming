#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    int steps = (x + 4) / 5; // Divide x by 5 and round up

    printf("%d\n", steps);

    return 0;
}
