Cliente* clienteValidado;

int validasenhacliente() 
{

  int conta, agencia, senha, i, tentativas;
  
  printf("Conta corrente:\n");
  scanf("%d",&conta);

  printf("Agencia:\n");
  scanf("%d",&agencia);
           
    for (i=0; i < qtd_clientes; i++) 
    {
      if(clientes[i].nro_conta == conta && clientes[i].agencia == agencia) 
      {
        tentativas = 0;

        do 
        {
          printf("Senha:\n");
          scanf("%d",&senha);

            if(clientes[i].senha == senha) 
            {
              clienteValidado = &clientes[i];                                
              printf("\n************************************************************************\n");
              printf("\nSenha validada, %s %s.\n", clientes[i].nome, clientes[i].sobrenome);
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