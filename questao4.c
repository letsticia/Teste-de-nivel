#include <stdio.h>

// criando a função que recebe dois inteiros e irá somar
int soma(int a, int b){
    return (a + b);
}

int main(){

    // váriaveis que armazenará os números e a variável que armazenará o resultado da soma.
    int numero1, numero2, resultado;

    printf("Digite um número inteiro positivo: ");
    scanf("%i", &numero1);

    // saindo caso não seja positivo
    if (numero1 < 0){
        printf("Este número não é positivo! Encerrando o programa.");
        return 0;
    }

    printf("Digite outro número inteiro positivo: ");
    scanf("%i", &numero2);

    // saindo caso não seja positivo
    if (numero1 < 0){
        printf("Este número não é positivo! Encerrando o programa.");
        return 0;
    }

    // atribuindo o resultado
    resultado = soma(numero1, numero2);

    // exibindo o resultado
    printf("%i", resultado);

    // saindo da função
    return 0;
}