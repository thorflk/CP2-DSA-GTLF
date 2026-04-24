#include<stdio.h>

int main() {
    int opcao;
    float nota_1 , nota_2 , media;
    int a, b, c;
    
     // Variável para controlar se a média já foi calculada
    int calculou_media = 0; 

do { // Estrutura "do-while adicionada"
        printf("\n==============================\n");
        printf(" SISTEMA EQUIPE GTLF\n");
        printf("==============================\n");
        printf("1 - Inserir notas\n");
        printf("2 - Calcular media\n");
        printf("3 - Verificar situacao\n");
        printf("4 - Exibir resultado\n");
        printf("5 - Calcular derivada\n");
        printf("6 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
         switch (opcao) {
            case 1:
                printf("Digite a nota 1: ");
                scanf("%f", &nota_1);
                printf("Digite a nota 2: ");
                scanf("%f", &nota_2);
                printf("Notas salvas com sucesso!\n");
                break; //case 1

            case 2:
                media = (nota_1 + nota_2) / 2.0;
                calculou_media = 1; // Marca que a média existe
                printf("Media calculada com sucesso!\n");
                break; //case 2

            case 3: 
                if (calculou_media == 1) {
                    if (media >= 6.0) {
                        printf("Situacao: Aprovado! \n");
                    } else {
                        printf("Situacao: Reprovado! \n");
                    }
                } else {
                    printf("Por favor, calcule a media (Opcao 2) primeiro!\n");
                }
                break; // case 3

            case 4: 
                 if (calculou_media == 1) {
                    printf("\n--- RESULTADOS DO ALUNO ---\n");
                    printf("Nota 1: %.2f\n", nota_1);
                    printf("Nota 2: %.2f\n", nota_2);
                    printf("Media Final: %.2f\n", media);
                
                } else {
                    printf("Nenhum resultado para exibir. Calcule a media primeiro!\n");
                }
                break;

            case 5: 
                
                break;

            case 6: 
                
                break;

            default: 
                
                break;
    







}
} while(opcao != 6);
return 0;
}