#include <stdio.h>

int main(void){
    
    // declarando a váriavel que irá receber o tamanho da lista e o contador do segundo laço
    int quantidade;
    int contador = 0;
    
    printf("Digite a quantidade de numeros que você deseja adicionar a lista:");
    scanf("%i", &quantidade); // recebendo o valor

    // criando dois vetores, o primeiro da lista original e o segundo da lista reversa
    int vetor[quantidade], reversa[quantidade];

    // criando um laço com a quantidade da lista, onde serão feitos os inputs
    for (int i = 0; i < quantidade; i++){
        printf("Digite o [%i] numero :", i+1);
        scanf("%i", &vetor[i]);
    }

    printf("Sua lista: ");

    // criando um laço que irá exibir os valores da vetor inicial
    for (int i = 0; i < quantidade; i++){
        printf("%i ", vetor[i]);
    }

     // criando um segundo laço que irá atribuir os valores de maneira reversa no vetor reversa
    for (int i = quantidade - 1; i >= 0; i--){
        reversa[contador] = vetor[i];
        contador++;
    }

    printf("\nE a lista reversa: ");
    
    // criando um laço que irá exibir os valores da vetor reverso
    for (int i = 0; i < quantidade; i++){
        printf("%i ", reversa[i]);
    }

    // saindo da função main
    return 0;
}