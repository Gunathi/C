#include<stdio.h>
#include<string.h>
#define SIZE 100

//CREATING A FUNCTION TO GET THE NUMBER OF LETTERS TO MAKE A PALINDROME WITH A PARAMETER pal.
int PalCreate(char pal[]){

    int i,j,n,count1=0,count2=0,flag;

    n = strlen(pal); //LENGTH OF ENTERED STRING

    //CHECKING THAT PALINDROME OR NOT
    for(i=0; i<n; i++){

        if(pal[i] == pal[n-(i+1)]){
            flag = 1;
            continue;
        }else {
            flag = 0;
        }
    }

    if(flag == 0){

        //COUNT NUMBER OF LETTERS HAVE TO ADD BACK TO MAKE A PALINDROME
        for(i=0,j = n-1; i<j; i++,j--){
            if(pal[i] != pal[j]){
                count1++;
                j++;
            }
        }

        //COUNT NUMBER OF LETTERS HAVE TO ADD FRONT TO MAKE A PALINDROME
        for(i=n-1, j=0; j<i; i--,j++){
            if(pal[i] != pal[j]){
                count2++;
                j--;
            }
        }

        //COMPARE AND GET LESS NUMBER OF LETTERS AS OUTPUT
        if(count1>count2){
            return count2;
        }else {
            return count1;
        }

    }else {
        return 0;
    }
}

void main(){

    char pal[SIZE];
    int count =0;

    //GETTING STRING FROM USER
    printf("Enter word: ");
    scanf("%[^\n]",pal);

    //CALLING THE FUNCTION PalCreate
    count = PalCreate(pal);

    //PRINT THE NUMBER OF LETTERS TO MAKE A PALINDROME.
    printf("%d",count);
}

