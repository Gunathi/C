#include<stdio.h>

void main(){

    int value1,value2;
    char operater;

    printf("Enter expression \n");
    scanf("%d%c%d",&value1,&operater,&value2);

    if(operater == '+')
        printf("%d",value1+value2);
    else if(operater == '-')
            printf("%d",value1-value2);
        else if(operater == '*')
                printf("%d",value1*value2);
            else if(operater == '/')
                    if(value2 == 0)
                        printf("Can't divide by zero");
                    else
                        printf("%d",value1/value2);

}
