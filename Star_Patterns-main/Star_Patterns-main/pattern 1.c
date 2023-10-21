#include<stdio.h>

void main(){

    int i,j,k,spaces=0;

    //upper part of the pattern

    for(i=0; i<5; i++){
        for(j=0; j<spaces; j++){
            printf(" ");
        }
        for(k=0; k<6; k++){
            printf("*");
        }
        printf("\n");
        spaces++;
    }

    //down part of the pattern

    for(i=0; i<5; i++){
        for(j=0; j<spaces-1; j++){
            printf(" ");
        }
        for(k=0; k<6; k++){
            printf("*");
        }
        printf("\n");
        spaces--;
    }

}
