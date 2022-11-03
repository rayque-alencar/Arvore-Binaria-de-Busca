#include "iostream"
#include <stdio.h>
#include <stdlib.h>
#include "NoArvore.hpp"

using namespace std;

int main(){
    NoArvore *raiz = NULL;
    int opcao, valor;

do { // menu de opções
        cout << "\n|----------------------------------------------|" << endl;
        cout << "| 1 - Adicionar elemento na arvore             |"   << endl;
        cout << "| 2 - Imprimir arvore em in-ordem              |"   << endl;
        cout << "| 3 - Buscar valor na arvore                   |"   << endl;
        cout << "| 0 - Finalizar                                |"   << endl;
        cout << "|----------------------------------------------|\n" << endl;
        cout << "Digite a opcao desejada: " << endl;
        cin >> opcao;
        system("clear||cls");

        switch(opcao) {
        //para add elementos na arvore
        case 1:
            cout << "Qual o valor que deseja adicionar: " << endl;
            cin >> valor;
            raiz = inserir(raiz, valor);
            break;
        //printar a arvore
        case 2:
            cout << "Imprimindo a arvore em in-ordem: " << endl;
            imprimir(raiz);
            break;
        //buscar elemento na arvore e retornar o endereco do elemento
        case 3:
            int aux;
            cout << "Qual o valor que deseja buscar na arvore: " << endl;
            cin >> aux;
            cout<< "O endereco do elemento eh: " << busca(raiz, aux) << endl;
            if( busca(raiz, aux) == NULL){
                cout<< "Elemento do valor " << aux << " nao foi encontrado" << endl;
            }
            break;
        case 0:
            cout << "Finalizando..." << endl;
            break;
        default:
            cout << "Opcao invalida!" << endl;
        }
    } while(opcao != 0);

    return 0;
}
