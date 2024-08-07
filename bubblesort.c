#include <stdio.h>
#include <stdlib.h>

#define TAM 3000

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int geraAleatorio(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main(){
    srand(0);
    int v[TAM];

    for (int i = 0; i < TAM ;i++) {
        v[i] = geraAleatorio(0,1000);
    }

    bubbleSort(v,TAM);
    
    return 0;
}












