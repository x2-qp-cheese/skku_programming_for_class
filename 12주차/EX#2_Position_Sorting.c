#include <stdio.h>

int main(){
    int position;
    char sort[10];
    FILE* fp = fopen("data/Unsorted_Char.txt", "r");
    printf("Input the position : ");
    scanf("%d", &position);
    char storage[10]={0,};

    int i=0;
    while(fscanf(fp, "%s", storage)!=EOF)
    {
        sort[i]=storage[position];
        i++;
    }
    int i, j, n=10;
    char temp;
	for (i=n-1; i>0; i--) {
        for (j=0; j<i; j++) {
            if (sort[j] > sort[j+1]) {
                temp = sort[j];
                sort[j] = sort[j+1];
                sort[j+1] = temp;
            }
        }
    }

    for(int i=0; i<10; i++)
        printf("%c", sort[i]);

    return 0;
}