#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale (LC_ALL , "Portuguese");

    float preco;

    printf("Qual o valor do produto? ");
    scanf("%f", &preco);

    if(preco <= 20){
        printf("O valor será de %.2f", (preco * 0.45) + preco);
    }
    else{
        printf("O valor será de %.2f", (preco * 0.30) + preco );
    }

    return 0;
}
