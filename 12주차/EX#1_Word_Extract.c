#include <stdio.h>
#include <string.h>

int main(){
    int num = 0;
    FILE *fp = fopen("data/Obama_Speech.txt", "r");
    printf("Input the word you want to extract : ");
    
    char input_word[20];
    scanf("%s", input_word);
    char storage[20];

    while(fscanf(fp, "%s", storage) != EOF)
    {
        if(strcmp(input_word, storage) == 0)
        {
            num+=1;
        }
    }
    fclose(fp);
    
    printf("Number of input words in Obama's speech : %d", num);
    return 0;
}
/*while ((ch = fgetc(fp)) != EOF){
        fprintf(fp2, "%c", ch);
        if(ch == " ")
            fprintf(fp2, "%c", ch);
    }
    fclose(fp);*/