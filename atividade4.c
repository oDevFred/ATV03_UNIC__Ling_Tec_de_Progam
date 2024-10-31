/* Escreva um programa que receba quatro números inteiros, calcule e apresente a média aritmética entre eles. Observação: não esqueça de formatar o valor da média no momento de apresentá-lo, para que sejam impressas apenas duas casas decimais. */

#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    double media;

    // Solicita ao usuário que digite quatro números inteiros
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    
    printf("Digite o quarto numero: ");
    scanf("%d", &num4);

    // Calcula a média aritmética
    media = (num1 + num2 + num3 + num4) / 4.0; // Divide por 4.0 para obter um resultado em ponto flutuante

    // Exibe a média formatada com duas casas decimais
    printf("A media aritmetica é: %.2f\n", media);

    return 0;
}

/* Explicação do Código:

1- Inclusão da Biblioteca <stdio.h>:
    Necessária para usar funções de entrada e saída como printf e scanf.

2- Declaração de Variáveis:
    Quatro variáveis inteiras (num1, num2, num3, num4) para armazenar os números digitados pelo usuário.
    Uma variável do tipo double (media) para armazenar o resultado da média aritmética.
3- Leitura dos Números:
    O programa solicita que o usuário digite os quatro números inteiros, um de cada vez, usando scanf.
4- Cálculo da Média Aritmética:
    A média é calculada somando os quatro números e dividindo por 4.0. O 4.0 assegura que a divisão seja feita em ponto flutuante, permitindo que a média tenha casas decimais.

5- Exibição da Média Formatada:
    O resultado é impresso com duas casas decimais usando o formato %.2f.*/