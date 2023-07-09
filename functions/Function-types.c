#include<stdio.h>

//function declarations
int add(int, int);
void multi(int, int);
int divide(void);
void subtract(void);

//defining functions
int add(int a, int b){
        return a+b;
}

void multi(int a, int b){
    printf("Multiplication of a and b is %d",a*b);
}

int divide(){
    int a = 10,b = 5;
    return a/b;
}

void subtract() {
    int a = 30, b = 10;
    printf("Subtract of a and b %d",a-b);
}


void main(){

    //calling functions
    int sum = add(20,40);

    multi(20,2);

    int div = divide();
    printf("\ndivision of a and b is %d\n",div);

    subtract();
}
