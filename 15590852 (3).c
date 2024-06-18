#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Filme {
char titulo[50];
char genero[50];
int ano ;
};

int main(){
    const tam = 100;
    struct Filme *f;

    char generoDigitado[50];

    fscanf(stdin, "%s", generoDigitado);

    f = calloc(tam, sizeof(struct Filme));

    FILE *fptr;

    fptr = fopen("filmes.bin", "rb");

    if(fptr == NULL){
        printf("Erro ao abrir o arquivo mano!!!");
    }

    fread(f, sizeof(struct Filme), tam,  fptr);

    for(int i = 0; i<tam; i++){
        if(strcmp(generoDigitado, f[i].genero) == 0){
            printf("%s\n", f[i].titulo);
        }
    }

    free(f);

    return 0;
}
