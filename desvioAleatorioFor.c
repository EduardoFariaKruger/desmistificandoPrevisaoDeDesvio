#include <stdio.h>
#include <stdlib.h>

#define TAM 10000

int geraAleatorio(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main()
{
    srand(0);
    int i, valorAleatorio;
    for(i = 0; i < TAM; i++)
    {
        /*gera um valor entre 1 e 10*/
        valorAleatorio = geraAleatorio(1, 10);
        if(valorAleatorio <= 5)
        {
            /*desvia "para a esquerda"*/
            printf("1\n");
        }
        else
        {
            /*desvia "para a direita"*/
            printf("2\n");
        }
    }
}