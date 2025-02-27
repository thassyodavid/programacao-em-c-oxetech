#include <stdio.h>

//Exercício The Huxley | 3 tipos de média - Acertos 3 de 3

int main() {
    float media, media2, media3, nota1, nota2, nota3, peso1_nota3 = 1, peso2_nota3 = 2, peso3_nota3 = 2;
    
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    media2 = (nota1 * 2 + nota2 * 2 + nota3 * 3) / 7;
    media3 = (nota1 * 1 + nota2 * 2 + nota3 * 2) / 5;
    
    printf("\n%.2f\n%.2f\n%.2f", media, media2, media3);
    
	return 0;
}