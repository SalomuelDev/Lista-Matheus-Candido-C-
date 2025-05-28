#include<stdio.h>
#include<locale.h>

int main (void){
    setlocale(LC_ALL, "portuguese");

    int num1, num2, soma;

    printf ("digite o primeiro número: ");
    scanf("%d", &num1);

    printf ("digite outro número: ");
    scanf ("%d", &num2);

    soma = num1 + num2;

    if (soma > 10){
        printf ("opa temos um número: %d", soma);
    }
    else {
        printf("NADA");
    }

    return 0;
    system ("pause");
}
