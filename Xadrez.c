#include <stdio.h>

// Função que retorna a palavra "casa" ou "casas"
// Depois de verificar se o índice é igual a 1, retorna "casa" ou "casas"
char *casaOuCasas(int indice)
{
    return indice == 1 ? "casa" : "casas";
}

// Função que exibe o menu e retorna a escolha do usuário
int menu()
{
    int option;
    printf("\nDigite a peça que deseja movimentar\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("0 - Sair\n");
    scanf("%d", &option);
    return option;
}

// Função que simula o movimento da Torre (5 casas para a direita usando for)
void moveTorre()
{
    for (int move = 1; move <= 5; move++)
    {
        printf("Direita\n");
    }
}

// Função que simula o movimento do Bispo (5 casas na diagonal cima-direita usando while)
void moveBispo()
{
    int move = 1;
    while (move <= 5)
    {
        printf("Cima, Direita\n");
        move++;
    }
}

// Função que simula o movimento da Rainha (8 casas para a esquerda usando do-while)
void moveRainha()
{
    int move = 1;
    do
    {
        printf("Esquerda\n");
        move++;
    } while (move <= 8);
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