#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int key=12;
    int n=9;
    int flag=0;

    for(int i=0; i<n; i++){
        if(a[i]==key){
                flag++;
        }else{
            flag;
        }

    }
    if(flag==1){
        printf("Found it");
    }
    else{
        printf("Not found");
    }
}
