#include <stdio.h>

//Exercício The Huxley | Média - Acertos 7 de 7

int main() {
    double notaA;
    double notaB;
    double media;
    double pesoA = 3.5;
    double pesoB = 7.5;
    
    scanf("%lf",&notaA);
    scanf("%lf",&notaB);
    media = (notaA * pesoA + notaB * pesoB) / (pesoA + pesoB);
    printf("MEDIA = %.5lf ",media);

	return 0;
}