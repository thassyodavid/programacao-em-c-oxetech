#include <stdio.h>

//Exercício The Huxley | Aluguel de carros - Acertos 26 de 28

int main() {
    float diaria = 30.0;
    float precoKM = 0.01;
    float desconto = 0.1;
    float dias;
    float km;
    float totalDiarias;
    float totalKM;
    float total;
    float totalComDesconto;
    
    scanf("%f", &dias);
    scanf("%f", &km);
    
    totalDiarias = diaria * dias;
    totalKM = precoKM * km;
    total = totalDiarias + totalKM;
    totalComDesconto = total - (total * desconto);
    
    printf("\n%.2f \n",totalComDesconto);
    
	return 0;
}