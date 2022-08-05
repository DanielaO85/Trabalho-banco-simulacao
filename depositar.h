void depositar()
{
  float deposito;
  int confirma;

  printf("\n\n Informe o valor de deposito: ");
  scanf("%f", &deposito);

  printf("\n\n Confirma valor de deposito igual a R$ %.2f ?: \n( 1 - sim -- 2 - nao )\n", deposito);
  scanf("%d", &confirma);

  if(confirma == 1) 
  {
    clienteValidado->deposito = clienteValidado->deposito + deposito;
    clienteValidado->saldo = clienteValidado->saldo + deposito;
        
    printf("\n\nseu saldo disponivel é igual a: R$ %.2f \n\n", clienteValidado->saldo);
  }
  
  printf("\n************************************************************************\n");
}