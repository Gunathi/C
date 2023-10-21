#include<stdio.h>
#include<string.h>

void main(){

    char str1[] = "World";
    char str2[] = "Hello";
    int i,result=0;

    if(strlen(str1)>strlen(str2)){
        for(i=0; i<strlen(str1); i++){
            if(str1[i] == str2[i]){
                    continue;
            }else if(str1[i] < str2[i]){
                    result = 1;
            }else {
                    result = -1;
            }
          }
    }else {
        for(i=0; i<strlen(str2); i++){
            if(str1[i] == str2[i]){
                    continue;
            }else if(str1[i] < str2[i]){
                    result = 1;
            }else {
                    result = -1;
            }
    }
    }

    if(result == 0){
        printf("str1 and str2 are same");
    }else if(result == 1){
            printf("str1 comes after str2");
    }else {
            printf("str1 comes before str2");
    }

    printf("\n");
}
