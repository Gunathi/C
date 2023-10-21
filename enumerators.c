#include<stdio.h>

void main(){

    enum days {
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday,
    };

    printf("%d\n",sunday); //0
    printf("%d\n",monday); //1
    printf("%d\n",tuesday); //2
    printf("%d\n",wednesday); //3
    printf("%d\n",thursday); //4
    printf("%d\n",friday); //5
    printf("%d",saturday); //6



    enum days {
        sunday = 1,
        monday,
        tuesday = 5,
        wednesday,
        thursday = 8,
        friday = 10,
        saturday,
    };

    printf("%d\n",sunday); //1
    printf("%d\n",monday); //2
    printf("%d\n",tuesday); //5
    printf("%d\n",wednesday); //6
    printf("%d\n",thursday); //8
    printf("%d\n",friday); //10
    printf("%d",saturday); //11

    enum days {
        monday = 1,
        tuesday,
        wednesday,
        thursday,
        friday
    };

    enum days d = thursday;

    printf("%d",d); //4

}
