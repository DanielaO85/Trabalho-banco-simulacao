#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  int cpf;
  int nro_conta;
  int senhaespecial;

} Funcionario;

Funcionario funcionario[5];

int qtd_funcionarios;

int cadastrofuncionario()
{
  int cpf, nro_conta, senhaespecial;

  funcionario[qtd_funcionarios].nro_conta = nro_conta;
  funcionario[qtd_funcionarios].cpf = cpf;
  funcionario[qtd_funcionarios].senhaespecial = senhaespecial;
   
  qtd_funcionarios = qtd_funcionarios + 1;

  return (0);
}
