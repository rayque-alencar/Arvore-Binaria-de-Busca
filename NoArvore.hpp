#ifndef NOARVORE_HPP
#define NOARVORE_HPP

#include "iostream"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//estrutura para criacao da arvore
typedef struct NoArvore{
    int valor;
    NoArvore* esquerda; 
    NoArvore* direita;
};

NoArvore* inserir(NoArvore* raiz, int valor);
void imprimir(NoArvore* raiz);
NoArvore* busca(NoArvore* raiz, int valor);




#endif