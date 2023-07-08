int sum(char str[],int l){

    int sum = 0;

    for(int i = 0; i < l; i++){
        sum = sum + str[i];
    }

    return sum;

}
