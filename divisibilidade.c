#include <stdio.h>

//Exercício The Huxley | [AC3.2] - Divisibilidade - Acertos 7 de 7

int main() {
    int numero;
    
    scanf("%d", &numero);
    
    if (numero % 4 == 0 && numero % 7 == 0 && numero % 5 != 0){
        printf("sim");
    } else {
        printf("nao");
    }
	return 0;
}