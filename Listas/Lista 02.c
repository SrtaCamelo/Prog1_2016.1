

Lista 02
Aluna Rassa Camelo. BCC 2016.1



	 /* Qst 1 */

   int a,b;
   printf("  Digite dois valores\n");
   scanf("%d %d",&a,&b);

   if(a%b==0)
   {
       printf(" %d é divisível por %d",a,b);
   }

   else
   {
       printf("  %d não é divisível por %d",a,b);
   }

	 /* Qst 2 */
    int x;
    printf("  Digite um número: \n");
    scanf("%d",&x);

    if (x>20)
    {
        printf("  O número %d é maior que 20",x);
    }

    else if (x<20)
    {
        printf("  O número %d é menor que 20",x);
    }

    else
    {
        printf("  %d é = 20",x);
    }


	  /* Qst 3 */
    int x,y;
    printf(" Digite dois números: \n");
    scanf("%d %d",&x,&y);

    if (x+y > 10)
    {
        printf(" %d é maior que  10\n",x+y);
    }

	   /* Qst 4 */

    int x,y;
    printf("Digite dois números: \n");
    scanf("%d %d",&x,&y);
    int soma;
    soma = x + y;


    if(soma > 20)
    {
        printf("%d",soma+8);
    }
    else
    {
        printf(" %d ",soma-5);
    }


	    /* Qst 5 */

    float salb,pres;
    float per;

    printf("\n Bem-vindo funcionário!\n Digite seu salário Bruto \n");
    scanf("%f",&salb);

    printf("\n Digite o valor desejado para a prestação: \n");
    scanf("%f",&pres);

    per = salb * 0.3;


    if(pres <= per)
    {
        printf("Empréstimo Concedido!");
    }

    else
    {
        printf("Empréstimo negado");
    }

	    /* Qst 6 */

    float x;
    printf("  Digite um número \n");
    scanf("%f",&x);

    if(x >= 20 && x <= 90)
    {
        printf("  %.2f está entre 20 e 90",x);
    }
    else
    {
        printf("  %.2f não está entre 20 e 90",x);
    }


            /* Qst 7 */

    char nome[20];
    int age;
    char gender;

    printf("\n  Olá! Seja bem-vindo(a).\n Digite seu nome por favor: \n");
    gets(nome);

    printf(" Digite seu gênero, por favor ('f' para feminino e 'm' para masculino): \n");
    scanf("%c",&gender);

    printf(" Digite sua idade, por favor: \n");
    scanf("%d",&age);


    if ( age < 25 && gender == 'f')
    {
        printf(" %s \n ACEITA",nome);
    }
    else
    {
        printf(" %s \n NÃO ACEITA",nome);
    }

	 /* Qst 8 */

    float x,y;
    printf("Digite dois números diferentes: \n");
    scanf("%f %f",&x,&y);

    if (x > y)
    {
        printf("%.1f e %.1f",y,x);
    }
    else if (y > x)
    {
        printf("%.1f e %.1f",x,y);
    }
    else
    {
        printf("Eu pedi dois números diferentes, seu mané");
    }


    	/* Qst 9 */

    int x,y,z;
    printf("Digite três números diferentes: \n");
    scanf("%d %d %d",&x,&y,&z);

    if( x >y && x > z && (y > z || z > y) )
    {
        printf(" %d é o maior",x);
    }
    else if ( y > x && y > z && (x > z || z > x) )
    {
        printf(" %d é o maior",y);
    }
    else if (z > x && z > y && (x > y || y > z) )
    {
        printf(" %d é o maior",z);
    }
    else
    {
        printf(" :/ Três números diferentes cara!!!\n");
    }


	    /* Qst 10 */

    float x;
    printf("Bem -vindo Hóspede!! \n Quantos dias pretende passar no hotel?  \n");
    scanf("%f",&x);

    if (x < 15)
    {
        printf(" A taxa a pagar é %.2f \n O preço total a pagar é %.2f", (x * 15.3), (x * 15.30)+ (x * 50) );
    }
    else if ( x > 15)
    {
        printf(" A taxa a pagar é %.2f \n O preço total a pagar é %.2f", x* 8.5 , (x * 8.5)+ (x * 50) );

    }
    else
    {
        printf(" A taxa a pagar é %.2f \n O preço total a pagar é %.2f", x * 10, (x * 10)+ (x *50) );
    }


	  /* Qst 11 */

   char name[20];
   int age;
   printf("Bem-vindo a Camelo PróSaúde!! \n Digite seu nome por favor: \n");
   gets(name);
   printf("Bem-vindo %s, digite sua idade por favor: \n",name);
   scanf("%d",&age);

   if ( age <= 0)
   {
       printf(" Idade inválida. \n Nós também não oferecemos serviços para crianças com menos de um ano. \n");
   }

   else if (age <= 10 && age > 0)
   {
       printf("Cliente %s, o valor a ser pago pelo plano é 30,0 R$",name);
   }

   else if (age > 10 && age <= 29)
   {
       printf("Cliente %s, o valor a ser pago pelo plano é 60,0 R$",name);
   }

   else if (age > 29 && age <= 45)
   {
       printf("Cliente %s, o valor a ser pago pelo plano é 120,0 R$",name);
   }

   else if (age > 45 && age <= 59)
   {
       printf("Cliente %s, o valor a ser pago pelo plano é 150,0 R$",name);
   }
   else if (age > 59 && age <= 65)
   {
       printf("Cliente %s, o valor a ser pago pelo plano é 250,0 R$",name);
   }
   else if (age > 65)
   {
       printf("Cliente %s, o valor a ser pago pelo plano é 400,0 R$",name);
   }


	  /* Qst 12 */


   int m;
   printf(" Digite o número do mês\n");
   scanf("%d",&m);

   switch (m)
   {
       case 1 :
       {
          printf("Janeiro");

       } break;

       case 2 :
       {
           printf("Fevereiro");

       }break;

       case 3 :
       {
           printf("Março");

       }break;

       case 4 :
        {
            printf("Abril %c",1);

        }break;


        case 5 :
        {
           printf("Maio");

        }break;

        case 6 :
        {
            printf("Junho");

        }break;

         case 7 :
        {
            printf("Julho");

        }break;

         case 8 :
        {
            printf("Agosto");

        }break;

         case 9 :
        {
            printf("Setembro");

        }break;

         case 10 :
        {
            printf("Outubro");

        }break;

         case 11 :
        {
            printf("Novembro");

        }break;

         case 12 :
        {
            printf("Dezembro");

        }break;

       default :10
       {
           printf("Não existe mês com esse número");
       }
   }

