#include "NoArvore.hpp"

//metodo para criar e inserir um elemento na arvore
NoArvore* inserir(NoArvore* raiz, int valor){

    if (raiz == NULL) {
        raiz = (NoArvore*) malloc(sizeof (NoArvore ));
        raiz-> valor = valor;
        raiz-> esquerda = raiz-> direita = NULL;
    }else if(valor < raiz-> valor)
        raiz-> esquerda = inserir(raiz->esquerda ,valor);
    else 
        raiz-> direita = inserir(raiz->direita,valor);
    return raiz;
}

//metodo para imprimir a arvore em in-ordem
void imprimir(NoArvore* raiz){

    if (raiz != NULL) {

    imprimir(raiz->esquerda);
    cout << " | " << raiz->valor << " | " << endl;
    imprimir(raiz-> direita);
    }
}

// metodo para busca de elementos na arvore 
NoArvore* busca(NoArvore* raiz, int valor){

    if (raiz == NULL){
        return NULL;
    }else if (raiz-> valor > valor){
        return busca (raiz->esquerda, valor);
    }else if (raiz-> valor < valor){
        return busca (raiz->direita, valor);
    }else{
    return raiz;
    }
}