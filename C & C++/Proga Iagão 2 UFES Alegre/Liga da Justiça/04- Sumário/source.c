// Iago Gravel do Nascimento
//
// Entradas para teste do programa: 10 capitulos e 2 se��es; 2 capitulos e 10 se��es; 0 capitulos e 0 se��es.

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0, "Portuguese");

    // c, i e j s�o contadores de repeti��o
    int c, i, j, capitulos, secoes;

    printf("Digite o n�mero de cap�tulos: ");
    scanf("%i", &capitulos);
    printf("Digite o n�mero de se��es de cada cap�tulo: ");
    scanf("%i", &secoes);

    for(c=0; c<capitulos; c++){
        printf("\nCap�tulo %i", c+1);
        for(i=0; i<secoes; i++){
            printf("\n.     Se��o %i", i+1);
        }
        j++;
        printf("\n");
    }
}
