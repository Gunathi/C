#include "first-file.c"
#include<stdio.h>
#define SIZE 1000

void main(){

    char str[SIZE];

    scanf("%[^\n]",str);
    int l = strlen(str);

    int s=sum(str,l);

    printf("%d",s);
}
