#include<stdio.h>

int binary_search(int a[],int n, int x)
{
    int left,right,mid;
    left = 0;//0
    right =n-1;//8

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

     int a[]={1,2,3,4,5,6,7,8,9,10};
     int x=6;
     int n = sizeof(a) / sizeof(a[0]);

     int index = binary_search(a,n,x);
     if(index == '-1'){
        printf("Value is not found\n");
     }
     else{
        printf("Value is found at index %d and the number is %d\n",index,x);
     }

 }
