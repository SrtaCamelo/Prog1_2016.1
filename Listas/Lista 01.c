
    Lista 01
    Aluna Raissa Camelo. BCC 2016.1



    /* Primeira qst */
    printf("\n  Media = 3\n  Nota = 6\n  Total = 22\n  Z = -1/5\n  K = 0\n  X = 6\n  I = 73\n  J = -1\n  A = -4\n");

    /*Segunda Qst */
    printf("\n  a) F\n  b) V\n  c) F\n  d) V\n  e) V\n  f) V\n  g) F\n");

    /*Terceira Qst */
    printf("\n   � preciso fazer todos os algoritmos para aprender\n");

    /*Quarta Qst */

    printf("\n  28*43 = %d \n",28*43);

    /*Quinta Qst*/
    int x,y;
    printf("\n Digite dois n�meros: \n");
    scanf("%d %d",&x,&y);
    printf("%d e %d",x,y);

    /* 6� Qst*/
    printf("\n  Digite um n�mero:\n");
    scanf("%d",&x);
    printf(" Antecessor: %d e Sucessor: %d",x-1,x+1);

    /* 7� Qst*/

    char nome[10];
    char ende[20];
    int tel[10];

    printf("\nDigite seu Nome:\n");
    getchar();
    gets(nome);
    printf("\nDigite seu Endere�o: \n");
    gets(ende);
    printf("\nDigite seu Telefone: \n");
    gets(tel);
    printf("\n Seu Nome �: %s\n Seu endere�o �: %s \n seu Telefone � %s\n",nome,ende,tel);

     /* 8� Qst */
    int x,y;
    printf("  Digite dois n�meros: \n");
    scanf("%d %d",&x,&y);
    printf("\n  Soma: \n   %d",x+y);

     /* 9� Qst */
    int x,y,z,w;
    printf("  Digite quatro n�meros: \n");
    scanf("%d %d %d %d",&x,&y,&z,&w);
    printf("\n  Soma: \n   %d",x+y+z+w);

    /* 10� Qst */
    int x,y,z;
    printf("  Digite as tr�s notas: \n");
    scanf("%d %d %d",&x,&y,&z);
    printf("\n  M�dia: \n   %d",(x+y+z)/3);

      /* 11� Qst */
    int x,y,z;
    int w,e,r;

    printf("  Digite as tr�s notas: \n");
    scanf("%d %d %d",&x,&y,&z);
    printf(" Digite os pesos das respectivas notas\n");
    scanf("%d %d %d",&w,&e,&r);
    printf("\n  M�dia: \n   %d",(x*w+y*e+z*r)/(w+e+r));

      /* 12� Qst */
    int x;

    printf("\n  Bem-Vindo funcion�rio da Monitoria!!\n Digite seu sal�rio %c: \n",1);
    scanf("%d",&x);
    printf("\n Seu novo sal�rio sofreu um almento de 25%: %d ",(x*0,25)+x);

     /* 13� Qst */

    float x,y;

    printf("\n  Bem-Vindo funcion�rio da Monitoria!!\n Digite seu sal�rio e em quantos porcentos aumentou: %c: \n",1);
    scanf("%f %f",&x,&y);
    printf("\n Seu novo sal�rio sofreu um almento de %.2f, novo sal�rio: %.2f ",x*(y/100),(x*(y/100))+x);

        /* 14� Qst */

    float x;


    printf("\n  Bem-Vindo funcion�rio da Monitoria!!\n Digite seu sal�rio-base : %c: \n",1);
    scanf("%f",&x);
    printf("\n Seu sal�rio + bonus + impostos (culpa da Dilma): %.2f",(x+ (x*(0.05))-(x*(0.07)))   );


    /* 17� Qst */

  int x,y;
  printf("Digite o tamanho da base e da altura do tri�ngulo em quest�o (cm): \n");
  scanf("%d %d",&x,&y);
  printf("A �rea do tri�ngulo �: %d cm�",(x*y)/2);

   /* 18� Qst */

  float x,pi;
  pi= 3.1415;

  printf("Digite o tamanho do Raio do C�rculo em quest�o (cm): \n");
  scanf("%f",&x);
  printf("A �rea do c�rculo �: %.3f cm�", pi*(pow(x,2)));

   /* 19� Qst */

  int x;

  printf("  Digite o ano de seu nascimento %c \n",1);
  scanf("%d",&x);
  printf("Voc� tem: %d anos e ter�: %d anos em 2020",2016-x,2020-x);

    /* 20� Qst */

   float x,y,z;

   printf("Digite o pre�o de f�brica do ve�culo\n");
   scanf("%f",&x);

   printf("Digite o percentual de lucro do distribuidor (em decimais).\n");
   scanf("%f",&y);

   printf("Digite o percentual de impostos (em decimais). \n");
   scanf("%f",&z);

   printf("O lucro do distribuidor �: %.2f \n",x*y);
   printf("O valor dos impostos pagos �: %.2f \n",x*z);
   printf("O valor a ser pago pelo consumidor �: %.2f \n",(x+(x*y)+(x*z)) );


   /* 21� Qst */

  float horas,salm,salb,impos;

  printf("Digite o n�mero de horas trabalhadas: \n");
  scanf("%f",&horas);

  printf("Digite o sal�rio m�nimo: \n");
  scanf("%f",&salm);
  salb = ((salm/2)*horas);
  impos = (salb*0.03);

  printf("Seu sal�rio �: %.2f\n",salb-impos);


   /* 22� Qst */


  float x,y;

  printf("Bem-Vindo a escada da fortuna!!!\n Digite a altura de cada degral: \n");
  scanf("%f",&x);
  printf("Agora digite a altura que deseja alcan�ar!!\n");
  scanf("%f",&y);

  printf("Voc� deve subir %.2f degrais.\n",y/x);


   /* 23� Qst */

  printf(" 2 e 4 %c\n",1);

  /* 24� Qst */

  printf(" 6  %c\n",1);

  /* 25� Qst */

  printf(" 1  %c\n",1);

