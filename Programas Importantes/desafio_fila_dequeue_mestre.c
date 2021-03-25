/*
 
fila/queue em C
 
Igual Fila de Banco:
 
- O elemento que entra primeiro, sai primeiro
- Sempre que um elemento é adicionado a fila, ele vai pro final da fila
- Sempre que removemos um elemento, o primeiro é removido, os demais elementos avançam 1 posição na fila
 
CONCEITO DE FIFO: First In, First Out
 
enqueue() - Adiciona o elemento na fila
dequeue() - Remove o elemento da fila
clear() - Limpa a fila
 
Estrutura da fila
fila[10] - [0][1][2][3][4][5][6][7][8][9]
 
ultimo -> cauda, indica quantos elementos tem na fila
 
Aplicaçao: em qualquer situação que precisamos organizar o atendimento de elementos em fila
 
Implementações Bacanas:
 
Inclui Menu de Opções
Switch Case
Multi-Plataforma: Windows ou Linux
Diretivas de compilação: #ifdef
Macros: #define limpatela() system("cls")
Constantes: TAMFILA
*/
 
#include <stdio.h>
#include <locale.h> // lib de localização
#include <stdlib.h>
 
#ifdef _WIN32 // rodando no Windows 
#include <conio.h>  //WIN32 _getch()
#define limpatela() system("cls")
#define pegacar() _getch()
#else
// #ifdef linux
#define limpatela() system("clear")
#define pegacar() getchar() 
#endif // _WIN32
 
/*
declaração das variáveis fora do escopo do Main: isso permite acessar estas
variáveis de qualquer parte do programa
*/
 
#define TAMFILA 10 // declara constante TAMFILA (sem ';' no final !)
int fila[TAMFILA] = { 0,0,0,0,0,0,0,0,0,0 };
int ultimo = 0; // último da fila 
 
void pausa() {
 
        /*
        porque dois pegacar???
        porque as mensagens de erro contém um ENTER ou CR no fim,
        e quando executado em Linux, que é um SO baseado em terminal,
        a função getchar() passa direto por receber 2 caracteres.
 
        Então, este primeiro pegacar() garante que o enter foi lido, e assim
        o programa para corretamente, caso sendo executado em Linux
        */
 
    #ifdef linux
    pegacar();
    #endif
 
    printf("\nPressione Qualquer Tecla para Continuar...");
    pegacar();
}
 
void listqueue() {
 
    if (ultimo > 0) { // tem elementos na fila?
        printf("\n========= FILA ATUAL =========\n");
        for (int i = 0; i < TAMFILA; i++) {
            printf("|%d|", fila[i]);
            if (i < 9) {
                printf("-");
            }
        }
 
        printf("\nNúmero de Elementos na Fila: %d\n", ultimo);
        pausa();
    } else {
        printf("\nA fila está vazia...\n");
        pausa();
    }
}
 
void enqueue() { // incrementa a queue (enfileira)
int val;
    if (ultimo < TAMFILA) { // tem espaço para adicionar mais um elemento?
        printf("Informe o elemento a adicionar: ");
        scanf("%d", &val);
 
        fila[ultimo] = val;
        ultimo = ultimo + 1;
 
    } else {
        printf("\nErro: A fila está cheia...\n");
        pausa();
    }
}
 
void dequeue() {
    if (ultimo > 0) { // tem elementos na fila?
 
        for (int i = 0; i < ultimo; i++) {
            if (i < 9) {
                fila[i] = fila[i + 1];
            }
            else {
                fila[i] = 0;
            }
        }
        ultimo = ultimo - 1;
    } else {
        printf("\nA fila está vazia...\n");
        pausa();
    }
}
 
void clearqueue() {
 
    if (ultimo > 0) { // tem elementos na fila?
        for (int i = 0; i < ultimo; i++) {
            fila[i] = 0;
        }
        ultimo = 0;
    } else {
        
        printf("\nA fila já está vazia...\n");
        pausa();
    }
 
}
 
int main() {
 
    setlocale(LC_ALL, "Portuguese");
    int opcao = 0;
 
    do {
 
        limpatela();
 
printf("Entre a Opção Desejada: \n\n");
        printf("[1] Inserir elemento na Fila \n");
        printf("[2] Remover elemento na Fila \n");
        printf("[3] Listar Fila \n");
        printf("[4] Limpar Fila \n");
        printf("[9] Sair\n\n");
        printf("Opção: ");
 
        scanf("%d", &opcao);
 
        switch (opcao) {
 
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            listqueue();
            break;
        case 4:
            clearqueue();
            break;
        case 9:
            printf("\nFim\n");
            break;
        default:
            printf("\nOpção Inválida\n");
            pausa();
        }
 
    } while (opcao != 9);
 
    return 0;
 
}