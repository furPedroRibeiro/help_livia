#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void diference(int *ptrVetor, int *diferenceNumbers);

int main(){
    int numbers[10];
    int *ptrVetor = &numbers;
    int diferenceNumbers[9];
    int *ptrDiferenceNumbers = &diferenceNumbers;


    for(int i=0; i<10;i++){
        scanf("%d", &numbers[i]);
    }

    diference(ptrVetor, ptrDiferenceNumbers);

    for(int i=0; i<9;i++){
        printf("%d\n", diferenceNumbers[i]);
    }

    return 0;
}

void diference(int *ptrVetor, int *diferenceNumbers){
    for(int i=0;i<9;i++){
        diferenceNumbers[i] = ptrVetor[i+1]-ptrVetor[i];
    }
}
