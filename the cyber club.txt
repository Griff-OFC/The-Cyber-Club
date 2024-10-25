#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    printf("Trabalho 2");
    printf("\nTrabalho de Programação I");
    printf("\nNomes da dupla: Gregory Ribeiro Schein e Guilherme Silva");
    printf("\nData de conclusão do programa: \n");
    char escolhaDesejada; //Variavel utilizada para o controle do switch principal das opções
    int i = 1, i7 = 1, mesaLanchonete, quantidadeTotalDeLanchesPedidos = 0;
    //variaveis utilizadas que necessitam estar fora do bloco
    int flagControleDeEntradaMesa = 0, flagValidacaoAtivamentoDoCaseEparaCaseS = 1;
    //Flags utilizadas
    float valorProduto = 0.0, totalPedido = 0.0;
    //Variaveis utilizadas que necessitam estar fora do bloco do codigo
    system("color 09");
    system("pause");
    system("cls");
    //System de limpeza de tela e configuraçao de cor no terminal
    do
    {
        //Menu principal do Cyber Club//
        system("color 0A");
        printf("\nBem - Vindo A\n");
        system("color 0E");
        Sleep(50);
        printf("  ___   ___ \n");
        printf(" / __| / __| \n");
        printf("| | | | \n");
        printf("| | yber | | lub \n");
        printf("| |__ | |__\n");
        printf(" \\___| \\___| \n");
        printf(" \n");
        Sleep(50) ;
        system("color 05");
        printf("========== Cyber Club ==========");
        Sleep(50);
        system("color 03");
        printf("\n[N] ou [n] para um [Novo Pedido]");
        Sleep(50);
        system("color 04");
        printf("\n[E] ou [e] para [Encerrar o Pedido]");
        Sleep(50);
        system("color 0C");
        printf("\n[S] ou [s] para [Sair do Programa]");
        Sleep(50);
        system("color 05");
        printf("\n================================\n");
        Sleep(50);
        printf("\nInforme a opção desejada:");
        system("color 0E");
        fflush(stdin);
        scanf("%c",&escolhaDesejada);
        system("cls");
        //Switch Escolha da opçao desejada//
        switch (escolhaDesejada)
        {
            int escolhaCodigo, quantidadeLanches, flagValidacaoEntradaParaReturn = 0;
            float totalLanche; //Variável utilizada para a etapa final do case N e etapa do case E
            int flagValidacaoAtivamentoDoCaseN = 0; //Flag utilizada para o controle da ordem certa do uso dos comandos
        case 'N':
        case 'n':
        {
            int i = 1, i2 = 1, switchCodigo = 1;
            //Variavies utilizadas para o controle dos whiles utilizados dentro do switch escolha desejada
            do
            { //bloco do (do) responsavel pelo controle do cardapio do codigo
                printf("\n\t CARDÁPIO\n============================\n----------------------------\n\t Bebidas\n----------------------------\n 100 Café\n 101 Suco Naturais\n 102 Energético\n 103 Refrigerante\n 104 Agua\n----------------------------");
                printf("\n\t Lanches\n----------------------------\n 105 Esfirras\n 106 Pastel\n 107 Hambúrguer\n 108 Coxinha\n----------------------------");
                printf("\n\t Sobremesa\n----------------------------\n 109 Donut\n 110 Brownie\n 111 Cookies\n 112 Donut\n----------------------------\n============================\n");
                printf("\nDetermine o código referente ao item [numero]:");
                system("color 0a");
                Sleep(100);
                system("color 0E");
                fflush(stdin);
                scanf("%d", &escolhaCodigo);
                system("cls");
                switch (escolhaCodigo)
                //Switch Responsavel pelas atribuiçoes dos codigos dos produtos//
                {
                case 000: //Case para voltar ao menu do cardapio
                    system("color 04");
                    Sleep(100);
                    system("color 0E");
                    flagValidacaoEntradaParaReturn++;
                    switchCodigo++;
                    break;
                case 100:
                    {//Bloco do café
                    system("cls");
                    int i3 = 1;
                    //Variavel de repetiçao do while do bloco do cafe
                    int flagValicaoEntradaDados = 0, flagValidacaoDoWhileDoCafe = 0, escolhaCafe;
                    //flags utilizadas dentro do bloco do cafe
                    while (i3 < 2)
                    //While utilizado para a repetiçao dos comandos caso os dados de entrada forem digitado errado
                    {
                        if (flagValidacaoDoWhileDoCafe == 0)
                        {
                            printf("\nCaso deseje digite 0 para voltar ao menu do cardápio\n1 - Café expresso\n2 - Café com leite\n3 - Capuccino\n4 - Café gelado\nQual o tipo de café desejado:");
                            system("color 0A");
                            Sleep(100);
                            system("color 0E");
                            scanf("%d", &escolhaCafe);
                            switch (escolhaCafe)
                            {
                            case 0:
                                system("color 04");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 0.0;
                                i3++;
                                flagValidacaoEntradaParaReturn++;
                                system("cls");
                                break;
                            case 1:
                                system("cls");
                                printf("\nCafé expresso\nPreço: R$5.00\nDescrição: Um elixir energético, destilado sob alta pressão em máquinas cromadas, perfeito para manter os hackers acordados nas longas noites de programação.\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 5.00;
                                break;
                            case 2:
                                system("cls");
                                printf("\nCafé com leite\nPreço: R$6.00\nDescrição:Uma mistura suave de café e leite, ideal para uma pausa relaxante.\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 6.00;
                                break;
                            case 3:
                                system("cls");
                                printf("\nCapuccino\nPreço: R$7.00\nDescrição: Um café cremoso com um toque de chocolate, perfeito para os amantes de doces.\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 7.00;
                                break;
                            case 4:
                                system("cls");
                                printf("\nCafé gelado\nPreço: R$8.00\nDescrição: Um café refrescante servido com gelo, ideal para dias quentes.\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 8.00;
                                break;
                            default:
                                printf("Opçao invalida !!!");
                                valorProduto = 0;
                            }//bloco do switch
                        }//bloco do if da flag da validaçao do cafe
                        if (valorProduto > 0.0)
                        {
                            char escolhaAcucar;
                            printf("\nDeseja adicionar açúcar [S] ou [N]\n Caso preciso clique [V] para voltar ao menu do café:");
                            fflush(stdin);
                            system("color 0a");
                            Sleep(100);
                            system("color 0E");
                            scanf("%c", &escolhaAcucar);
                            switch (escolhaAcucar)
                            {
                            case 'V':
                            case 'v':
                                system("color 04");
                                Sleep(100);
                                system("color 0E");
                                system("cls");
                                break;
                            case 'S':
                            case 's':
                                printf("\nAçúcar adicionado.\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                switchCodigo++;
                                i3++;
                                flagValidacaoEntradaParaReturn = 0;
                                break;
                            case 'N':
                            case 'n':
                                printf("\nSem adicional de açúcar.\n");
                                switchCodigo++;
                                system("color 04");
                                Sleep(100);
                                system("color 0E");
                                i3++;
                                flagValidacaoEntradaParaReturn = 0;
                                break;
                            default:
                                printf("\nOpção inválida.\n");
                                system("color 04");
                                Sleep(100);
                                system("color 0E");
                                system("cls");
                                flagValidacaoDoWhileDoCafe++;
                                break;
                            }/*Bloco do switch açucar*/
                        }/*Bloco do if do açucar*/
                    } /*Bloco do while*/
                    break;
                    }//Bloco do case 100 referente ao cafe
                case 101:
                {//Bloco do Suco
                    system("cls");
                    int escolhaSuco, i3 = 1;
                    //Variaveis utilizadas para o controle do while e escolha do suco
                    int flagGeloSuco = 0, flagHortelaSuco = 0, flagLimaoSuco = 0, flagValidacaoDoWhileDoSuco = 0;
                    // Flags utilizadas dentro do bloco do suco
                    char escolhaGelo, escolhaHortela, escolhaLimao;
                    while (i3 < 2)
                    //While utilizado para a repetiçao dos comandos caso os dados de entrada forem digitado errado
                    {
                        if (flagValidacaoDoWhileDoSuco == 0)
                        {
                            printf("\nCaso deseje digite 0 para voltar ao menu do cardápio\n1 - Suco de laranja R$8.00\n2 - Suco de hortelã R$7.50\n3 - Suco de butiá R$9.50\n4 - Suco de acerola R$6.00\nQual o tipo de suco desejado:");
                            system("color 0a");
                            Sleep(100);
                            system("color 0E");
                            scanf("%d", &escolhaSuco);
                            switch (escolhaSuco)
                            {
                            case 0:
                                system("color 04");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 0.0;
                                i3++;
                                flagValidacaoEntradaParaReturn++;
                                system("cls");
                                break;
                            case 1:
                                valorProduto = 8.00;
                                break;
                            case 2:
                                valorProduto = 7.50;
                                break;
                            case 3:
                                valorProduto = 9.50;
                                break;
                            case 4:
                                valorProduto = 6.00;
                                break;
                            default:
                                printf("\nOpção inválida.\n");
                                system("color 04");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 0;
                                break;
                            } // final do switch escolasuco
                        } // final do if flagValidacaoDoWhileDoSuco
                        if(flagGeloSuco == 0)
                            if (valorProduto > 0)
                            {
                                printf("\nDeseja adicionar gelo [S] ou [N]:\n Caso preciso clique [V] para voltar ao menu do suco:\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                fflush(stdin);
                                scanf("%c", &escolhaGelo);
                                switch (escolhaGelo)
                                {
                                case 'V':
                                case 'v':
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagHortelaSuco++;
                                    flagLimaoSuco++;
                                    system("cls");
                                    break;

                                case 'S':
                                case 's':
                                    printf("\nGelo adicionado.\n");
                                    system("color 0a");
                                    Sleep(100);
                                    system("color 0E");
                                    flagHortelaSuco = 0;
                                    flagLimaoSuco = 0;
                                    break;
                                case 'N':
                                case 'n':
                                    printf("\nSem adicional de gelo.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagHortelaSuco = 0;
                                    flagLimaoSuco = 0;
                                    break;
                                default:
                                    printf("\nOpção inválida.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagHortelaSuco++;
                                    flagLimaoSuco++;
                                    flagValidacaoDoWhileDoSuco++;
                                    break;
                                } /*final do switch gelo*/
                            } /*final do if do gelo*/
                        if(flagHortelaSuco == 0)
                            if (valorProduto > 0)
                            {
                                printf("\nDeseja adicionar hortelã [S] ou [N]:\n Caso preciso clique [V] para voltar ao menu do suco:\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                fflush(stdin);
                                scanf("%c", &escolhaHortela);
                                switch (escolhaHortela)
                                {
                                case 'V':
                                case 'v':
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagLimaoSuco++;
                                    system("cls");
                                    break;
                                case 'S':
                                case 's':
                                    printf("\nHortelã adicionado.\n");
                                    system("color 0a");
                                    Sleep(100);
                                    system("color 0E");
                                    flagLimaoSuco = 0;
                                    flagHortelaSuco++;
                                    break;
                                case 'N':
                                case 'n':
                                    printf("\nSem adicional de hortelã.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagLimaoSuco = 0;
                                    flagHortelaSuco++;
                                    break;
                                default:
                                    printf("\nOpção inválida.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagGeloSuco++;
                                    flagLimaoSuco++;
                                    flagValidacaoDoWhileDoSuco++;
                                    break;
                                } /*Bloco do switch hortelã*/
                            } /*Bloco do if do hortelã*/
                        if(flagLimaoSuco == 0)
                            if (valorProduto > 0)
                            {
                                printf("\nDeseja adicionar Limão [S] ou [N]:\n Caso preciso clique [V] para voltar ao menu do suco:\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                fflush(stdin);
                                scanf("%c", &escolhaLimao);
                                switch (escolhaLimao)
                                {
                                case 'V':
                                case 'v':
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    system("cls");
                                    break;
                                case 'S':
                                case 's':
                                    printf("\nLimão adicionado.\n");
                                    system("color 0a");
                                    Sleep(100);
                                    system("color 0E");
                                    i3++;
                                    switchCodigo++;
                                    flagValidacaoEntradaParaReturn = 0;
                                    system("cls");
                                    break;
                                case 'N':
                                case 'n':
                                    printf("\nSem adicional de limão.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    i3++;
                                    switchCodigo++;
                                    flagValidacaoEntradaParaReturn = 0;
                                    system("cls");
                                    break;
                                default:
                                    printf("\nOpção inválida.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagGeloSuco++;
                                    flagHortelaSuco++;
                                    flagValidacaoDoWhileDoSuco++;
                                    break;
                                } /*Bloco do switch Limão*/
                            } /*Bloco do if do Limão*/
                    } /*Bloco do while do suco*/
                } //final case 101
                break;
                case 102:
                {
                    system("cls");
                    int escolhaEnergetico, i3 = 1, flagValidacaoDoWhileDoEnergetico = 0, flagGeloSecoEnergetico = 0, flagGeloFrutasEnergetico = 0, flagMentaEnergetico = 0;
                    char escolhaGeloSec, escolhaGeloFrut, escolhaMenta;
                    while (i3 < 2) /* Bloco do Energético */
                    {
                        if (flagValidacaoDoWhileDoEnergetico == 0)
                        {
                            printf("\nCaso deseje digite 0 para voltar ao menu do cardápio \n1 - Energético Neon Boost\n2 - Energético Cyber change\n3 - Energético Techno Turbo\n4 - Energético Quantum Energy\nQual o tipo de Energético desejado: ");
                            system("color 0a");
                            Sleep(100);
                            system("color 0E");
                            escolhaEnergetico = 0;
                            scanf("%d", &escolhaEnergetico);
                            system("cls");
                            switch (escolhaEnergetico)
                            {
                            case 0:
                                system("color 04");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 0.0;
                                i3++;
                                flagValidacaoEntradaParaReturn++;
                                break;
                            case 1:
                                printf ("\nEnergético Neon Boost\nPreço: R$11.99\nDescrição: Bebida energizante com sabor de frutas tropicais e um brilho neon.\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 11.99;
                                break;
                            case 2:
                                printf ("\nEnergético Cyber change\nPreço: R$10.50\nDescrição: Bebida energizante com sabor de frutas tropicais e um brilho neon.\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 10.50;
                                break;
                            case 3:
                                printf ("\nEnergético Techno Turbo\nPreço: R$9.90\nDescrição: Bebida energizante com sabor de frutas tropicais e um brilho neon.\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 9.90;
                                break;
                            case 4:
                                printf ("\nEnergético Quantum Energy\nPreço: R$8.00\nDescrição: Bebida energizante com sabor de frutas tropicais e um brilho neon.\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 8.00;
                                break;
                            default:
                                printf ("\nOpção inválida.");
                                system("color 04");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 0;
                                break;
                            }/* Adicionando incremento ao contador para sair do while*/
                        }//flagValidacaoDoWhileDoEnergetico
                        if (flagGeloSecoEnergetico == 0)
                            if (valorProduto > 0)
                            {
                                printf ("\nDeseja adicionar gelo seco [S] ou [N]:\n Caso preciso clique [V] para voltar ao menu do energético:\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                scanf(" %c", &escolhaGeloSec); // Adicionando espaço para ignorar o enter anterior
                                switch (escolhaGeloSec)
                                {
                                case 'V':
                                case 'v':
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagGeloFrutasEnergetico++;
                                    flagMentaEnergetico++;
                                    system("cls");
                                case 'S':
                                case 's':
                                    printf ("\nGelo seco adicionado.\n");
                                    system("color 0a");
                                    Sleep(100);
                                    system("color 0E");
                                    flagGeloFrutasEnergetico = 0;
                                    flagMentaEnergetico = 0;
                                    break;
                                case 'N':
                                case 'n':
                                    printf ("\nSem adicional de gelo seco.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagGeloFrutasEnergetico = 0;
                                    flagMentaEnergetico = 0;
                                    break;
                                default:
                                    printf ("\nOpção inválida.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagValidacaoDoWhileDoEnergetico++;
                                    flagGeloFrutasEnergetico++;
                                    flagMentaEnergetico++;
                                } /*bloco do switch gelo seco*/
                            } /* bloco do if gelo seco*/
                        if (flagGeloFrutasEnergetico == 0)
                            if (valorProduto > 0)
                            {
                                printf ("\nDeseja adicionar gelo de frutas [S] ou [N]:\n Caso preciso clique [V] para voltar ao menu do energético:\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                scanf(" %c", &escolhaGeloFrut); // Adicionando espaço para ignorar o enter anterior
                                switch (escolhaGeloFrut)
                                {
                                case 'V':
                                case 'v':
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagMentaEnergetico++;
                                    system("cls");
                                case 'S':
                                case 's':
                                    printf ("\nGelo de frutas adicionado.\n");
                                    system("color 0a");
                                    Sleep(100);
                                    system("color 0E");
                                    flagMentaEnergetico = 0;
                                    flagGeloFrutasEnergetico++;
                                    break;
                                case 'N':
                                case 'n':
                                    printf ("\nSem adicional de gelo de frutas.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagMentaEnergetico = 0;
                                    flagGeloFrutasEnergetico++;
                                    break;
                                default:
                                    printf("\nOpção inválida.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagValidacaoDoWhileDoEnergetico++;
                                    flagGeloSecoEnergetico++;
                                    flagMentaEnergetico++;
                                    break;
                                }//bloco do switch gelo fruta
                            }//bloco do if gelo fruta
                        if (flagMentaEnergetico == 0)
                            if (valorProduto > 0)
                            {
                                printf("\nDeseja adicionar menta [S] ou [N]:\n Caso preciso clique [V] para voltar ao menu do energético:\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                scanf(" %c", &escolhaMenta); // Adicionando espaço para ignorar o enter anterior
                                switch (escolhaMenta)
                                {
                                case 'V':
                                case 'v':
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    system("cls");
                                case 'S':
                                case 's':
                                    printf("\nMenta adicionado.\n");
                                    system("color 0a");
                                    Sleep(100);
                                    system("color 0E");
                                    i3++;
                                    switchCodigo++;
                                    flagValidacaoEntradaParaReturn = 0;
                                    break;
                                case 'N':
                                case 'n':
                                    printf("\nSem adicional de limão.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    i3++;
                                    switchCodigo++;
                                    flagValidacaoEntradaParaReturn = 0;
                                    break;
                                default:
                                    printf("\nOpção inválida.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagValidacaoDoWhileDoEnergetico++;
                                    flagGeloSecoEnergetico++;
                                    flagGeloFrutasEnergetico++;
                                    break;
                                }//bloco do switch menta
                            }//bloco do if menta
                    }// bloco do while
                    } /*final do case 102*/
                break;
                case 103:
                {
                    system ("cls");
                    int escolhaRefrigerante, i3 = 1, flagValidacaoDoWhileDoRefrigerante = 0;
                    int flagGeloSecoEnergetico = 0, flagGeloFrutasEnergetico = 0, flagMentaEnergetico = 0;
                    char escolhaGeloSec, escolhaGeloFrut, escolhaMenta;
                    while (i3 < 2)
                    {
                        /* Bloco do Refrigerante */
                        if (flagValidacaoDoWhileDoRefrigerante == 0)
                        {
                            printf("\nCaso deseje digite 0 para voltar ao menu do cardápio \n1 - Refrigerante Neon Blast\n2 - Refrigerante Cyber Cola\n3 - Refrigerante Quantum Berry\n4 - Refrigerante Plasma Punch\nQual o tipo de Refrigerante desejado: ");
                            escolhaRefrigerante = 0;
                            system("color 0a");
                            Sleep(100);
                            system("color 0E");
                            scanf("%d", &escolhaRefrigerante);
                            system("cls");
                            switch (escolhaRefrigerante)
                            {
                            case 0:
                                system("color 04");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 0.0;
                                i3++;
                                flagValidacaoEntradaParaReturn++;
                                system("cls");
                                break;
                            case 1:
                                printf("\nRefrigerante Neon Blast\nPreço: R$6.50\nDescrição: Uma explosão de sabores cítricos com um toque de energia sintética, perfeito para iluminar suas noites na cidade neon.\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 6.50;
                                break;
                            case 2:
                                printf("\nRefrigerante Cyber Cola\nPreço: R$5.99\nDescrição: Um clássico reimaginado com uma infusão de cafeína e notas de especiarias futurísticas, ideal para os hackers em ação.\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 5.99;
                                break;
                            case 3:
                                printf("\nRefrigerante Quantum Berry\nPreço: R$7.00\nDescrição: Uma mistura de frutas vermelhas com um toque de eletricidade, proporcionando uma experiência de sabor fora deste mundo.\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 7.00;
                                break ;
                            case 4:
                                printf("\nRefrigerante Plasma Punch\nPreço: R$7.50\nDescrição: Uma combinação de frutas tropicais com um toque de energia plasmática, ideal para recarregar suas baterias.\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 7.50;
                                break ;
                            default:
                                printf("\nOpção inválida.");
                                system("color 04");
                                Sleep(100);
                                system("color 0E");
                                break ;
                            }/*Adicionando incremento ao contador para sair do while*/
                        }//Flag de validaçao do while do refrigerante
                        if (flagGeloSecoEnergetico == 0)
                            if (valorProduto > 0)
                            {
                                printf("\nDeseja adicionar cubos de gelo com LED [S] ou [N]:\n Caso preciso clique [V] para voltar ao menu do refrigerante:\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                scanf(" %c", &escolhaGeloSec); // Adicionando espaço para ignorar o enter anterior
                                switch (escolhaGeloSec)
                                {
                                case 'V':
                                case 'v':
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagGeloFrutasEnergetico++;
                                    flagMentaEnergetico++;
                                    system("cls");
                                case 'S' :
                                case 's' :
                                    printf("\nCubos de gelo com LED adicionado.\n");
                                    system("color 0a");
                                    Sleep(100);
                                    system("color 0E");
                                    flagGeloFrutasEnergetico = 0;
                                    flagMentaEnergetico = 0;
                                    break ;
                                case 'N':
                                case 'n':
                                    printf("\nSem adicional de cubos de gelo com LED.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagGeloFrutasEnergetico = 0;
                                    flagMentaEnergetico = 0;
                                    break ;
                                default:
                                    printf("\nOpção inválida.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagValidacaoDoWhileDoRefrigerante++;
                                    flagGeloFrutasEnergetico++;
                                    flagMentaEnergetico++;
                                }/* bloco do switch gelo LED*/
                            } // bloco do if gelo LED
                        if (flagGeloFrutasEnergetico == 0)
                            if (valorProduto > 0)
                            {
                                printf("\nDeseja adicionar espuma molecular [S] ou [N]:\n Caso preciso clique [V] para voltar ao menu do refrigerante:\n");
                                scanf(" %c", &escolhaGeloFrut); // Adicionando espaço para ignorar o enter anterior
                                switch (escolhaGeloFrut)
                                {
                                case 'V':
                                case 'v':
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagMentaEnergetico++;
                                    system("cls");
                                case 'S' :
                                case 's' :
                                    printf("\nEspuma molecular adicionado.\n");
                                    flagMentaEnergetico = 0;
                                    flagGeloFrutasEnergetico++;
                                    break ;
                                case 'N':
                                case 'n':
                                    printf("\nSem adicional de espuma molecular.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagMentaEnergetico= 0;
                                    flagGeloFrutasEnergetico++;
                                    break;
                                default:
                                    printf("\nOpção inválida.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagValidacaoDoWhileDoRefrigerante++;
                                    flagGeloSecoEnergetico++;
                                    flagMentaEnergetico++;
                                    break;
                                } /*bloco do switch espuma molecular*/
                            } //bloco do if espuma molecular
                        if (flagMentaEnergetico == 0)
                            if (valorProduto > 0)
                            {
                                printf("\nDeseja adicionar menta [S] ou [N]:\n Caso preciso clique [V] para voltar ao menu do refrigerante:\n");
                                scanf(" %c", &escolhaMenta); // Adicionando espaço para ignorar o enter anterior
                                switch (escolhaMenta)
                                {
                                case 'V':
                                case 'v':
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    system("cls");
                                    break;
                                case 'S':
                                case 's':
                                    printf("\nMenta adicionado.\n");
                                    i3++;
                                    switchCodigo++;
                                    flagValidacaoEntradaParaReturn = 0;
                                    break;
                                case 'N':
                                case 'n':
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    printf("\nSem adicional de menta.\n");
                                    i3++;
                                    switchCodigo++;
                                    flagValidacaoEntradaParaReturn = 0;
                                    break;
                                default:
                                    printf("\nOpção inválida.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagValidacaoDoWhileDoRefrigerante++;
                                    flagGeloSecoEnergetico++;
                                    flagGeloFrutasEnergetico++;
                                    break;
                                }/*bloco do if menta*/
                            }/*bloco do if*/
                    } /* bloco do while*/
                }//final do case 103
                break;
                case 104:
                    /*bloco do Torradas*/
                    switchCodigo++;
                    break;
                case 105:
                    /*bloco do pastel*/
                    break;
                case 106:
                case 107:
                {
                    system("cls");
                    int i3 = 1, escolhaHamburguer, flagValidacaoDoWhileDoHamburguer = 0;
                    char escolhaQueijoNeon, escolhaMolhoDePlasma, escolhaPao;
                    int flagQueijoNeonHamburguer = 0, flagMolhoDePlasmaHamburguer = 0, flagValidacaoPao = 0;
                    while (i3 < 2)
                    {
                        /* Bloco do Hambúrguer*/
                        if (flagValidacaoDoWhileDoHamburguer == 0)
                        {
                            printf("\n1 - Hambúrguer de Algas Marinhas ");
                            printf("\n2 - Hambúrguer de Proteína de Insetos ");
                            printf("\n3 - Hambúrgue de Carne Sintética ");
                            printf("\n4 - Hambúrguer de Frutos do Mar Neon ");
                            printf("\nQual o tipo de Hamburgúrguer desejado: \nCaso deseje digite 0 para voltar ao menu cardapio:");
                            escolhaHamburguer = 0;
                            printf("\nTodos estes hambúrgueres possuem como ingrediente alface, tomate, cebola, picles e maionese. \nTendo entre suas diferenças apenas o ser vivo como ingrediente principal\n");
                            scanf("%d", &escolhaHamburguer);
                            system("color 0a");
                            Sleep(100);
                            system("color 0E");
                            system("cls");
                            switch (escolhaHamburguer)
                            {
                            case 0:system("color 04");  Sleep(100); system("color 0E");
                                valorProduto = 0.0;i3++;flagValidacaoEntradaParaReturn++;
                                system("cls"); break;
                            case 1:
                                printf (" \nHambúrguer de Algas Marinhas\n") ;
                                printf (" \nPreço: R$17.99\n") ;
                                printf (" \nDescrição : Feito com algas sustentáveis, oferece um sabor umami e uma textura inovadora. \n") ;
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 17.99;
                                break;
                            case 2:
                                printf (" \nHambúrguer de Proteína de Insetos\n") ;
                                printf (" \nPreço: R$10.50\n") ;
                                printf (" \nDescrição : Rico em proteínas e barato, o clássico hambúrguer estilho maromba do futuro,\n") ;
                                printf("\neste hambúrguer é feito com insetos moídos e temperos exóticos.\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 10.50;
                                break;
                            case 3:
                                printf (" \nEHambúrgue de Carne Sintética\n") ;
                                printf (" \nPreço: R$15.90\n") ;
                                printf (" \nDescrição : Produzido em laboratório, com a mesma textura e sabor da carne tradicional, mas mais sustentável. \n") ;
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 15.90;
                                break;
                            case 4:
                                printf (" \n Hambúrguer de Frutos do Mar Neon \n") ;
                                printf (" \nPreço: R$25.00\n") ;
                                printf (" \nDescrição : Hambúrguer de frutos do mar com um brilho fluorescente, misturando sabores marítimos com uma apresentação futurista. \n") ;
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 25.00;
                                break;
                            default:
                                printf("\nOpção inválida.");
                                system("color 04");
                                Sleep(100);
                                system("color 0E");
                                valorProduto = 0;
                                break;
                            }/* final switch escolha hamburger*/
                        } //final do if validação do while hamburger
                        if (flagQueijoNeonHamburguer == 0)
                            if (valorProduto > 0)
                            {
                                printf("\nDeseja adicionar Molho de Plasma [S] ou [N]: \nCaso deseje voltar ao menu do hambúrguer digite [V] ou [v]:");
                                printf("\nDescrição: Molho de Plasma para uma acidez e adrenalina maior enquanto come o lanche\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                scanf(" %c", &escolhaMolhoDePlasma); // Adicionandovespaço para ignorar o enter anterior
                                switch (escolhaMolhoDePlasma)
                                {
                                case 'V':
                                case 'v':
                                    system("cls");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagMolhoDePlasmaHamburguer++;
                                    flagValidacaoPao++;
                                    break;
                                case 'S':
                                case 's':
                                    printf("\nMolho de Plasma adicionado.\n");
                                    system("color 0a");
                                    Sleep(100);
                                    system("color 0E");
                                    flagMolhoDePlasmaHamburguer = 0;
                                    break;
                                case 'N':
                                case 'n':
                                    printf("\nSem adicional de Molho de Plasma.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagMolhoDePlasmaHamburguer = 0;
                                    break;
                                default:
                                    printf("\nOpção inválida.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagValidacaoDoWhileDoHamburguer++;
                                    flagMolhoDePlasmaHamburguer++;
                                    flagValidacaoPao++;
                                }// bloco do switch Molho plasma
                            }// bloco do if Molho plasma
                        if (flagMolhoDePlasmaHamburguer == 0)
                            if (valorProduto> 0)
                            {
                                printf("\nDeseja adicionar Queijo Neon [S] ou [N]: \n Caso deseje voltar ao menu do hambúrguer digite [V] ou [v]:");
                                printf("\nDescrição: Queijo que brilha sob luz negra, oferecendo um visual vibrante e futurista.\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                scanf(" %c", &escolhaQueijoNeon); // Adicionando espaço para ignorar o enter anterior
                                switch (escolhaQueijoNeon)
                                {
                                case 'V':
                                case 'v':
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    system("cls");
                                    flagValidacaoPao++;
                                    break;
                                case 'S':
                                case 's':
                                    printf("\nQueijo Neon adicionado.\n");
                                    system("color 0a");
                                    Sleep(100);
                                    system("color 0E");
                                    flagMolhoDePlasmaHamburguer++;
                                    flagValidacaoPao = 0;
                                    break;
                                case 'N':
                                case 'n':
                                    printf("\nSem adicional de Queijo Neon.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagMolhoDePlasmaHamburguer++;
                                    flagValidacaoPao = 0;
                                    break;
                                default:
                                    printf("\nOpção inválida.\n");
                                    system("color 04");
                                    Sleep(100);
                                    system("color 0E");
                                    flagValidacaoDoWhileDoHamburguer++;
                                    flagQueijoNeonHamburguer++;
                                    flagValidacaoPao++;
                                }//bloco do switch
                            }//bloco do if gelo fruta
                        if (flagValidacaoPao == 0)
                            if (valorProduto > 0)
                            {
                                printf("\nSeja bem vindo aos nosso pães especiais da casa");
                                printf("\nN ou n - Pão Neon");
                                printf("\nC ou c - Pão de circuito");
                                printf("\nA ou a - Pão de algoritmo");
                                printf("\nT out t - Pão transparente");
                                printf("\nG ou g - Pão de grafeno\n");
                                printf("Caso deseje voltar ao menu do hambúrguer digite [V] ou [v]:\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                scanf(" %c", &escolhaPao); // Adicionando espaço para ignorar o enter anterior
                                switch(escolhaPao)
                                {
                                case 'V':
                                case 'v':
                                    system("cls");
                                    break;
                                case 'N':
                                case 'n':
                                    printf("\nTipo de pão escolhido: Pão neon. \nDescrição: pão com pedras luminosas comestíveis e apimentadas");
                                    system("color 0a");
                                    Sleep(100);
                                    system("color 0E");
                                    i3++;
                                    switchCodigo++;
                                    break;
                                case 'C':
                                case 'c':
                                    printf("\nTipo de pão escolhido: Pão de circuito.\nDescrição: pão com impressões de circuitos eletrônicos");
                                    system("color 0a");
                                    Sleep(100);
                                    system("color 0E");
                                    i3++;
                                    switchCodigo++;
                                    break;
                                case 'A':
                                case 'a':
                                    printf("\nTipo de pão escolhido: Pão de algoritmo.\nDescrição: pão com impressões de códigos binários e desenhos de portas lógicas");
                                    system("color 0a");
                                    Sleep(100);
                                    system("color 0E");
                                    i3++;
                                    switchCodigo++;
                                    break;
                                case 'T':
                                case't':
                                    printf("\nTipo de pão escolhido: Pão transparente.\nDescrição: pão com luminescência fraca lembrando um vidro transparente");
                                    system("color 0a");
                                    Sleep(100);
                                    system("color 0E");
                                    i3++;
                                    switchCodigo++;
                                    break;
                                case 'G':
                                case 'g':
                                    printf("\nTipo de pão escolhido: Pão de grafeno.\nDescrição: pão denso com um toque de cor de carbono, sendo capaz de refletir materiais futuristas.");
                                    system("color 0a");
                                    Sleep(100);
                                    system("color 0E");
                                    i3++;
                                    switchCodigo ++;
                                    break;
                                default:
                                    printf("Opção inválida !!!");
                                    flagValidacaoDoWhileDoHamburguer++;
                                    flagQueijoNeonHamburguer++;
                                    flagMolhoDePlasmaHamburguer++;
                                    break;
                                } /*Bloco do switch escolha pão*/
                            } /*bloco do if pão*/
                    }// bloco do while
                }//final case 106
                break;
                case 108:
                    break;
                case 109:
                    break;
                case 110:
                    break;
                case 111:
                    break;
                default:
                    printf("\nOpção inválida !!!");
                }// final switch do cardapio
            } while (switchCodigo < 2);
            {
                if(flagValidacaoEntradaParaReturn == 0)
                {
                    while (i2 < 2)
                    {
                        printf("\nDetermine a quantidade de itens desejados:");
                        scanf("%d", &quantidadeLanches);
                        if (quantidadeLanches < 0)
                        {
                            printf("\nQuantidade invalida, deve ser superior ou igual a 0");
                            system ("pause");
                            system("cls");
                        }//if sem pedido
                        else
                            i2++;
                    }/*Bloco do while para a verficação da quantidade de lanches*/
                    int i8 = 1;
                    if (flagValidacaoEntradaParaReturn == 0)
                    {
                        while(i7<2)
                        {
                            if(flagControleDeEntradaMesa == 0)
                            {

                            printf("\nDetermine a mesa a ser levada o lanche:");
                            scanf("%d", &mesaLanchonete);
                            if (mesaLanchonete < 0 )
                                printf("Valor de mesa invalido, deve ser igual ou maior que zero");
                            else
                            {
                            i7++;
                            flagControleDeEntradaMesa++;
                            }//Blco do else
                            }//bloco do if flagControleDeEntradaMesa
                        }/*Bloco do while da flag da mesa*/
                        printf("\nCodigo: %d \n Quantidade: %d\n Mesa da Lanchonete sendo feito o pedido: %d", escolhaCodigo,quantidadeLanches,mesaLanchonete);
                        totalLanche = valorProduto * quantidadeLanches;
                        quantidadeTotalDeLanchesPedidos = quantidadeLanches+quantidadeTotalDeLanchesPedidos;
                        totalPedido = totalLanche + totalPedido;
                        printf("\n Total deste pedido: R$%.2f\n", totalLanche);
                        system("pause");
                        system("cls");
                        flagValidacaoAtivamentoDoCaseN++;
                        flagValidacaoAtivamentoDoCaseEparaCaseS = 0;
                    }/*Bloco do if da flag da mesa*/
                }
                break;
            }
        }
        case 'E':
        case 'e':
            if (flagValidacaoAtivamentoDoCaseN > 0)
            {
                printf("\nValor total do pedido: %.2f\n", totalPedido);
                printf("\nQuantidade total de lanches pedidos: %d", quantidadeTotalDeLanchesPedidos);
                printf("\nMesa onde foi realizado o pedidio: %d\n", mesaLanchonete);
                totalPedido = 0;
                system("pause");
                system("cls");
                flagControleDeEntradaMesa = 0;
                i7 = 0;
                flagValidacaoAtivamentoDoCaseEparaCaseS++;
            } /*Bloco do if da flag*/
            else
                printf("Pedido inexistente"); /*Bloco do switch escolhaDesejadan case E*/
            break;
        case 'S':
        case 's':
            system("cls");
            if(flagValidacaoAtivamentoDoCaseEparaCaseS > 0)
            {
                system("color 4f");
                printf("Saindo do programa ...\n");
                system("pause");
                i++;
            }
            else
            {
                printf("Opção inválida !!! Para sair do programa deve-se antes encerrar o pedido criado !!!\n");
                system("pause");
                system("cls");
            }//flagValidacaoAtivamentoDoCaseEparaCaseS
            break;
        default:
            printf("\nOpção invalida !!!\n");
            system ("pause");
            system("cls");
            break;
        } /*Bloco do switch escolhaDesejada*/
    } while(i<2); // final do codigo (do) while(i<2);
    return 0;
}//int main
