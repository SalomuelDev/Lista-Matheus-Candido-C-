#include<stdio.h>
#include<locale.h>

int main (void){
    setlocale(LC_ALL, "portuguese");

    int num1;

    printf ("digite o primeiro número: ");
    scanf("%d", &num1);

    if (num1 > 20 && num1 < 50){
        printf ("o seu número está entre 20 e 50");
    }
    else {
        printf("o seu número não está entre 20 e 50");
    }

    return 0;
    system ("pause");
}
