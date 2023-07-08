#include<stdio.h>

int sum(int n){

    if(n == 0){
        return 0;
    }else {
        int summation = n % 10 + sum(n/10);
        return summation;
    }


}

void main(){

    int n;

    scanf("%d",&n);

    printf("%d",sum(n));
}
