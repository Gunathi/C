#include<stdio.h>
#include<math.h>

void Calculate(int n, int* p){

    *p = 0;

    for(int i = 1; i <= n; i++){
       
          *p = *p + pow(i,2);
    }
}

void main(){

    int n,p;

    scanf("%d",&n);

    Calculate(n,&p);

    printf("%d",p);
}
