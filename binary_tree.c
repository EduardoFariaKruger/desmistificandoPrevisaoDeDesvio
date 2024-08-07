#include <stdio.h>
#include <stdlib.h>

#define TAM 30000
#define VALUE 15000
//Criamos uma árvore binária de busca balanceada e buscamos um valor. Em teoria, a depender do quão extremo for o valor (grande ou pequeno) o número de acertos no branch será maior).


typedef struct Node {
    int value;
    struct Node *left;
    struct Node *right;
} Node;

Node* createNo(int value) {
    Node* newNo = (Node*)malloc(sizeof(Node));
    newNo->value = value;
    newNo->left = NULL;
    newNo->right = NULL;
    return newNo;
}

Node* buildBalancedTree(int* arr, int start, int end) {
    if (start > end) {
        return NULL;
    }

    int mid = (start + end) / 2;
    Node* root = createNo(arr[mid]);

    root->left = buildBalancedTree(arr, start, mid - 1);
    root->right = buildBalancedTree(arr, mid + 1, end);

    return root;
}

Node* createBalancedTree(int X) {
    int* arr = (int*)malloc(X * sizeof(int));
    for (int i = 0; i < X; i++) {
        arr[i] = i;
    }

    Node* root = buildBalancedTree(arr, 0, X - 1);
    free(arr);
    return root;
}



Node* search(Node* root, int value) {
    if (root == NULL || root->value == value) {
        return root;
    }

    if (value < root->value) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}
int main() {

    Node* root = createBalancedTree(TAM);
    Node* node = search(root,VALUE);

    
    return 0;
}
