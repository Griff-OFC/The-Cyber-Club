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
        printf("| |     | | \n");
        printf("| | yber | | lub \n");
        printf("| |__   | |__\n");
        printf(" \\___|  \\___| \n");
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
        scanf(" %c",&escolhaDesejada);
        system("cls");
        //Switch Escolha da opçao desejada//
        switch (escolhaDesejada)
        {
            int escolhaCodigo, quantidadeLanches = 0, flagValidacaoEntradaParaReturn = 0;
            float totalLanche = 0; //Variável utilizada para a etapa final do case N e etapa do case E
            int flagValidacaoAtivamentoDoCaseN = 0; //Flag utilizada para o controle da ordem certa do uso dos comandos
        case 'N':
        case 'n':
        {
            int i = 1, i2 = 1, switchCodigo = 1;
            //Variavies utilizadas para o controle dos whiles utilizados dentro do switch escolha desejada
            do
            { //bloco do (do) responsavel pelo controle do cardapio do codigo
                valorProduto = 0.0;
                printf("\n\t CARDÁPIO\n============================\n----------------------------\n\t Bebidas\n----------------------------\n 100 Café\n 101 Suco Naturais\n 102 Energético\n 103 Refrigerante\n 104 Agua\n----------------------------");
                printf("\n\t Lanches\n----------------------------\n 105 Esfirras\n 106 Pastel\n 107 Hambúrguer\n 108 Coxinha\n----------------------------");
                printf("\n\t Sobremesa\n----------------------------\n 109 Donut\n 110 Brownie\n 111 Cookies\n 112 Sorvete\n----------------------------\n============================\n");
                printf("\nDetermine o código referente ao item [numero, ou 0 para voltar]:");
                system("color 0a");
                Sleep(100);
                system("color 0E");
                fflush(stdin);
                scanf("%d", &escolhaCodigo);
                system("cls");
                switch (escolhaCodigo)
                //Switch Responsavel pelas atribuiçoes dos codigos dos produtos//
                {
                case 0: //Case para voltar ao menu do cardapio
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
                    int flagValicaoEntradaDados = 0, flagValidacaoDoWhileDoCafe = 0, escolhaCafe;
                    while (i3 < 2)
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
                            scanf(" %c", &escolhaAcucar);
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
                    int flagGeloSuco = 0, flagHortelaSuco = 0, flagLimaoSuco = 0, flagValidacaoDoWhileDoSuco = 0;
                    char escolhaGelo, escolhaHortela, escolhaLimao;
                    while (i3 < 2)
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
                            } 
                        } 
                        if(flagGeloSuco == 0)
                            if (valorProduto > 0)
                            {
                                printf("\nDeseja adicionar gelo [S] ou [N]:\n Caso preciso clique [V] para voltar ao menu do suco:\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                fflush(stdin);
                                scanf(" %c", &escolhaGelo);
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
                                }
                            }
                        if(flagHortelaSuco == 0)
                            if (valorProduto > 0)
                            {
                                printf("\nDeseja adicionar hortelã [S] ou [N]:\n Caso preciso clique [V] para voltar ao menu do suco:\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                fflush(stdin);
                                scanf(" %c", &escolhaHortela);
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
                                } 
                            } 
                        if(flagLimaoSuco == 0)
                            if (valorProduto > 0)
                            {
                                printf("\nDeseja adicionar Limão [S] ou [N]:\n Caso preciso clique [V] para voltar ao menu do suco:\n");
                                system("color 0a");
                                Sleep(100);
                                system("color 0E");
                                fflush(stdin);
                                scanf(" %c", &escolhaLimao);
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
                                } 
                            } 
                    } 
                } 
                break;
                case 102:
                {
                    system("cls");
                    int escolhaEnergetico, i3 = 1, flagValidacaoDoWhileDoEnergetico = 0, flagGeloSecoEnergetico = 0, flagGeloFrutasEnergetico = 0, flagMentaEnergetico = 0;
                    char escolhaGeloSec, escolhaGeloFrut, escolhaMenta;
                    while (i3 < 2) 
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
                                valorProduto = 11.99;
                                break;
                            case 2:
                                printf ("\nEnergético Cyber change\nPreço: R$10.50\nDescrição: Bebida energizante com sabor de frutas tropicais e um brilho neon.\n");
                                valorProduto = 10.50;
                                break;
                            case 3:
                                printf ("\nEnergético Techno Turbo\nPreço: R$9.90\nDescrição: Bebida energizante com sabor de frutas tropicais e um brilho neon.\n");
                                valorProduto = 9.90;
                                break;
                            case 4:
                                printf ("\nEnergético Quantum Energy\nPreço: R$8.00\nDescrição: Bebida energizante com sabor de frutas tropicais e um brilho neon.\n");
                                valorProduto = 8.00;
                                break;
                            default:
                                printf ("\nOpção inválida.");
                                valorProduto = 0;
                                break;
                            }
                        }
                        if (flagGeloSecoEnergetico == 0)
                            if (valorProduto > 0)
                            {
                                printf ("\nDeseja adicionar gelo seco [S] ou [N]:\n Caso preciso clique [V] para voltar ao menu do energético:\n");
                                scanf(" %c", &escolhaGeloSec); 
                                switch (escolhaGeloSec)
                                {
                                case 'V': case 'v':
                                    flagGeloFrutasEnergetico++; flagMentaEnergetico++; system("cls"); break;
                                case 'S': case 's':
                                    printf ("\nGelo seco adicionado.\n");
                                    flagGeloFrutasEnergetico = 0; flagMentaEnergetico = 0; break;
                                case 'N': case 'n':
                                    printf ("\nSem adicional de gelo seco.\n");
                                    flagGeloFrutasEnergetico = 0; flagMentaEnergetico = 0; break;
                                default:
                                    printf ("\nOpção inválida.\n");
                                    flagValidacaoDoWhileDoEnergetico++; flagGeloFrutasEnergetico++; flagMentaEnergetico++;
                                }
                            } 
                        if (flagGeloFrutasEnergetico == 0)
                            if (valorProduto > 0)
                            {
                                printf ("\nDeseja adicionar gelo de frutas [S] ou [N]:\n Caso preciso clique [V] para voltar ao menu do energético:\n");
                                scanf(" %c", &escolhaGeloFrut); 
                                switch (escolhaGeloFrut)
                                {
                                case 'V': case 'v':
                                    flagMentaEnergetico++; system("cls"); break;
                                case 'S': case 's':
                                    printf ("\nGelo de frutas adicionado.\n");
                                    flagMentaEnergetico = 0; flagGeloFrutasEnergetico++; break;
                                case 'N': case 'n':
                                    printf ("\nSem adicional de gelo de frutas.\n");
                                    flagMentaEnergetico = 0; flagGeloFrutasEnergetico++; break;
                                default:
                                    printf("\nOpção inválida.\n");
                                    flagValidacaoDoWhileDoEnergetico++; flagGeloSecoEnergetico++; flagMentaEnergetico++; break;
                                }
                            }
                        if (flagMentaEnergetico == 0)
                            if (valorProduto > 0)
                            {
                                printf("\nDeseja adicionar menta [S] ou [N]:\n Caso preciso clique [V] para voltar ao menu do energético:\n");
                                scanf(" %c", &escolhaMenta);
                                switch (escolhaMenta)
                                {
                                case 'V': case 'v': system("cls"); break;
                                case 'S': case 's':
                                    printf("\nMenta adicionado.\n");
                                    i3++; switchCodigo++; flagValidacaoEntradaParaReturn = 0; break;
                                case 'N': case 'n':
                                    printf("\nSem adicional de menta.\n");
                                    i3++; switchCodigo++; flagValidacaoEntradaParaReturn = 0; break;
                                default:
                                    printf("\nOpção inválida.\n");
                                    flagValidacaoDoWhileDoEnergetico++; flagGeloSecoEnergetico++; flagGeloFrutasEnergetico++; break;
                                }
                            }
                    } 
                    } 
                break;
                case 103:
                {
                    system ("cls");
                    int escolhaRefrigerante, i3 = 1, flagValidacaoDoWhileDoRefrigerante = 0;
                    int flagGeloSecoEnergetico = 0, flagGeloFrutasEnergetico = 0, flagMentaEnergetico = 0;
                    char escolhaGeloSec, escolhaGeloFrut, escolhaMenta;
                    while (i3 < 2)
                    {
                        if (flagValidacaoDoWhileDoRefrigerante == 0)
                        {
                            printf("\nCaso deseje digite 0 para voltar ao menu do cardápio \n1 - Refrigerante Neon Blast\n2 - Refrigerante Cyber Cola\n3 - Refrigerante Quantum Berry\n4 - Refrigerante Plasma Punch\nQual o tipo de Refrigerante desejado: ");
                            escolhaRefrigerante = 0;
                            scanf("%d", &escolhaRefrigerante);
                            system("cls");
                            switch (escolhaRefrigerante)
                            {
                            case 0:
                                valorProduto = 0.0; i3++; flagValidacaoEntradaParaReturn++; system("cls"); break;
                            case 1:
                                printf("\nRefrigerante Neon Blast\nPreço: R$6.50\n");
                                valorProduto = 6.50; break;
                            case 2:
                                printf("\nRefrigerante Cyber Cola\nPreço: R$5.99\n");
                                valorProduto = 5.99; break;
                            case 3:
                                printf("\nRefrigerante Quantum Berry\nPreço: R$7.00\n");
                                valorProduto = 7.00; break ;
                            case 4:
                                printf("\nRefrigerante Plasma Punch\nPreço: R$7.50\n");
                                valorProduto = 7.50; break ;
                            default:
                                printf("\nOpção inválida."); break ;
                            }
                        }
                        if (flagGeloSecoEnergetico == 0 && valorProduto > 0)
                        {
                            printf("\nDeseja adicionar cubos de gelo com LED [S] ou [N]:\n");
                            scanf(" %c", &escolhaGeloSec);
                            switch (escolhaGeloSec)
                            {
                            case 'S' : case 's' :
                                printf("\nCubos de gelo com LED adicionado.\n");
                                flagGeloFrutasEnergetico = 0; flagMentaEnergetico = 0; break ;
                            case 'N': case 'n':
                                printf("\nSem adicional de cubos de gelo com LED.\n");
                                flagGeloFrutasEnergetico = 0; flagMentaEnergetico = 0; break ;
                            default:
                                flagValidacaoDoWhileDoRefrigerante++; flagGeloFrutasEnergetico++; flagMentaEnergetico++;
                            }
                        }
                        if (flagGeloFrutasEnergetico == 0 && valorProduto > 0)
                        {
                            printf("\nDeseja adicionar espuma molecular [S] ou [N]:\n");
                            scanf(" %c", &escolhaGeloFrut);
                            switch (escolhaGeloFrut)
                            {
                            case 'S' : case 's' :
                                printf("\nEspuma molecular adicionado.\n");
                                flagMentaEnergetico = 0; flagGeloFrutasEnergetico++; break ;
                            case 'N': case 'n':
                                printf("\nSem adicional de espuma molecular.\n");
                                flagMentaEnergetico= 0; flagGeloFrutasEnergetico++; break;
                            default:
                                flagValidacaoDoWhileDoRefrigerante++; flagGeloSecoEnergetico++; flagMentaEnergetico++; break;
                            }
                        }
                        if (flagMentaEnergetico == 0 && valorProduto > 0)
                        {
                            printf("\nDeseja adicionar menta [S] ou [N]:\n");
                            scanf(" %c", &escolhaMenta);
                            switch (escolhaMenta)
                            {
                            case 'S': case 's':
                                printf("\nMenta adicionado.\n");
                                i3++; switchCodigo++; flagValidacaoEntradaParaReturn = 0; break;
                            case 'N': case 'n':
                                printf("\nSem adicional de menta.\n");
                                i3++; switchCodigo++; flagValidacaoEntradaParaReturn = 0; break;
                            default:
                                flagValidacaoDoWhileDoRefrigerante++; flagGeloSecoEnergetico++; flagGeloFrutasEnergetico++; break;
                            }
                        }
                    }
                }
                break;
                case 104:
                    printf("\nÁgua adicionada.\nPreço: R$ 4.00\n");
                    valorProduto = 4.00;
                    switchCodigo++;
                    break;
                case 105:
                    printf("\nEsfirra adicionada.\nPreço: R$ 5.50\n");
                    valorProduto = 5.50;
                    switchCodigo++;
                    break;
                case 106:
                case 107:
                {
                    system("cls");
                    int i3 = 1, escolhaHamburguer, flagValidacaoDoWhileDoHamburguer = 0;
                    while (i3 < 2)
                    {
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
                            system("cls");
                            switch (escolhaHamburguer)
                            {
                            case 0:
                                valorProduto = 0.0;i3++;flagValidacaoEntradaParaReturn++; system("cls"); break;
                            case 1:
                                printf (" \nHambúrguer de Algas Marinhas\n") ;
                                printf (" \nPreço: R$17.99\n") ;
                                valorProduto = 17.99;
                                break;
                            case 2:
                                printf (" \nHambúrguer de Proteína de Insetos\n") ;
                                printf (" \nPreço: R$10.50\n") ;
                                valorProduto = 10.50;
                                break;
                            case 3:
                                printf (" \nHambúrgue de Carne Sintética\n") ;
                                printf (" \nPreço: R$15.90\n") ;
                                valorProduto = 15.90;
                                break;
                            case 4:
                                printf (" \n Hambúrguer de Frutos do Mar Neon \n") ;
                                printf (" \nPreço: R$25.00\n") ;
                                valorProduto = 25.00;
                                break;
                            default:
                                printf("\nOpção inválida.");
                                valorProduto = 0;
                                break;
                            }
                        }
                        
                        i3++;
                        switchCodigo++;
                        flagValidacaoEntradaParaReturn = 0;
                    } 
                    break;
                } 
                case 108:
                    printf("\nCoxinha adicionada.\nPreço: R$ 6.00\n");
                    valorProduto = 6.00;
                    switchCodigo++;
                    break;
                case 109:
                    printf("\nDonut adicionada.\nPreço: R$ 8.00\n");
                    valorProduto = 8.00;
                    switchCodigo++;
                    break;
                case 110:
                    printf("\nBrownie adicionada.\nPreço: R$ 12.00\n");
                    valorProduto = 12.00;
                    switchCodigo++;
                    break;
                case 111:
                    printf("\nCookies adicionada.\nPreço: R$ 5.00\n");
                    valorProduto = 5.00;
                    switchCodigo++;
                    break;
                case 112:
                    printf("\nSorvete adicionada.\nPreço: R$ 7.00\n");
                    valorProduto = 7.00;
                    switchCodigo++;
                    break;
                default:
                    printf("\nCódigo inválido.\n");
                    break;
                } // final do switch (escolhaCodigo)

                if (valorProduto > 0) {
                    totalLanche += valorProduto;
                    quantidadeLanches++;
                    printf("\nProduto computado com sucesso! Total parcial do Lanche: R$ %.2f\n", totalLanche);
                }
                
                if (flagValidacaoEntradaParaReturn == 0) {
                    printf("\nDeseja pedir mais alguma coisa do cardápio? [1] Sim / [0] Não: ");
                    scanf("%d", &switchCodigo);
                }

            } while (switchCodigo != 0); 

            totalPedido += totalLanche;
            quantidadeTotalDeLanchesPedidos += quantidadeLanches;
            
            system("cls");
            printf("\nPedido registrado na mesa! Voltando ao menu principal...\n");
            system("pause");
            system("cls");
            break;
        } // final do case 'N'

        case 'E':
        case 'e':
        {
            system("cls");
            printf("\n================================\n");
            printf("      FECHAMENTO DE CONTA       \n");
            printf("================================\n");
            printf("Total de itens pedidos: %d\n", quantidadeTotalDeLanchesPedidos);
            printf("Total a pagar da mesa: R$ %.2f\n", totalPedido);
            printf("================================\n");
            printf("Obrigado pela preferência no Cyber Club!\n");
            system("pause");
            
            totalPedido = 0.0;
            quantidadeTotalDeLanchesPedidos = 0;
            system("cls");
            break;
        }

        case 'S':
        case 's':
        {
            system("cls");
            printf("\nEncerrando o sistema do Cyber Club. Até logo!\n");
            break;
        }

        default:
            printf("\nOpção inválida! Tente novamente.\n");
            system("pause");
            system("cls");
            break;

        } // final do switch(escolhaDesejada)
        
    } while (escolhaDesejada != 'S' && escolhaDesejada != 's'); 

    return 0;
}
