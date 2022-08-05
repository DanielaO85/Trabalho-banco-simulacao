void pagar()
{
  float pagamento;
  int confirma1;

  printf("\n************************************************************************\n");
  printf("\n\n\tInforme o valor a ser pago:\n");
  scanf("%f",&pagamento);

  printf("\n\n Confirma valor de pagamento igual a R$ R$ %.2f ?: \n( 1 - sim -- 2 - nao )\n ", pagamento);
  scanf("%d",&confirma1);

  if(confirma1 == 1) 
  {
    clienteValidado->saldo = clienteValidado->saldo - pagamento;
    printf("\n\nseu saldo disponivel é igual a: R$ %.2f \n\n", clienteValidado->saldo);

    printf("\n************************************************************************\n");
  }

}
