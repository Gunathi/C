#include<stdio.h>

void OrderNumbers(int* x, int* y){

    int t;

    if(*x < *y){
        t = *x;
        *x = *y;
        *y = t;
    }
}


void main(){

    int x,y;

    scanf("%d %d",&x,&y);

    OrderNumbers(&x,&y);

    printf("%d,%d",x,y);
}
