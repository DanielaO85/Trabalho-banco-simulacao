#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>


#include "erros.h"
#include "cadastrocliente.h"
#include "validasenhacliente.h"
#include "cadastrofuncionario.h"
#include "validasenhafuncionario.h"
#include "depositar.h"
#include "depositarterceiro.h"
#include "totaldepositos.h"
#include "sacar.h"
#include "saldo.h"
#include "saldomediocontas.h"
#include "pagar.h"
#include "chequeespecial.h"
#include "cancelaconta.h"

int opcao;
int resultado;
int opcaocliente;
int opcaofuncionario;
float saldomedioclientes;
float somatorioclientes;
int cpf;
int contacorrente;
int deposito;
int qtd_clientes;
float depositoterc;


void inicialmenu()
{
  printf("\n*******************************************************************\n********************* Bem Vindo ao Banco Nozes ********************\n*******************************************************************\n\nPara começarmos, informe:\n \n1 - Cliente:\n2 - Funcionario:\n3 - Quer ser cliente:\n4 - Deposito para cliente Nozes:\n5 - Sair:\n");
}

void menucliente()
{
  printf("\n\n**********************Bem vindo ao Banco Nozes**************************\n\n");
  printf("Selecione um servico disponivel\n\n");
  printf("1. Deposito\n");
  printf("2. Saque\n");
  printf("3. Pagamento\n");
  printf("4. Cheque Especial\n");
  printf("5. Saldo\n");
  printf("6. Encerrar Conta Corrente.\n");
  printf("7. Sair\n");
  printf("8. Voltar ao menu inicial\n");
}

void menufuncionario()
{
  printf("\n\n**********************Bem vindo Funcionário Banco Nozes**************************\n\n");
  printf("Selecione uma opcao disponivel\n\n");
  printf("1. Saldo Medio de Contas da Agencia.\n");
  printf("2. Ver total de depositos.\n");
  printf("3. Total de clientes da Agencia.\n");
  printf("4. Sair\n");
  printf("5. Voltar ao menu inicial\n");
}

void inicializa_clientes() 
{
  clientes[0].agencia = 1;
  clientes[0].cpf = 123456123;
  clientes[0].nome = "PAULO";
  clientes[0].sobrenome = "PIRES";
  clientes[0].nro_conta = 123456;
  clientes[0].saldo = 100;
  clientes[0].senha = 123;
  clientes[0].chequeespecial = 1000;
  clientes[0].deposito = 100.f;
    
  clientes[1].agencia = 1;
  clientes[1].cpf = 789123123;
  clientes[1].nome = "BIA";
  clientes[1].sobrenome= "NUNES";
  clientes[1].nro_conta = 789123;
  clientes[1].saldo = 0;
  clientes[1].senha = 123;
  clientes[1].chequeespecial = 1000;
  clientes[1].deposito = 0;
 
  clientes[2].agencia = 1;
  clientes[2].cpf = 456789123;
  clientes[2].nome = "JOAO";
  clientes[2].sobrenome = "SILVA";
  clientes[2].nro_conta = 456789;
  clientes[2].saldo = 10;
  clientes[2].senha = 123;
  clientes[2].chequeespecial = 500;
  clientes[2].deposito = 0;
  
  clientes[3].agencia = 1;
  clientes[3].cpf = 222333444;
  clientes[3].nome = "ANA";
  clientes[3].sobrenome = "DIAS";
  clientes[3].nro_conta = 505050;
  clientes[3].saldo = 2300;
  clientes[3].senha = 123456;
  clientes[3].chequeespecial = 2000;
  clientes[3].deposito = 0;
   
  clientes[4].agencia = 1;
  clientes[4].cpf = 111222333;
  clientes[4].nome = "JONAS";
  clientes[4].sobrenome = "DIAS";
  clientes[4].nro_conta = 606060;
  clientes[4].saldo = 1000;
  clientes[4].senha = 123456;
  clientes[4].chequeespecial = 2000;
  clientes[4].deposito = 0;
 
  qtd_clientes = 5;
}

void inicializa_funcionarios() 
{
  funcionario[0].nro_conta = 505050;
  funcionario[0].cpf = 222333444;
  funcionario[0].senhaespecial = 147258;
    
  funcionario[1].nro_conta = 606060;
  funcionario[1].cpf = 111222333;
  funcionario[1].senhaespecial = 147258;
    
  qtd_funcionarios = 2;
}

int main()
{

  int valido;
  int validof;

  inicializa_clientes();
  inicializa_funcionarios();
  inicialmenu();
  scanf("%d", &opcao);

  while (opcao != 5)
  {
    switch (opcao)
    {
      case 1:
      valido = validasenhacliente();
      if (valido == DADOS_EQUIVOCADOS)
      {
        printf("Dados não conferem.\n");
        break;
      }
      else if (valido == SENHA_BLOQUEADA)
      {
        break;
      }                  
     
      menucliente();
      scanf("%d", &opcaocliente);
      while (opcaocliente != 8)
      {
        switch (opcaocliente)
        {
          case 1:
          depositar();
          break;

          case 2:
          sacar();
          break;

          case 3:
          pagar();
          break;

          case 4:
          chequeespecial();
          break;

          case 5:
          saldo();
          break;                    

          case 6:
          resultado = cancelaconta();   
          if(resultado == 1) 
          {
            return(1);
          }
          else
          return(0);
                 
          case 7:
          return (0);
    
          case 8:
          break;
        }

        menucliente();
        scanf("%d", &opcaocliente);
      }

      break;

      case 2:        
      validof = validasenhafuncionario();
      if (validof == DADOS_EQUIVOCADOS)
      {
        printf("Dados não conferem.\n");
        break;
      }
      else if (validof == SENHA_BLOQUEADA)
      {
        break;
      }                  
      menufuncionario();
      scanf("%d", &opcaofuncionario);

      while(opcaofuncionario != 5)
      {
        switch (opcaofuncionario)
        {
          case 1:
          saldomediocontas();
          break;

          case 2:
          totaldepositos();
          break;

          case 3:
          printf("O total de clientes na Agencia 1 é %d.\n", qtd_clientes);                
          break;

          case 4:            
          return (0);

          case 5:
          break;                
        }

        menufuncionario();
        scanf("%d", &opcaofuncionario);
      }
      break;

      case 3:
      cadastrocliente();
      break;

      case 4:            
      depositarterceiro();                     
      break;

      case 5:
      break;
    }

    inicialmenu();
    scanf("%d", &opcao);
  }
}
