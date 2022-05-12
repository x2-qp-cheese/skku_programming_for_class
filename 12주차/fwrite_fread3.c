#include <stdio.h>

int main()
{
    FILE* fp1 = fopen("data/fprintf.txt", "w+");
    FILE* fp2 = fopen("data/fwrite.bin", "wb+");

    int i = 1234567890;
    printf("1: %d\n", i);

    fprintf(fp1, "%d", i);
    fwrite(&i, 4, 1, fp2);
    rewind(fp1);
    rewind(fp2);

    i = 0;
    fscanf(fp1, "%d", &i);
    printf("2: %d\n", i);

    fclose(fp1);
    fclose(fp2);

    return 0;
}