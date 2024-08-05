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
    i = 0;
    while(i < TAM)
    {
        /*gera um valor aleatorio entre 1 e 10*/
        valorAleatorio = geraAleatorio(1, 10);
        if(valorAleatorio < 5)
        {
            /*desviou "para a esquerda"*/
            printf("1\n");
        }
        else
        {
            /*desviou "para a direita"*/
            printf("2\n");
        }
        i++;
    }
    return 1;
}