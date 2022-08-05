Funcionario funcionarioValidado;

int validasenhafuncionario() 
{

  int conta, cpf, i, tentativas, senhaespecial;
      
  printf("Conta corrente:\n");
  scanf("%d",&conta);

  printf("Seu CPF:\n");
  scanf("%d",&cpf);
           
    for (i=0; i < qtd_funcionarios; i++) 
    {
      if(funcionario[i].nro_conta == conta && funcionario[i].cpf == cpf) 
      {
        tentativas = 0;

          do 
          {
            printf("Senha de funcionario:\n");
            scanf("%d",&senhaespecial);

              if(funcionario[i].senhaespecial == senhaespecial) 
              {
                funcionarioValidado = funcionario[i];                                
                printf("\n************************************************************************\n");
                printf("\nSenha validada\n");
                printf("\n************************************************************************\n");
                return SENHA_OK;
              } 

              else 
              {
                printf("\n************************************************************************\n");
                printf("\n\nSenha nao confere\n\n");
                printf("\n\nTente novamente. Atencao voce tente 3 tentativas\n\n");
                printf("\n************************************************************************\n");
              }
              tentativas++;
          }   
            while(tentativas < 3);

            printf("\n\nSenha nao confere. Favor entrar em contato com a agencia e seu gerente.\n\n");
            return SENHA_BLOQUEADA; 
        }
    }
    
    return DADOS_EQUIVOCADOS;
}