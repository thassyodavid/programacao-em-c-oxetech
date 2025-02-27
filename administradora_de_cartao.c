#include <stdio.h>

//Exercício The Huxley | Administradora de cartão - Acertos 3 de 3

int main() {
    float valorFatura, valorMesAtual, ValorMesSeguinte;
    
    scanf("%f", &valorFatura);
    valorMesAtual = valorFatura / 2;
    ValorMesSeguinte = valorMesAtual + (valorMesAtual * 0.065);
    
    printf("\nValor total da fatura: R$ %.2f", valorFatura);
    printf("\nValor a pagar em Marco: R$ %.2f", valorMesAtual);
    printf("\nValor a pagar em Abril: R$ %.2f", ValorMesSeguinte);
    
	return 0;
}