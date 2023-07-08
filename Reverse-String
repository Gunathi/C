#include<stdio.h>
#define SIZE 1000

void main(){

    char str[SIZE],ch;
    int i,n;

    scanf("%[^\n]",str);

    n = strlen(str);

    for(i = 0; i < n; i++){
        ch = str[i];
        str[i] = str[n-(i+1)];
        str[n-(i+1)] = ch;
        printf("%c",str[i]);
    }
}
