void totaldepositos()
{
  int deposito, cont;
  float somatoriodepositos = 0;
  
  if(qtd_clientes>0)
  {
    for (cont=0; cont<qtd_clientes;cont++) 
    {
      somatoriodepositos = somatoriodepositos + clientes[cont].deposito;
    }
  }

  printf("\n************************************************************************\n");
  printf("A Soma dos Depositos dos Clientes dessa Agencia é R$ %.2f\n", somatoriodepositos);
  printf("\n************************************************************************\n");

}