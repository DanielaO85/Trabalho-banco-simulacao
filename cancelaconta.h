int cancelaconta()
{
  int confirma;
  int valido;

  printf("\n\n Você tem certeza que quer encerrar sua conta corrente?\n( 1 - sim -- 2 - nao )\n");
  scanf("%d",&confirma);

  if(confirma == 1) 
  {
    validasenhacliente();
    if (valido == DADOS_EQUIVOCADOS)
    {
    printf("Dados não conferem.\n");    
    }

    else if (valido == SENHA_BLOQUEADA);
   
    else
    printf("Sua conta corrente foi encerrada. Em caso de saldo remanescente, favor se dirija ao caixa interno.\n");

    return(1);
  }

  else
  return(0);

  printf("\n************************************************************************\n");
}
