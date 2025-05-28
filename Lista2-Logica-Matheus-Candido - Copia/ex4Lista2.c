#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int idade;

    printf("Qual a sua idade?: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Você é maior de idade");
    }
    else if(idade < 18){
        printf("Você é menor de idade");
    }
    else{
        printf("Você tem mais de 65 anos");
    }

    return 0;
    system("pause");
}
