#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ncurses.h>

typedef struct
{
  char* nome;
  char* sobrenome;
  int cpf;
  int nro_conta;
  int agencia;
  int senha;
  float saldo;
  float chequeespecial;
  float deposito;
     
} Cliente;

Cliente clientes[10];

int qtd_clientes;

int cadastrocliente()
{
  char nome[15];
  char sobrenome[15];
  int cpf, nro_conta, senha;
  int confirma;
  float chequeespecial;

  if (qtd_clientes == 10)
  {
    printf("Quantidade máxima de clientes atingida.\n");  return (0);
  }

  printf("Entre com o nome: ");
  scanf("%s", nome);
  getchar();

  printf("Entre com o sobrenome: ");
  scanf("%s", sobrenome);
  getchar();

  printf("Entre com o CPF: ");
  scanf("%d", &cpf);

  srand(time(NULL));
  nro_conta = rand() % 100000;
  printf("\nSua conta corrente é %d.\n", nro_conta);

  printf("Crie uma senha para sua conta: ");
  scanf("%d", &senha);

  chequeespecial = rand() % 1500;
  printf("\nSeu cheque especial é %f.\n", chequeespecial);
  printf("\n %s %s, seja Bem-Vinda(o) ao Banco Nozes!\n", nome, sobrenome); 
  printf("\n************************************************************************\n");

  clientes[qtd_clientes].nome = nome;
  clientes[qtd_clientes].sobrenome = sobrenome;
  clientes[qtd_clientes].cpf = cpf;
  clientes[qtd_clientes].senha = senha;
  clientes[qtd_clientes].nro_conta = nro_conta;
  clientes[qtd_clientes].agencia = 1;
  clientes[qtd_clientes].saldo = 0.f;
  clientes[qtd_clientes].chequeespecial = chequeespecial;
  clientes[qtd_clientes].deposito = 0;
    
  qtd_clientes = qtd_clientes + 1;

  return (0);
}