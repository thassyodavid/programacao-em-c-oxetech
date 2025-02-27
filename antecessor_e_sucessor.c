#include <stdio.h>

//Exercício The Huxley | Antecessor e Sucessor - Acertos 4 de 4

int main() {
    int numero;
    int antecessor;
    int sucessor;
    
    scanf("%d",&numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("\n%d %d ",antecessor,sucessor);
	return 0;
}