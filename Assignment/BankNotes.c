#include<stdio.h>

//CREATING A FUNCTION CALLED CalBankNote WITH A,B,S & N AS PARAMETERS.
int CalBankNotes(int A, int B, int S, int N){

    int z, x;
    //CALCULATE B-A
    z = B-A;

    //CALCULATE NO OF BANKNOTES WORTH A.
    x = (N*B - S)/z;


    if(x < 0){
        return -1;
    }else {
        return x;
    }


}
void main(){

    int A,B,S,N,banknotes;

    //GETTING VALUES FOR A, B, S & N FROM USER
    scanf("%d %d %d %d",&A,&B,&S,&N);

    //CALLING CalBankNotes FUNCTION.
    banknotes = CalBankNotes(A, B, S, N);

    //PRINT NO OF A BANKNOTES
    printf("%d",banknotes);

}
