#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int temp;


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
        }
    }


}

int main() {
    int arr[100];
    int n;
    int count = 0;
    scanf("%d",&n);
    for(int i =0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if(arr[i]>50){
           count++;
        }
    }
    printf("\n");
    printf("%d\n",count);


    return 0;
}

