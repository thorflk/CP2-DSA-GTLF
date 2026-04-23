#include <stdio.h> // <> adicionados

int main() {
    float nota1, nota2, media; // ; adicionado

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", nota2);

    media = (nota1 + nota2) / 2; // adicionado parenteses

    if (media = 6) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}