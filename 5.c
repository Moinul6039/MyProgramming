#include<stdio.h>
int main()
{
    int l,w,a,p;
    scanf("%d %d",&l,&w);
    a=l*w;
    p=2*(l+w);
    printf("Area of the rectangle: %d square units\n", a);
    printf("Perimeter of the rectangle: %d units\n", p);

    return 0;
}
