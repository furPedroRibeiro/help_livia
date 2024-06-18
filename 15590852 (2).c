#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char word[10];
    char wordTwo[10];

    char wordFile[10];
    FILE *fptr;

    fscanf(stdin, "%s", word);
    fscanf(stdin, "%s", wordTwo);

    fptr = fopen("palavras.txt", "r");
    if(fptr == NULL){
        printf("Erro ao abrir arquivo!!!\n");
    }

    int countWordOne = 0;
    int countWordTwo = 0;
    while(fscanf(fptr, "%s", wordFile) != EOF){
        if(strcmp(word, wordFile) == 0){
            countWordOne++;
        }
        if(strcmp(wordTwo, wordFile) == 0){
            countWordTwo++;
        }
    }
    fclose(fptr);
    printf("%d ", countWordOne);
    printf("%d ", countWordTwo);
    return 0;
}
