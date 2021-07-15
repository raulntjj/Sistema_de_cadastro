#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define PE 5720
#define ES 45000

int controle_estoque()
{
    //suporta ate 45 mil produtos.
    float codproduto[ES] = {0}, estoque[ES] = {0}, valor[ES] = {0}, valor_de_mercado[ES] = {0}, calculo_de_porcetagem = 0, porcentagem = 0;
    char produto[ES] [30];
    int numero = 0, cod = 0;
    char resposta[2];
    srand(time(NULL));
    for (;;)
    {
        printf ("------------------------------------------\n\n\n------- Menu de cadastro de Estoque ------\n\n\n------------------------------------------\n\n");
        printf ("Deseja receber codigo aleatorio? (sim ou nao)\n");
        scanf ("%s", &resposta[2]);
        if (resposta[2] == 's')
        {
            printf ("Codigo ->%d\n", rand() % ES);
        }
        printf ("Digite o codigo em que o produto serao cadastrado:\n");
        scanf ("%d", &cod);
        if (codproduto[cod] == 0)
        {
            printf ("Confirme o codigo:\n");
            scanf ("%f", &codproduto[cod]);
            if (codproduto[cod] != cod)
            {
                system ("cls");
                printf ("\n\n\nhmm entao vc é espertinho e quer bugar meu sistema ne\n");
                printf ("O produto foi cadastrada no primeiro codigo digitado: %d\n\n\n", cod);
                codproduto[cod] = cod;
            }
            printf ("Digite o nome do produto:\n");
            scanf ("%s", &produto[cod]);
            printf ("Digite o valor de producao do produto:\n");
            scanf ("%f", &valor[cod]);
            printf ("Digite em porcentagem (XX%%) em que o lucro serao tirado em cima de cada unidade:\n");
            scanf ("%f", &porcentagem);
            calculo_de_porcetagem = (porcentagem * valor[cod] / 100) + valor[cod];
            valor_de_mercado[cod] = calculo_de_porcetagem;
            printf ("Digite a quantidade em estoque do produto:\n");
            scanf ("%f", &estoque[cod]);
            printf ("Deseja cadastrar outro produto? (sim ou nao)\n");
            scanf ("%s", &resposta[2]);
            if (resposta[2] == 'n')
            {
                system("cls");
                break;
            }
        }
        else
        {
            printf ("Existe um produto cadastrado nesse codigo, tente outro!\n");
        }
    }
    printf ("----------------------------------\n\n\n------ Menu de visualizacao ------\n\n\n----------------------------------\n\n\n");
    printf ("Deseja ver os dados de algum produto? (sim ou nao)\n");
    scanf ("%s", &resposta[2]);
    if (resposta[2] == 's')
    {
        for (;;)
        {
            printf ("Digite o codigo do produto que deseja ver:\n");
            scanf ("%d", &numero);
            if (codproduto[numero] == 0)
            {
                printf ("\n\n Nenhuma produto cadastrado nesse codigo, tente outro! \n\n\n");
            }
            else
            {
                system ("cls");
                printf ("----------------------------------\n\n\n----- Pagina de visualizacaoo -----\n\n\n----------------------------------\n\n\n");
                printf ("------------ Produto de codigo: %0.f -------------\n\nNome do produto: %s\n\nValor de custo: R$ %.0f\n\nValor de mercado: R$ %.2f\n\nProdutos em estoque: %.0f unidades.\n\n", codproduto[numero], produto[numero], valor[numero], valor_de_mercado[numero], estoque[numero]);
                printf ("Deseja ver os dados de outro produto? (sim ou nao)\n");
                scanf ("%s", &resposta[2]);
                system ("cls");
                if (resposta[2] == 'n')
                {
                    system ("cls");
                    break;
                }
            }
        }
    }
    return 0;
}

//suporta até 5720 pessoas.
int controle_pessoas()
{
    float codpessoa[PE] = {0}, idade[PE] = {0}, altura[PE] = {0};
    int numero = 0, cod = 0;
    char nome[PE] [30], sobrenome[PE] [80], matricula[PE] [80], sexo[PE] [80], data[PE] [80];
	char resposta[2];
    srand(time(NULL));
    for (;;)
    {
        printf ("------------------------------------------\n\n\n------- Menu de cadastro de Pessoas ------\n\n\n------------------------------------------\n\n");
        printf ("Deseja receber codigo aleatorio? (sim ou nao)\n");
        scanf ("%s", &resposta[2]);
        if (resposta[2] == 's')
        {
            printf ("Codigo -> %d\n", rand() % PE);
        }
        printf ("Digite o codigo em que a pessoa sera cadastrada:\n");
        scanf ("%d", &cod);
        if (codpessoa[cod] == 0)
        {
            printf ("Confirme o codigo:\n");
            scanf ("%f", &codpessoa[cod]);
            if (codpessoa[cod] != cod)
            {
                system ("cls");
                printf ("\n\n\nhmm entao vc eh espertinho e quer bugar meu sistema ne\n");
                printf ("A pessoa foi cadastrada no primeiro codigo digitado: %li\n\n\n", cod);
                codpessoa[cod] = cod;
            }
            printf ("Digite o nome e sobrenome da pessoa: (ex: Joao Silva)\n");
            scanf ("%s %s", &nome[cod], &sobrenome[cod]);
            printf ("Digite o sexo:\n");
            scanf ("%s", &sexo[cod]);
            printf ("Digite a data de nascimento:\n");
            scanf ("%s", &data[cod]);
            printf ("Digite a idade:\n");
            scanf ("%f", &idade[cod]);
            printf ("Digite a altura:\n");
            scanf ("%f", &altura[cod]);
            printf ("Digite a matricula da pessoa:\n");
            scanf ("%s", &matricula[cod]);
            printf ("Deseja cadastrar outra pessoa? (sim ou nao)\n");
            scanf ("%s", &resposta[2]);
            if (resposta[2] == 'n')
            {
                system("cls");
                break;
            }
        }
        else
        {
            printf ("Existe uma pessoa cadastrada nesse codigo, tente outro!\n");
        }
    }
    printf ("----------------------------------\n\n\n------ Menu de visualizacao ------\n\n\n----------------------------------\n\n\n");
    printf ("Deseja ver os dados de alguma pessoa? (sim ou nao)\n");
    scanf ("%s", &resposta[2]);
    if (resposta[2] == 's')
    {
        for (;;)
        {
            printf ("Digite o codigo da pessoa que deseja ver:\n");
            scanf ("%d", &numero);
            if (codpessoa[numero] == 0)
            {
                printf ("\n\n Nenhuma pessoa cadastrada nesse codigo, tente outro! \n\n\n");
            }
            else
            {
                system ("cls");
                printf ("----------------------------------\n\n\n----- Pagina de visualizacao -----\n\n\n----------------------------------\n\n\n");
                printf ("------------ Produto de codigo: %.0f -------------\n\nNome: %s %s.\n\nIdade: %.0f Anos.\n\nData de nascimento: %s.\n\nSexo: %s.\n\nAltura: %.2f Metros.\n\nMatricula: %s\n\n", codpessoa[numero], nome[numero], sobrenome[numero], idade[numero], data[numero], sexo[numero], altura[numero], matricula[numero]);
                printf ("Deseja ver os dados de outra pessoa? (sim ou nao)\n");
                scanf ("%s", &resposta[2]);
                system ("cls");
                if (resposta[2] == 'n')
                {
                    system ("cls");
                    break;
                }
            }
        }
    }
    return 0;
}

int main()
{
    char resposta[2];
    printf ("-----------------------------------------\n\n\n\n- Seja bem vindo ao sistema de cadastro -\n---- do raulntjj o + brabo de goias -----\n\n\n\n-----------------------------------------\n\n\n");
    system ("pause");
    system ("cls");
    printf ("-- Deseja utilizar qual sistema de cadastro? --\n- Escreva: (Estoque) para controle de estoque -\n- Escreva: (Pessoas) para controle de pessoas\n");
    scanf ("%s", &resposta[2]);
    system ("cls");
    if (resposta[2] == 'E' || resposta[2] == 'e')
    {
        controle_estoque();
    }
    if (resposta[2] == 'P' || resposta [2] == 'p')
    {
        controle_pessoas();
    }
    printf ("----------------------------------\n\n\n--- Obrigado, ate a proxima! ---\n\n\n----------------------------------\n\n\n");
    system ("pause");
    return 0;
}
