#include<stdio.h>
#include<string.h>

void main(){

    int N,i,j;
    char arr[100][100],min,minarr[100];

    printf("Enter number : ");
    scanf("%d",&N);

    for(i=0; i<N; i++){
        printf("Enter the string: ");
        scanf("%s",arr[i]); //this can be done only when using string.h library
    }

    printf("\n\n");

    /*for(i=0; i<N; i++){
        for(j=0; j<sizeof(arr[i]); j++){
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }*/

    for(i=0; i<N; i++){
            min = arr[i][0];
        for(j=1; j<strlen(arr[i]); j++){
            if(arr[i][j] < min){
                min = arr[i][j];
            }
            else {
                min = min;
            }
        }
        minarr[i] = min;
    }

    for(i=0; i<N; i++){
        printf("%c",minarr[i]);
    }


}
