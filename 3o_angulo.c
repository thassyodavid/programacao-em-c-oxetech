#include <stdio.h>

//Exercício The Huxley | 3o ângulo do triângulo - Acertos 2 de 2

int main() {
    float angulo1, angulo2, angulo3;
    
    scanf("%f", &angulo1);
    scanf("%f", &angulo2);
    
    angulo3 = 180 - (angulo1 + angulo2);
    printf("\n3o angulo=%.6f", angulo3);
	return 0;
}