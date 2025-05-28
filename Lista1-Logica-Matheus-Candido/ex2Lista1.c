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

    if (soma > 20){
        printf ("a soma dos números é: %d", soma + 8);
    }
    else {
        printf("a soma dos números é: %d", soma - 5);
    }

    return 0;
    system ("pause");
}
