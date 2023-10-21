#include<stdio.h>

void main() {

    int i,j,k,rows;

    printf("Enter number of rows do you want: ");
    scanf("%d",&rows);

    //Right Half Pyramid
    for(i=0; i<rows; i++){
        for(j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\n");

    /*  *
        * *
        * * *
        * * * *
        * * * * *
        * * * * * * ...
    */

    //Left Half Pyramid
    for(i=0; i<rows; i++){
        for(j=rows; j>=i; j--){
            printf("  ");
        }
        for(k=0; k<=i; k++){
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\n\n");

    /*           *
               * *
             * * *
           * * * *
         * * * * *
    */


    //Full Pyramid
    for(i=0; i<rows; i++){
        for(j=0; j<=rows-i; j++){
            printf(" ");
        }
        for(k=0; k<=i; k++){
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\n\n");

    /*      *
           * *
          * * *
         * * * *
        * * * * *

    */


    //Full pyramid second type
    for(i=0; i<rows; i++){
        for(j=0; j<=rows-i-2; j++){
            printf("  ");
        }
        for(k=0; k<2*i+1; k++){
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\n\n");

    /*      *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *


    */

}
