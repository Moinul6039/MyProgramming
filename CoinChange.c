#include <stdio.h>
void insertion(int taka[], int total_coin){
 int item, i;

 for(i = 1; i < total_coin; i++){
    item = taka[i];
    int j = i - 1;
    while(j >= 0 && taka[j] < item)
        {
            taka[j+1] = taka[j];
            j = j - 1;
        }
        taka[j+1] = item;
    }
}
int main (){
 int m,i,back, total_coin;
 int taka[100];
 printf("Enter total coin : ");
 scanf("%d", &total_coin);
 printf("Enter coin : ");

    for(i = 0; i < total_coin; i++){
    scanf("%d", &taka[i]);
    }

    insertion(taka,total_coin);

    printf("Enter taka : ");
    scanf("%d", &back);
    printf("\nMinimum coin : \n");

    for(i=0; i<total_coin; i++){
    if(taka[i]<= back){
        m=back/taka[i];
        printf("%d coin %d times\n",taka[i],m);
        back=back%taka[i];
        }
    }
    return 0;
}
