float depositoterc;

void depositarterceiro()
{
  int confirma, contacorrente, cpf, i;
    
  printf("Informe a conta corrente do cliente: \n");
  scanf("%d", &contacorrente);

  printf("Informe o CPF do cliente: \n");
  scanf("%d", &cpf);

  for (i=0; i < qtd_clientes; i++) 
  {
    if(clientes[i].nro_conta == contacorrente && clientes[i].cpf == cpf) 
    {
      printf("\n\n Informe o valor de deposito: ");
      scanf("%f", &depositoterc);
          
      printf("\n\n Confirma valor de deposito igual a R$ %.2f ?: \n( 1 - sim -- 2 - nao )\n", depositoterc);
      scanf("%d", &confirma);

      if(confirma == 1) 
      {
        clientes[i].deposito =  clientes[i].deposito + depositoterc;
        clientes[i].saldo = clientes[i].saldo  + depositoterc;
               
        printf("\n\nVocê depositou a quantia de R$ %.2f \n\n", depositoterc);
        break;      
      }

      else
      printf("\n************************************************************************\n");
    
    }
  }

}