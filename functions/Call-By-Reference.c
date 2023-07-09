#include<stdio.h>

void fun(int*, int*); //function declaration

void fun(int* a, int* b){

    *a = 10;
    *b = 7;
    printf("x = %d , y = %d\n",*a,*b); //x = 10 , y = 7
}

void main(){

    int x,y;

    scanf("%d %d",&x,&y);

    fun(&x,&y); //calling by reference

    printf("x = %d , y = %d\n",x,y); //x = 10 , y = 7
}
