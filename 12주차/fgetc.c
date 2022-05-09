#include <stdio.h>

int main(void){

    FILE *fp;
    char ch;
    fp = fopen("data/read.txt", "r");

    while ((ch = fgetc(fp)) != EOF){
        printf("%c", ch);
    }
    fclose(fp);

    return 0;
}