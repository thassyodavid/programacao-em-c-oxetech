#include <stdio.h>

//Exercício The Huxley | Analisando Processos - Acertos 1 de 1

int main() {
    int tempoProcesso;
    int totalProcessos;
    
    scanf("%d",&tempoProcesso);
    totalProcessos = 480 / tempoProcesso;
    
    printf("\n%d",totalProcessos);
    
	return 0;
}