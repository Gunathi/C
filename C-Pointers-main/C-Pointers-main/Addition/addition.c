#include<stdio.h>


void main(){

  // first 
    int a = 12;
    int* p = &a;
  
    p = p+1;
    

    printf("%p\n",p);
    printf("%d\n",*p);

  // second 
    int arr[5] = {10,12,13,14,15};
    int* p = &arr;
    int* q;

    printf("%p\n",&arr[0]);
    printf("%p\n",p);

    p = p+1;
    q = p+2; // this can't do

     printf("%p\n",p);
     printf("%p\n",&arr[1]);
     printf("%d\n",*p);
     printf("%p\n",q); // this is not the same as address of the arr[2].
     printf("%p\n",&arr[2]);

     for(int i = 0; i < 5; i++){
        printf("%d ",*p+i); //10 12 13 14 15
     }
}
