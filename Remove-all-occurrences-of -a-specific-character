#include<stdio.h>
#define SIZE 100

void removeChar(char* str,char ch){

    int n,i,j;
    n = strlen(str);

    for(i = 0; i < n; i++){
        if(str[i] == ch){
            for(j = i; j < n; j++){
                str[j] = str[j+1];
            }
        }
    }

    printf("%s",str);

}

void main(){


    char str[SIZE],ch;

    scanf("%[^\n]",str);
    scanf(" %c",&ch);

    removeChar(str,ch);

}
