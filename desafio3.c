Desafio

Uma fábrica de bonecos de ação está super valorizada e produzindo muito após o lançamento do novo filme do homem aranha. Eles estão produzindo bonecos dos três homens aranhas existentes no cinema.
O custo ao consumidor desses bonecos é a soma do preço da fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço da fábrica.

Seu chefe pediu que você calculasse três valores para cada um dos bonecos, incluindo os vilões e personagens secundários: 
- O valor correspondente ao lucro do consumidor.

- O valor correspondendo aos impostos.

- O preço final dos bonecos.

Com seu conhecimento em programação você decidiu criar um programa que fizesse esse cálculo somente com a entrada do preço dos bonecos.

Entrada

A entrada serão três valores respectivamente: Preço da Fábrica, Percentual do Distribuidor e Percentual de Imposto

Saída

A saída deverá ser o valor correspondente ao lucro do consumidor, os impostos e o preço final dos bonecos.



// Para ler e escrever dados em C, utilizamos os seguintes métodos da classe Console:  
// - scanf(): lê o(s) dado(s) de Entrada (Inputs) do usuário; 
// - printf(): imprime um texto de Saída (Output) no console;
// - A função getchar() retorna o código ASCII inteiro correspondente ao caractere lido
// - o Return 0 ao final significa que o programa foi executado com sucesso, como pretendia fazer.

#include<stdio.h>

int main() {
    float precoFabrica, lucro, impostos, precoFinal;
    float percentualLucro, percentualImpostos;

    scanf("%f", &precoFabrica);
    scanf("%f", &percentualLucro);
    scanf("%f", &percentualImpostos);

    //TODO: Calcule o lucro, o imposto e o preço final. Em seguida print os três, em sequência um abaixo do outro, no 
    // console

    getchar();
    return 0;
}
