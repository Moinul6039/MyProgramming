#include<stdio.h>
void selection_sort(int A[], int n) {
  int i, j, min_index;
  for (i = 0; i < n - 1; i++) {
    min_index = i;
    for (j = i + 1; j < n; j++) {
      if (A[j] < A[min_index]) {
        min_index = j;
      }
    }
    int temp = A[i];
    A[i] = A[min_index];
    A[min_index] = temp;
  }
}
void bubble_sort(int A[], int n) {
  int i, j, temp;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (A[j] > A[j + 1]) {
        temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
  }
}
void printArray(int A[],int n){
    for(int i=0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
void insertionSort(int *A, int n){
    int key,j;
    for(int i=1; i<=n-1; i++){
      key = A[i];
      j=i-1;
       while(j>=0 && A[j] > key){
        A[j+1]= A[j];
        j--;

       }
       A[j+1]= key;
    }
}

int main()
{
    int A[]={12,54,65,7,23};
    int n = sizeof(A) / sizeof(A[0]);

    printArray(A,n);
    selection_sort(A,n);
   // insertionSort(A,n);
   // bubble_sort(A,n);
     printArray(A,n);


  return 0;
}
