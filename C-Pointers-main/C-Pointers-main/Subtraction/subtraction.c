#include<stdio.h>


void main(){

    int arr[] = {10,0,-1,1,13},d;
    int* p = &arr[0];
    int* q = &arr[3];

    d = q-p;
    q = q -2;

    printf("%d\n",d); //3
    printf("%p\n",&arr[1]);
    printf("%p",q);
}
