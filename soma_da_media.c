#include <stdio.h>

int main() {
    float valores[5];  
    int soma = 0;
    float media;
    int i;


    printf("Digite cinco valores inteiros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &valores[i]);
        soma += valores[i];  
    }


    media = (float)soma / 5;  

    
    printf("A media dos valores digitados e: %.2f\n", media);

    return 0;
}
