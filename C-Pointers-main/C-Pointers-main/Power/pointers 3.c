 #include<stdio.h>

//Using pointers(subroutines)
 void Power(int x, int n, int* z){

    *z = 1;

    for(int i = 1; i<= n; i++){

        *z = *z*x;
    }

 }

 void main(){

        int x,y,z;

        scanf("%d %d",&x,&y);

        Power(x,y,&z);

        printf("%d",z);
 }


 //Using functions
 int Power(int x, int n){

    int counter = 1,z = 1;

    while(counter <= n){

        z *= x;
        n--;
    }
    return z;
 }

 void main(){

    int x,y,z;

    scanf("%d %d",&x,&y);

    z = Power(x,y);

    printf("%d",z);
 }
