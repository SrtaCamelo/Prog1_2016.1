

Lista 02
Aluna Rassa Camelo. BCC 2016.1



	 /* Qst 1 */

   int a,b;
   printf("  Digite dois valores\n");
   scanf("%d %d",&a,&b);

   if(a%b==0)
   {
       printf(" %d � divis�vel por %d",a,b);
   }

   else
   {
       printf("  %d n�o � divis�vel por %d",a,b);
   }

	 /* Qst 2 */
    int x;
    printf("  Digite um n�mero: \n");
    scanf("%d",&x);

    if (x>20)
    {
        printf("  O n�mero %d � maior que 20",x);
    }

    else if (x<20)
    {
        printf("  O n�mero %d � menor que 20",x);
    }

    else
    {
        printf("  %d � = 20",x);
    }


	  /* Qst 3 */
    int x,y;
    printf(" Digite dois n�meros: \n");
    scanf("%d %d",&x,&y);

    if (x+y > 10)
    {
        printf(" %d � maior que  10\n",x+y);
    }

	   /* Qst 4 */

    int x,y;
    printf("Digite dois n�meros: \n");
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

    printf("\n Bem-vindo funcion�rio!\n Digite seu sal�rio Bruto \n");
    scanf("%f",&salb);

    printf("\n Digite o valor desejado para a presta��o: \n");
    scanf("%f",&pres);

    per = salb * 0.3;


    if(pres <= per)
    {
        printf("Empr�stimo Concedido!");
    }

    else
    {
        printf("Empr�stimo negado");
    }

	    /* Qst 6 */

    float x;
    printf("  Digite um n�mero \n");
    scanf("%f",&x);

    if(x >= 20 && x <= 90)
    {
        printf("  %.2f est� entre 20 e 90",x);
    }
    else
    {
        printf("  %.2f n�o est� entre 20 e 90",x);
    }


            /* Qst 7 */

    char nome[20];
    int age;
    char gender;

    printf("\n  Ol�! Seja bem-vindo(a).\n Digite seu nome por favor: \n");
    gets(nome);

    printf(" Digite seu g�nero, por favor ('f' para feminino e 'm' para masculino): \n");
    scanf("%c",&gender);

    printf(" Digite sua idade, por favor: \n");
    scanf("%d",&age);


    if ( age < 25 && gender == 'f')
    {
        printf(" %s \n ACEITA",nome);
    }
    else
    {
        printf(" %s \n N�O ACEITA",nome);
    }

	 /* Qst 8 */

    float x,y;
    printf("Digite dois n�meros diferentes: \n");
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
        printf("Eu pedi dois n�meros diferentes, seu man�");
    }


    	/* Qst 9 */

    int x,y,z;
    printf("Digite tr�s n�meros diferentes: \n");
    scanf("%d %d %d",&x,&y,&z);

    if( x >y && x > z && (y > z || z > y) )
    {
        printf(" %d � o maior",x);
    }
    else if ( y > x && y > z && (x > z || z > x) )
    {
        printf(" %d � o maior",y);
    }
    else if (z > x && z > y && (x > y || y > z) )
    {
        printf(" %d � o maior",z);
    }
    else
    {
        printf(" :/ Tr�s n�meros diferentes cara!!!\n");
    }


	    /* Qst 10 */

    float x;
    printf("Bem -vindo H�spede!! \n Quantos dias pretende passar no hotel?  \n");
    scanf("%f",&x);

    if (x < 15)
    {
        printf(" A taxa a pagar � %.2f \n O pre�o total a pagar � %.2f", (x * 15.3), (x * 15.30)+ (x * 50) );
    }
    else if ( x > 15)
    {
        printf(" A taxa a pagar � %.2f \n O pre�o total a pagar � %.2f", x* 8.5 , (x * 8.5)+ (x * 50) );

    }
    else
    {
        printf(" A taxa a pagar � %.2f \n O pre�o total a pagar � %.2f", x * 10, (x * 10)+ (x *50) );
    }


	  /* Qst 11 */

   char name[20];
   int age;
   printf("Bem-vindo a Camelo Pr�Sa�de!! \n Digite seu nome por favor: \n");
   gets(name);
   printf("Bem-vindo %s, digite sua idade por favor: \n",name);
   scanf("%d",&age);

   if ( age <= 0)
   {
       printf(" Idade inv�lida. \n N�s tamb�m n�o oferecemos servi�os para crian�as com menos de um ano. \n");
   }

   else if (age <= 10 && age > 0)
   {
       printf("Cliente %s, o valor a ser pago pelo plano � 30,0 R$",name);
   }

   else if (age > 10 && age <= 29)
   {
       printf("Cliente %s, o valor a ser pago pelo plano � 60,0 R$",name);
   }

   else if (age > 29 && age <= 45)
   {
       printf("Cliente %s, o valor a ser pago pelo plano � 120,0 R$",name);
   }

   else if (age > 45 && age <= 59)
   {
       printf("Cliente %s, o valor a ser pago pelo plano � 150,0 R$",name);
   }
   else if (age > 59 && age <= 65)
   {
       printf("Cliente %s, o valor a ser pago pelo plano � 250,0 R$",name);
   }
   else if (age > 65)
   {
       printf("Cliente %s, o valor a ser pago pelo plano � 400,0 R$",name);
   }


	  /* Qst 12 */


   int m;
   printf(" Digite o n�mero do m�s\n");
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
           printf("Mar�o");

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
           printf("N�o existe m�s com esse n�mero");
       }
   }

