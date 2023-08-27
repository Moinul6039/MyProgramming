#include <stdio.h>

int findSum(int A[], int N)
{
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}


int main()
{
    int A[100],n;
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        scanf("%d",&A[i]);
    }
    int N = sizeof(A) / sizeof(A[]);
    printf("%d", findSum(A, N));
    return 0;
}
