#include<stdio.h>
#define PI 3.14

int r;
float area;

void inputRadius(){

    extern int r;

    scanf("%d",&r);
}

void CalculateArea(){

    extern int r;
    extern float area;

    area = PI*r*r;
}

void outputArea(){

    extern float area;

    printf("Area is %.2f",area);
}

void main(){

    inputRadius();
    CalculateArea();
    outputArea();

}
