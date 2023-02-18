/*
Desafio

Angelita foi a uma loja de brinquedos comprar o presente de Natal do seu filho. Porém, ela topou com milhares de brinquedos que ele muito provavelmente gostaria de ganhar. Em cada prateleira, ela encontrou três brinquedos com preços diferentes. Ela pediu sua ajuda para criar um programa que avaliasse esses três preços e colocasse-os em ordem decrescente para que ela sempre tivesse o menor valor no final.

Entrada

A entrada serão três valores de cada brinquedo

Saída

A saída deve ser esses três valores da entrada em ordem decrescente.
*/

// Para ler e escrever dados em C, utilizamos os seguintes métodos da classe Console:  
// - scanf(): lê o(s) dado(s) de Entrada (Inputs) do usuário; 
// - printf(): imprime um texto de Saída (Output) no console;
// - A função getchar() retorna o código ASCII inteiro correspondente ao caractere lido
// - o Return 0 ao final significa que o programa foi executado com sucesso, como pretendia fazer.


#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%i%i%i", &a, &b, &c);

    // TODO: Crie as condições necessárias para que verifique, dentre os três valores da entrada, qual é o maior e print no console em 
    // ordem decrescente
    if (a>b && b>c){
        printf("%i, %i, %i",a, b, c);
    } else if (a>c && c>b){
        printf("%i, %i, %i",a, c, b);
    } else if(b>a && a>c){
        printf("%i, %i, %i",b, a, c);
    } else if(b>c && c>a){
        printf("%i, %i, %i",b, c, a);
    }else if(c>a && a>b){
        printf("%i, %i, %i",c, a, b);
    } else if(c>b && b>a){
        printf("%i, %i, %i",c, b, a);
    }else{
        printf("Nenhum!");
    }

    getchar();
    return 0;
}
