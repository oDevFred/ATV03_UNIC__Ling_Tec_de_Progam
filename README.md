# Programa de Cálculo da Média Aritmética

Este projeto foi desenvolvido como parte da disciplina de Linguagem e Técnicas de Programação no curso de Análise e Desenvolvimento de Sistemas da Faculdade UNICESUMAR. O objetivo deste código é receber quatro números inteiros do usuário, calcular a média aritmética entre eles e apresentá-la formatada com duas casas decimais.

## Funcionalidade do Programa

O código solicita ao usuário que insira quatro números inteiros, calcula a média aritmética e exibe o resultado com a formatação adequada.

### Estrutura do Código

1. **Declaração de Variáveis**
   - `int num1, num2, num3, num4`: Variáveis para armazenar os quatro números inteiros fornecidos pelo usuário.
   - `double media`: Variável para armazenar a média aritmética.

2. **Entrada do Usuário**
   - O programa usa `printf` para solicitar que o usuário digite cada um dos quatro números.
   - `scanf("%d", &numX)`: Lê os números inteiros inseridos pelo usuário.

3. **Cálculo da Média Aritmética**
   - A média é calculada somando os quatro números e dividindo o resultado por `4.0` (usando `4.0` em vez de `4` garante que a divisão resulte em um número em ponto flutuante).

4. **Saída do Resultado**
   - A média aritmética é exibida formatada com duas casas decimais usando `printf`.

## Exemplo de Uso

### Entrada
```plaintext
Digite o primeiro numero: 10
Digite o segundo numero: 20
Digite o terceiro numero: 30
Digite o quarto numero: 40
```

### Saída
```plaintext
A media aritmetica é: 25.00
```

## Tecnologias e Conceitos Utilizados

- **C**: Linguagem de programação utilizada.
- **Entrada e Saída**: Utilização das funções `printf` e `scanf` para interação com o usuário.
- **Cálculo de Média**: Soma dos números e divisão para calcular a média aritmética.
- **Formatação de Saída**: Uso de `%.2f` no `printf` para formatar o resultado com duas casas decimais.

## Autor

Caio Frederico, como parte da disciplina de Linguagem e Técnicas de Programação da Faculdade UNICESUMAR.
