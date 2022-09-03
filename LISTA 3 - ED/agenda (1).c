#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char nome[100][100];
    char email[100][100];
    int ddd[100];
    int tel[100];
    int escolha, contUser = 0;
    char nomeAux[100];


    do{
        printf("======================== MENU ========================\n");
        printf("| 0 ........................................... SAIR |\n");
        printf("| 1 ...................................... ADICIONAR |\n");
        printf("| 2 ........................................ MOSTRAR |\n");
        printf("| 3 ...................................... PESQUISAR |\n");
        printf("| 4 ......................................... EDITAR |\n");
        printf("| 5 ......................................... APAGAR |\n");
        printf("| 6........................................... SOBRE |\n");
        printf("======================================================\n");
        scanf("%d", &escolha);
        system("cls");
        switch (escolha)
        {
        case 0:
            printf("Obrigado por utilizar o SisteMarques!\n");
            break;
        case 1:
            printf("===================== NOVO CADASTRO ====================\n");
            printf("Entre com as informacoes do novo usuario: \n");
            printf("NOME: ");
            scanf(" %[^\n]", nome[contUser]);

            printf("DDD: ");
            scanf("%d", &ddd[contUser]);

            printf("TELEFONE: ");
            scanf("%d", &tel[contUser]);

            printf("EMAIL: ");
            scanf(" %[^\n]", email[contUser]);

            contUser++;
            break;
        case 2:
            for (int i = 0; i < contUser;i++)
            {
                printf("===================== USUARIO %d ======================\n", i + 1);
                printf("| NOME: %s\n", nome[i]);
                printf("| TELEFONE: (%d) %d-%d\n", ddd[i], tel[i]/10000, tel[i]%10000);
                printf("| E-MAIL: %s\n", email[i]);
                printf("======================================================\n\n");
            }
            break;
        case 3:
            printf("===================== BUSCAR CADASTRO ===================\n");
            printf("Entre com o nome a ser verificado: ");
            scanf(" %[^\n]", nomeAux);
            for (int i = 0; i < contUser; i++)
            {
                if(strcmp(nome[i], nomeAux) == 0){
                    printf("===================== USUARIO %d ======================\n", i + 1);
                    printf("| NOME: %s\n", nome[i]);
                    printf("| TELEFONE: (%d) %d-%d\n", ddd[i], tel[i]/10000, tel[i]%10000);
                    printf("| E-MAIL: %s\n", email[i]);
                    printf("======================================================\n\n");
                    break;
                }
            }
        case 4:
            printf("===================== EDITAR CADASTRO ===================\n");
            printf("Entre com o nome a ser editado: ");
            scanf(" %[^\n]", nomeAux);

            break;

        case 5:
            printf("===================== APAGAR CADASTRO ===================\n");
            printf("Entre com o nome a ser verificado: ");
            scanf(" %[^\n]", nomeAux);

            break;
        case 6:
            printf("======================== SOBRE =======================\n");
            printf("| Este software foi desenvolvido para fins didaticos.|\n");
            printf("| AUTOR: Andrew Silva de Oliveira                    |\n");
            printf("| DATA: 02/09/2022                                   |\n");
            printf("======================================================\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }

    }while(escolha != 0);

    return 0;
}
