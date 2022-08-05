int sacar()
{

int saque;
int dif200, dif100, dif50, dif20, dif10, dif5,dif2;
int nota200, nota100, nota50, nota20, nota10, nota5, nota2;
float saldo;
int confirma;


  
  printf("\n************************************************************************\n");
  printf("\n\n Informe o valor de saque:\n");
  scanf("%d",&saque);

  if ((saque % 2) == 0 && saque <= 1000) 
  {
    nota200 = saque /200;
    dif200 = saque % 200;
    nota100 = dif200 / 100;
    dif100 = dif200 % 100;
    nota50 = dif100 / 50;
    dif50 = dif100 % 50;
    nota20 = dif50 / 20;
    dif20 = dif50 % 20;
    nota10 = dif20 / 10;
    dif10 = dif20 % 10;
    nota5 = dif10 / 5;
    dif5 = dif10 % 5;
    nota2 = dif5 / 2;
    dif2 = dif5 % 2;

    printf("%d notas de 200\n", nota200);
    printf("%d notas de 100\n", nota100);
    printf("%d notas de 50\n", nota50);
    printf("%d notas de 20\n", nota20);
    printf("%d notas de 10\n", nota10);
    printf("%d notas de 5\n", nota5);
    printf("%d notas de 2\n", nota2);

  }
  
  else
  {
    printf("voce digitou um valor de saque nao permitido. Tente novamente.\n");
    return(0); 
  }
        
    printf("\n\nConfirma valor de saque igual a R$ %d  : \n( 1 - sim -- 2 - nao )\n", saque);
    scanf("%d",&confirma);

    if(confirma == 1) 
    {
      clienteValidado->saldo = clienteValidado->saldo - saque;
      if (clienteValidado->saldo < 0)
      printf("\n\nSeu saldo considerando cheque especial é igual a: R$ %.2f \n\n", (clienteValidado->saldo + clienteValidado->chequeespecial));
      else
      printf("\n\nSeu saldo disponivel é igual a: R$ %.2f \n\n", clienteValidado->saldo);
    }

    printf("\n************************************************************************\n");
    
  return(0);   
}


    


