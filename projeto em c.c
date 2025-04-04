#include <stdio.h>

void main(){
    char nome[100];
    float salario, agua, luz, internet, gasto_total;

    printf("digite seu nome:");
    scanf("%s", nome);
    printf("digite seu salario deste mes:");
    scanf("%f", &salario);
    printf("digite o valor da sua agua esse mes:");
    scanf("%f", &agua);
    printf("digite o valor da sua luz esse mes:");
    scanf("%f", &luz);
    printf("digite o valor da sua internet deste mes:");
    scanf("%f", &internet);
    gasto_total = (agua+luz+internet);

    if (salario > gasto_total){
        printf("voce nao esta no vermelho.");
    } else if (salario < gasto_total){
        printf("voce esta no vermelho.");
    } else{
        printf("voce nao esta no vermelho, mas precisa ter mais controle.");
    }
}
