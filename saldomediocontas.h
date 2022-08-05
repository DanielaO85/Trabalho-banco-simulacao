float saldomedioclientes;
float somatorioclientes;
int cont;
int qtd_clientes;

void saldomediocontas()

{
   
  if(qtd_clientes>0)
  {
    for (cont=0; cont<qtd_clientes;cont++)
    {
      somatorioclientes = somatorioclientes + clientes[cont].saldo;
    }
    
    saldomedioclientes = somatorioclientes / qtd_clientes;
  }
    
  printf("\n************************************************************************\n");
  printf("O Saldo Medio dos Clientes dessa Agencia é R$ %.2f\n", saldomedioclientes);
  printf("\n************************************************************************\n");

}