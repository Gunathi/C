#include<stdio.h>

//getting factorial to calculate nCr
int fact(int i){

    int k;

    if(i == 0){
        k = 1;
    }else{
        for(k = 1; i >= 1; i--){
            k *= i;
    }
    }

    return k;
}

//Calculate nCr
int ncr(int i, int j){

    int f;

    f = fact(i) / (fact(i-j)*fact(j));
    return f;
}

void main(){

    int i,j,n;

    printf("Enter n: ");
    scanf("%d",&n);

  //outer loop for rows
    for(i = 0; i <= n; i++){

      //first inner for spaces to get the tiangle shape 
        for(j = 0; j <= n-i; j++){
            printf("  ");
        }

      //second inner loop for numbers
        for(j = 0; j <= i; j++){
            printf(" %3d",ncr(i,j));
        }
        printf("\n");
    }
}
