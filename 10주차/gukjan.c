#include <string.h>
#include <stdio.h>

#define MAXLEN 100
#define WILDCARD '?'
#define FALSE 0 
#define TRUE 1 
#define NO_WILDCARD -1 

int is_equal(char* former, char* letter);

int main() {
	char former[MAXLEN] = {0, };
	char latter[MAXLEN]	= {0, }; 
	
	printf("String#1: ");
	scanf("%s", former);
	printf("String#2: ");
	scanf("%s", latter); 
	
	if(is_equal(former, latter))
		printf("Equal!\n");
	else 
		printf("Not equal!\n"); 
	
	return 0;
}

int is_equal(char* former, char* latter) {
    int formerLen = strlen(former);
    int latterLen = strlen(latter);
    int equal = 1;

    if (formerLen == latterLen) {
        for (int i = 0; i < formerLen; i++) {
            if (!former[i] == '?') {
                if (former[i] != latter[i]) {
                    equal = 0;
                }
            }
        }
    } else {
        int j = 0;
        for (int i = 0; i < formerLen; i++) {
            if (!former[i] == '?') j--;
            if (former[i] != latter[j]) equal = 0;
            j++;
        }
    }

    return equal;
}d