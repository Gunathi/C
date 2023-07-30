#include <stdio.h>

int main() {
    FILE *file;
    char name[100];

    file = fopen("user_names.txt", "w");

    printf("Enter your name: ");
    scanf("%[^\n]",name);

    fprintf(file, "%s\n", name);

    fclose(file);
    return 0;
}

