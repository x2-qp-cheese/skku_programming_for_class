#include <stdio.h>

void fget_example_double_space(){
    FILE* fp;
    char ch;
    fp = fopen("data/read.txt", "r");
    FILE* fp2 = fopen("data/write.txt", "w");

    if(fp == NULL || fp2 == NULL)
        return;
    
    while ((ch = fgetc(fp)) != EOF){
        fprintf(fp2, "%c", ch);
        if(ch == " ")
            fprintf(fp2, "%c", ch);
    }
    fclose(fp);
    fclose(fp2);
}

int main(void){
    fget_example_double_space();
    return 0;
}