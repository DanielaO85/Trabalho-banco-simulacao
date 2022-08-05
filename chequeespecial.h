void chequeespecial()

{
  float cheque;
  float somachequesaldo;
  float saldo;
  
  cheque = clienteValidado->chequeespecial;
  saldo = clienteValidado->saldo;
  somachequesaldo = cheque + saldo;

  printf ("\n\nSeu cheque especial disponivel é igual a: R$ %.2f \n", cheque);
  printf ("\nSaldo total para utilizacao na data é R$ %.2f\n\n", somachequesaldo);
  printf("\n************************************************************************\n");
}

