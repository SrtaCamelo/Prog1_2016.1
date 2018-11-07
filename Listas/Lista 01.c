
    Lista 01
    Aluna Raissa Camelo. BCC 2016.1



    /* Primeira qst */
    printf("\n  Media = 3\n  Nota = 6\n  Total = 22\n  Z = -1/5\n  K = 0\n  X = 6\n  I = 73\n  J = -1\n  A = -4\n");

    /*Segunda Qst */
    printf("\n  a) F\n  b) V\n  c) F\n  d) V\n  e) V\n  f) V\n  g) F\n");

    /*Terceira Qst */
    printf("\n   É preciso fazer todos os algoritmos para aprender\n");

    /*Quarta Qst */

    printf("\n  28*43 = %d \n",28*43);

    /*Quinta Qst*/
    int x,y;
    printf("\n Digite dois números: \n");
    scanf("%d %d",&x,&y);
    printf("%d e %d",x,y);

    /* 6ª Qst*/
    printf("\n  Digite um número:\n");
    scanf("%d",&x);
    printf(" Antecessor: %d e Sucessor: %d",x-1,x+1);

    /* 7ª Qst*/

    char nome[10];
    char ende[20];
    int tel[10];

    printf("\nDigite seu Nome:\n");
    getchar();
    gets(nome);
    printf("\nDigite seu Endereço: \n");
    gets(ende);
    printf("\nDigite seu Telefone: \n");
    gets(tel);
    printf("\n Seu Nome é: %s\n Seu endereço é: %s \n seu Telefone é %s\n",nome,ende,tel);

     /* 8ª Qst */
    int x,y;
    printf("  Digite dois números: \n");
    scanf("%d %d",&x,&y);
    printf("\n  Soma: \n   %d",x+y);

     /* 9ª Qst */
    int x,y,z,w;
    printf("  Digite quatro números: \n");
    scanf("%d %d %d %d",&x,&y,&z,&w);
    printf("\n  Soma: \n   %d",x+y+z+w);

    /* 10ª Qst */
    int x,y,z;
    printf("  Digite as três notas: \n");
    scanf("%d %d %d",&x,&y,&z);
    printf("\n  Média: \n   %d",(x+y+z)/3);

      /* 11ª Qst */
    int x,y,z;
    int w,e,r;

    printf("  Digite as três notas: \n");
    scanf("%d %d %d",&x,&y,&z);
    printf(" Digite os pesos das respectivas notas\n");
    scanf("%d %d %d",&w,&e,&r);
    printf("\n  Média: \n   %d",(x*w+y*e+z*r)/(w+e+r));

      /* 12ª Qst */
    int x;

    printf("\n  Bem-Vindo funcionário da Monitoria!!\n Digite seu salário %c: \n",1);
    scanf("%d",&x);
    printf("\n Seu novo salário sofreu um almento de 25%: %d ",(x*0,25)+x);

     /* 13ª Qst */

    float x,y;

    printf("\n  Bem-Vindo funcionário da Monitoria!!\n Digite seu salário e em quantos porcentos aumentou: %c: \n",1);
    scanf("%f %f",&x,&y);
    printf("\n Seu novo salário sofreu um almento de %.2f, novo salário: %.2f ",x*(y/100),(x*(y/100))+x);

        /* 14ª Qst */

    float x;


    printf("\n  Bem-Vindo funcionário da Monitoria!!\n Digite seu salário-base : %c: \n",1);
    scanf("%f",&x);
    printf("\n Seu salário + bonus + impostos (culpa da Dilma): %.2f",(x+ (x*(0.05))-(x*(0.07)))   );


    /* 17ª Qst */

  int x,y;
  printf("Digite o tamanho da base e da altura do triângulo em questão (cm): \n");
  scanf("%d %d",&x,&y);
  printf("A àrea do triângulo é: %d cm²",(x*y)/2);

   /* 18ª Qst */

  float x,pi;
  pi= 3.1415;

  printf("Digite o tamanho do Raio do Círculo em questão (cm): \n");
  scanf("%f",&x);
  printf("A àrea do círculo é: %.3f cm²", pi*(pow(x,2)));

   /* 19ª Qst */

  int x;

  printf("  Digite o ano de seu nascimento %c \n",1);
  scanf("%d",&x);
  printf("Você tem: %d anos e terá: %d anos em 2020",2016-x,2020-x);

    /* 20ª Qst */

   float x,y,z;

   printf("Digite o preço de fábrica do veículo\n");
   scanf("%f",&x);

   printf("Digite o percentual de lucro do distribuidor (em decimais).\n");
   scanf("%f",&y);

   printf("Digite o percentual de impostos (em decimais). \n");
   scanf("%f",&z);

   printf("O lucro do distribuidor é: %.2f \n",x*y);
   printf("O valor dos impostos pagos é: %.2f \n",x*z);
   printf("O valor a ser pago pelo consumidor é: %.2f \n",(x+(x*y)+(x*z)) );


   /* 21ª Qst */

  float horas,salm,salb,impos;

  printf("Digite o número de horas trabalhadas: \n");
  scanf("%f",&horas);

  printf("Digite o salário mínimo: \n");
  scanf("%f",&salm);
  salb = ((salm/2)*horas);
  impos = (salb*0.03);

  printf("Seu salário é: %.2f\n",salb-impos);


   /* 22ª Qst */


  float x,y;

  printf("Bem-Vindo a escada da fortuna!!!\n Digite a altura de cada degral: \n");
  scanf("%f",&x);
  printf("Agora digite a altura que deseja alcançar!!\n");
  scanf("%f",&y);

  printf("Você deve subir %.2f degrais.\n",y/x);


   /* 23ª Qst */

  printf(" 2 e 4 %c\n",1);

  /* 24ª Qst */

  printf(" 6  %c\n",1);

  /* 25ª Qst */

  printf(" 1  %c\n",1);

