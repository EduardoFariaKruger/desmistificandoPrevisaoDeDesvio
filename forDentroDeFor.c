#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int main()
{
    int i, j;
    for(i = 0; i < TAM; i++)
    {
        for(j = 0; j < TAM; j++)
        {
            printf("%d %d\n", i, j);
        }
    }
    return 1;
}