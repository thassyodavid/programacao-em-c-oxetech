#include <stdio.h>

//Exercício The Huxley | 3Ajuda vendedores - Acertos 2 de 2

int main() {
    float valorProduto, total, parcela, comissaoAvista, comissaoParcelado;
    
    scanf("%f", &valorProduto);
    total = valorProduto - (valorProduto * 0.1);
    parcela = (valorProduto / 3);
    comissaoAvista = total * 0.05;
    comissaoParcelado = valorProduto * 0.05;
    
    printf("\nA vista com desconto de 10%: %.2f\n", total);
    printf("Valor da parcela em 3x sem juros: %.2f\n", parcela);
    printf("Comissao do vendedor a vista: %.2f\n",comissaoAvista);
    printf("Comissao do vendedor a prazo: %.2f\n",comissaoParcelado);
    
	return 0;
}