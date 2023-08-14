#include<stdio.h>
#include<math.h>
#define SIZE 1000

int rem,i =0,result = 0;

void decimalConverter(long int n){

    if(n != 0){
       rem = n%10;
       result += rem*pow(2,i);
       i++;
       decimalConverter(n/10);
    }
}


void main(){

    int n;

    printf("Enter the binary number: ");
    scanf("%d",&n);
    
    decimalConverter(n);
    printf("The decimal number is %d ",result);

}
