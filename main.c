#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h> //necessário para usar setlocale
#include "doarparavitimas.h"

#define ANSI_COLOR_1      "\x1b[91m" // vermelho
#define ANSI_COLOR_2      "\x1b[92m" // verde
#define ANSI_COLOR_3      "\x1b[93m" // amarelo
#define ANSI_COLOR_4      "\x1b[94m" // azul
#define ANSI_COLOR_5      "\x1b[95m" // roxo
#define ANSI_COLOR_6      "\x1b[96m" // azul claro
#define ANSI_COLOR_7      "\x1b[97m" // branco
#define MAX_MENSAGEM 512             // Tamanho máximo da mensagem

void apagarTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// Estrutura para previsão do tempo
typedef struct {
    char tempo[50];
} tp_tempo;

// Função para salvar a previsão no arquivo
void salvarPrevisao(const char *cidade, int dia, int mes, const char *clima) {
    FILE *arquivo = fopen("previsoes.txt", "a"); // Abre o arquivo em modo de adição
    if (arquivo == NULL) {
        printf("\nErro ao abrir o arquivo para salvar a previsão.\n");
        return;
    }

    fprintf(arquivo, "Cidade: %s | Data: %02d/%02d | Previsão: %s\n", cidade, dia, mes, clima);
    fclose(arquivo); // Fecha o arquivo após a gravação
    printf("\nPrevisão salva no arquivo 'previsoes.txt'.\n");
}

// Função para verificar a previsão do tempo
void verificarTempo() {
    char cidade[50];
    tp_tempo tempo[4] = {
        {"Chuva moderada"},
        {"Ensolarado"},
        {"Nublado"},
        {"Instável"}
    };
    int dia, mes;
    char continuar = 's'; // Variável para controlar o loop

    // Enquanto o usuário desejar continuar, a previsão será gerada novamente
    while (continuar == 's' || continuar == 'S') {
        // Solicita a entrada do usuário
        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]s", cidade);
        printf("\nDigite o dia: ");
        scanf(" %d", &dia);
        printf("\nDigite o mes: ");
        scanf(" %d", &mes);

        // Verifica a validade da data
        if (mes < 1 || dia < 1 || mes > 12 || dia > 31) {
            printf("\nData inválida. Tente novamente.\n");
            continue; // Recomeça o loop
        }

        // Define a semente com base no dia e no mês
        srand(dia * mes);
        printf("\nPrevisão do tempo para %s em %02d/%02d: ", cidade, dia, mes);
        int clima = rand() % 4; // Gera um índice aleatório entre 0 e 3
        printf("%s\n", tempo[clima].tempo);

        // Salva a previsão no arquivo
        salvarPrevisao(cidade, dia, mes, tempo[clima].tempo);

        // Pergunta se o usuário deseja continuar
        printf("\nDeseja verificar outra previsão? (s/n): ");
        scanf(" %c", &continuar);
    }

    printf("\nVoltando ao menu principal...\n");
}


// Função para enviar mensagens de apoio
void enviar_mensagens_de_apoio() {
    const char* categorias[] = {"crianca", "jovem", "adulto"}; // Categorias disponíveis
    char categoria[20];
    int categoria_index = -1; // Índice da categoria escolhida
    char continuar; // Variável para controlar se o usuário deseja continuar

    do {
        // Loop para garantir que uma categoria válida seja escolhida
        categoria_index = -1; // Reseta o índice da categoria
        while (categoria_index == -1) {
            printf("Escolha uma categoria (crianca, jovem, adulto): ");
            scanf("%s", categoria);
            for (int i = 0; i < 3; i++) {
                if (strcmp(categoria, categorias[i]) == 0) {
                    categoria_index = i; // Atualiza o índice da categoria
                    break;
                }
            }
            if (categoria_index == -1) {
                printf("Categoria desconhecida. Tente novamente.\n");
            }
        }

        // Solicita ao usuário para digitar uma mensagem
        char mensagem[MAX_MENSAGEM];
        printf("Digite sua mensagem de apoio: ");
        getchar(); // Limpa o buffer do teclado
        fgets(mensagem, MAX_MENSAGEM, stdin); // Lê a mensagem do usuário
        mensagem[strcspn(mensagem, "\n")] = 0; // Remove a nova linha, se presente

        // Exibe a categoria e a mensagem digitada
        printf("Você escolheu a categoria: %s\n", categorias[categoria_index]);
        printf("E enviou a seguinte mensagem:\n%s\n\n", mensagem);

        // Pergunta se o usuário deseja enviar outra mensagem
        printf("Deseja enviar outra mensagem? (s/n): ");
        scanf(" %c", &continuar); // Lê a resposta do usuário

    } while (continuar == 's' || continuar == 'S'); // Continua se a resposta for 's' ou 'S'

    printf("Obrigado por suas mensagens de apoio!\n");
}

// Função do menu principal
int escolha();
void menu() {
    apagarTela();

    printf(ANSI_COLOR_6);
    printf("---------------------------------------\n");
    printf("Escolha entre as seguintes opcoes:\n\n");
    printf("1) Verificar a previsao do tempo\n");
    printf("2) Doar para vitimas da chuva\n");
    printf("3) Enviar mensagens de apoio\n");
    printf("4) Sair\n");
    printf("---------------------------------------\n\n");
    printf(ANSI_COLOR_7);

    escolha();
}

// Função para processar a escolha do menu
int escolha() {
    int num;
    char letra;
    scanf(" %d", &num);

    apagarTela();
    switch(num) {
        case 1:
            verificarTempo();
            menu();

        case 2:
            printf("As enchentes no Rio Grande do Sul deixaram muitas familias desabrigadas e em situacao de necessidade.\n");
             sleep(2);
            printf("Voce pode ajudar doando alimentos, roupas, cobertores, itens de higiene ou fazendo contribuicoes financeiras para instituicoes confiaveis que estao auxiliando as vitimas.\n");
            sleep(2);
            printf("Toda ajuda e importante para quem perdeu tudo e precisa recomeçar!!\n");
            sleep(3);
            doar_para_vitimas();
            apagarTela();
            menu();
            

        case 3:
            enviar_mensagens_de_apoio();

           menu();
            
            break;

        case 4:
            printf("Voce realmente deseja finalizar o programa? (s/n)\n");
            scanf(" %c", &letra);
            
            if(letra == 's') return 0; // Sai do programa
            else if(letra == 'n') menu();
            else { 
                printf("Opcao invalida. Tente novamente.\n");
                escolha();
            }
            break;

        default:
            printf("Numero invalido. Tente novamente.\n");
            menu();
            break;
    }

    return 0; // Finaliza a função escolha corretamente
}

// Função principal
int main() {
    setlocale(LC_ALL,"");
    apagarTela();

    
printf(ANSI_COLOR_2"*  ##   ##                      ##     ######                                          ###                     ######    #####  *\n");
printf(ANSI_COLOR_2"*  ### ###                             # ## #                                           ##                      ##  ##  ##   ## *\n");
printf(ANSI_COLOR_2"*  #######   ####    #####     ###       ##      ####    ######    ####    #####        ##    ####              ##  ##  #       *\n");
printf(ANSI_COLOR_1"*  #######  ##  ##   ##  ##     ##       ##     ##  ##    ##  ##      ##   ##  ##    #####   ##  ##             #####    #####  *\n");
printf(ANSI_COLOR_1"*  ## # ##  ##  ##   ##  ##     ##       ##     ##  ##    ##       #####   ##  ##   ##  ##   ##  ##             ## ##        ## *\n");
printf(ANSI_COLOR_3"*  ##   ##  ##  ##   ##  ##     ##       ##     ##  ##    ##      ##  ##   ##  ##   ##  ##   ##  ##             ##  ##  ##   ## *\n");
printf(ANSI_COLOR_3"*  ##   ##   ####    ##  ##    ####     ####     ####    ####      #####   ##  ##    ######   ####             #### ##   #####  *\n");
printf("\n");
    printf(ANSI_COLOR_7"\nSeu algoritmo de monitoramento de chuvas no Rio Grande do Sul.\n");

    sleep(5); // Diminui o tempo de espera para melhorar a experiência do usuário

    menu();

    return 0;
}
