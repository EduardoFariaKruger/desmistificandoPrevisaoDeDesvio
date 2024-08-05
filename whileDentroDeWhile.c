#include <stdio.h>

#define TAM 100
int main()
{
    int i, j;
    i = 0;
    j = 0;
    while(i < TAM)
    {
        while(j < TAM)
        {
            printf("%d %d\n", i, j);
            j++;
        }
        i++;
        j = 0;
    }
    return 1;
}