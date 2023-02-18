/*
Desafio
Sempre que Dona Cleide sempre que vai a feira encontra três frutas que ela gosta muito a fruta A, B e C. Porém, a fruta C tem uma variação de preço muito grande por não nascer naquela região e às vezes vale mais a pena levar as duas frutas A e B do que a C. Mas Dona Cleide é bem senhorinha e demora muito para calcular o preço. Você, sabendo que ela é muito boa em digitar e usar o celular, decidiu criar um programa para ajuda-la com essa decisão dos preços.

Entrada
A entrada serão os três valores, respectivamente, da fruta A, B e C.

Saída
A saída deve ser se A + B é maior, menor ou igual a C.
*/


// Para ler e escrever dados em C, utilizamos os seguintes métodos da classe Console:  
// - scanf(): lê o(s) dado(s) de Entrada (Inputs) do usuário; 
// - printf(): imprime um texto de Saída (Output) no console;
// - A função getchar() retorna o código ASCII inteiro correspondente ao caractere lido
// - o Return 0 ao final significa que o programa foi executado com sucesso, como pretendia fazer.

#include <stdio.h>

int main() { 
    int a, b, c, somaAB; 
    scanf("%d %d %d", &a, &b, &c);
    somaAB = a + b; 
    
    if (somaAB==c){
        printf("A + B é igual a C  ");
    } else if (somaAB>c){
        printf("A + B é maior que C  ");
    } else{
        printf("A + B é menor que C  ");
    }
    // TODO: Crie as condições necessárias para verificar se A + B é maior, menor ou igual a C

    getchar();
    return 0;
}
