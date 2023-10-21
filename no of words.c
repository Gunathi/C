#include<stdio.h>
#define SIZE 1000

void main(){

    char str[SIZE];
    int i=0,count = 1;

    printf("Enter the string: ");
    scanf("%[^\n]",str);

    while(str[i] != '\0'){
        if(str[i] == ' '){
            count++;
        }
        i++;
    }
    printf("No of words in that string is %d",count);
}
