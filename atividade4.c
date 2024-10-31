#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    double media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    
    printf("Digite o quarto numero: ");
    scanf("%d", &num4);

    media = (num1 + num2 + num3 + num4) / 4.0;

    printf("A media aritmetica é: %.2f\n", media);

    return 0;
}
