#include<stdio.h>
#include<locale.h>

int main(void){
    setlocale(LC_ALL, "PORTUGUESE");

    int time1[3], time2[3], i = 0, somal = 0, soma2 = 0, temp, j;

    while (i < 3) {
        printf ("Time 1) Qual os pontos do jogador %d: ", (i + 1));
        scanf("%d", &time1[i]);
        somal += time1[i];
        i++;
    }

    printf("------------------------------------------------\n");

    for(i = 0; i < 3; i++){
        printf ("Time 2) Qual os pontos do jogador %d: ", (i + 1));
        scanf("%d", &time2[i]);
        soma2 += time2[i];
    }

    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            if (time1[i] < time1[j]) {
                temp = time1[i];
                time1[i] = time1[j];
                time1[j] = temp;
            }
        }
    }

    for (i = 0; i < 3; i++) {
        if (time2[i] < time2[i+1]) {
            temp = time2[i];
            time2[i] = time2[i+1];
            time2[i+1] = temp;
        }
    }

    for (i = 0; i < 3; i++) {
        printf("Time 1: %d \n", time1[i]);
    }

    printf("------------------------------------------------\n");
    for (i = 0; i < 3; i++) {
        printf("Time 2: %d \n", time2[i]);
    }

    if(somal > 100){
        somal = somal / 2;
        printf("Time 1 foi desclassificado. Média: %d\n", somal);
    } else {
        printf("Time 1 desclassificado.\n");
    }

    if(soma2 > 100){
        soma2 = soma2 / 2;
        printf("Time 2 foi desclassificado. Média: %d\n", soma2);
    } else {
        printf("Time 2 desclassificado.\n");
    }

    system("pause");
    return 0;
}
