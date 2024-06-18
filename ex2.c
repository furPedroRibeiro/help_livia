#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void primos(int a, int b, int *ptrNumbers);

int main(){
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    int *ptrNumbers;
    ptrNumbers = calloc(b, sizeof(int));

    primos(a, b, ptrNumbers);

    for(int i=0; i<b;i++){
        if(ptrNumbers[i] != 0){
            printf("%d\n", ptrNumbers[i]);
        }
    }

    free(ptrNumbers);
    return 0;
}

void primos(int a, int b, int *ptrNumbers){
    int countPrimos = 0;
    int countDiv = 0;
    for(int i=a;i<=b;i++){
        countDiv = 0;
        for(int j=1;j<=i;j++){
            if(i%j == 0){
                countDiv++;
            }
        }
        if(countDiv == 2 || i == 1){
            ptrNumbers[countPrimos] = i;
            countPrimos++;
        }
    }
}

