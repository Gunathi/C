#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 50

//FUNCTION TO CONCAT TWO INTEGERS
int ConcatNumb(int num1,int num2){

    char str1[SIZE],str2[SIZE],str3[SIZE];

    //CHANGE INTEGER TO A STRING USING SPRINTF FUNCTION
    sprintf(str1,"%d",num1);
    sprintf(str2,"%d",num2);
    sprintf(str3,"%d",num1);

    strcat(str1,str2);
    strcat(str2,str3);

    //COMPARE CONCATENATED STRING AN RETURN LARGEST VALUE.
    if(atoi(str1) > atoi(str2))
        return atoi(str1);
    else
        return atoi(str2);
}

void main(){

    int n,num1,num2,i;

    //GETTING NUMBER OF NUMBERS USER GOING TO ENTER FROM USER
    scanf("%d",&n);
    //GETTING FIRST NUMBER FROM USER
    scanf("%d",&num1);

    for(i=1;i<n;i++){
        scanf("%d",&num2);
        num1 = ConcatNumb(num1,num2);
    }

    //PRINT LARGEST CONCATED NUMBER
    printf("%d",num1);
}

