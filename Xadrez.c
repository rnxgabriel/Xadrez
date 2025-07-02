#include <stdio.h>

// Função que retorna a palavra "casa" ou "casas"
// Depois de verificar se o índice é igual a 1, retorna "casa" ou "casas"
char *casaOuCasas(int indice)
{
    char *direcoes = indice == 1 ? "casa" : "casas";
    return direcoes;
}

// Função que exibe o menu
// Exibe as opções de menu e solicita a escolha do usuário
int menu()
{
    int option;
    printf("Digite a peça que deseja movimentar \n");
    printf("1- Torre \n");
    printf("2- Bispo \n");
    printf("3- Rainha \n");
    printf("0 - Sair\n");

    scanf("%d", &option);
    return option;
}

/*
Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
*/
// Função que simula o movimento da Torre
void moveTorre()
{
    int move = 1;
    do
    {
        printf("Torre movendo-se %d %s para a direita\n", move, casaOuCasas(move));
        move++;
    } while (move < 6);
}

/*
Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
*/
// Função que simula o movimento do Bispo
void moveBispo()
{
    for (int move = 1; move < 6; move++)
    {
        printf("Bispo movendo-se %d %s para cima\n", move, casaOuCasas(move));
        printf("Bispo movendo-se %d %s para direita\n", move, casaOuCasas(move));
        printf("\n");
    }
}

/*
    Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
*/
// Função que simula o movimento da Rainha
void moveRainha()
{
    int move = 1;
    while (move < 9)
    {
        printf("Rainha movendo-se %d %s para a esquerda\n", move, casaOuCasas(move));
        move++;
    }
}

int main()
{
    int choice;
    // Loop principal
    do
    {
        choice = menu();
        switch (choice)
        {
        case 1:
            printf("Você escolheu Torre.\n");
            moveTorre();
            break;
        case 2:
            printf("Você escolheu Bispo.\n");
            moveBispo();
            break;
        case 3:
            printf("Você escolheu Rainha.\n");
            moveRainha();
            break;
        case 0:
            printf("Saindo do programa.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }
    } while (choice != 0);

    return 0;
}
