#include<stdio.h>

int binary_search(int a[],int n, int x)
{
    int left,right,mid;
    left = 0;
    right =n-1;

    while(left<=right)
    {
        mid = (left+right)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]<x){
            left = mid+1;

        }
        else if(a[mid]>x){
            right = mid-1;
        }

    }
    return -1;

}

 int main()
 {

     int a[100],n,x;
     printf("Enter element value\n");
     scanf("%d",&n);
     for(int i=0; i<n;i++){
        scanf("%d",&a[i]);
     }
     printf("Enter search value\n");
     scanf("%d",&x);


     //int n = sizeof(a) / sizeof(a[0]);

     int index = binary_search(a,n,x);
     if(index == -1){
        printf("Value is not found\n");
     }
     else{
        printf("Value is found at index %d and the number is %d\n",index,x);
     }

 }

