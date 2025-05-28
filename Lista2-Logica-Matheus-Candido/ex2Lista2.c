#include<stdio.h>
#include<locale.h>

int main(void){
    setlocale(LC_ALL, "portuguese");

    char livro[100];
    int tipo;

    printf("Digite o nome do livro: ");
    fgets(livro, 100, stdin);
    printf("Digite o tipo de usuário <1 - Professor / 2 - Aluno> ");
    scanf("%d", &tipo);

    printf("Nome do livro: %s\n", livro);

    if(tipo == 1){
        printf("Tipo de usuário: Professor \nTotal de dias: 10");
    }
    else{
        printf("Tipo de usuário: Aluno \nTotal de dias: 3");
    }

    return 0;
    system("pause");
}
