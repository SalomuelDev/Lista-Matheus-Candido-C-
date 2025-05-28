#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int valor1, valor2;

    printf("Me fale um valor: ");
    scanf("%d", &valor1);

    printf("Me fale outro valor: ");
    scanf("%d", &valor2);

    int soma = valor1 + valor2;

    if(soma > 10){
        printf("A soma dos numeros é %d", soma);
    }
    else{
        printf("Tem nada pro ce aqui nao.");
    }

    return 0;
}
