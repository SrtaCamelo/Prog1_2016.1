

 Lista 03
 Aluna Rassa Camelo. BCC 2016.1



	/* 1ª qst */


    int n,i,j;
    printf("Digite um número inteiro > 1: \n");
    scanf("%d",&n);

    if (n > 1)
    {


        for(i=0; i < n; i++)
        {
            for (j=0; j < n; j++)
            {
                printf("%d-%d      ",i,j);
            }
            printf("\n");
        }

    }

    else
    {
        printf("Número inválido. \n");
    }


	 /* 2ª qst */

    int n,i,j;
    printf("Digite um número inteiro > 1: \n");
    scanf("%d",&n);

    if (n > 1)
    {


        for(i=0; i < n; i++)
        {
            for (j=0; j < n; j++)
            {
                if (i==j)
                {
                   printf("%d-%d    ",i,j);
                }
                else
                {
                    printf("      ");
                }

            }
            printf("\n");
        }

    }

    else
    {
        printf("Número inválido. \n");
    }


	/* 3ª qst */



    int n,i,j;
    printf("Digite um número inteiro > 1: \n");
    scanf("%d",&n);

    if (n > 1)
    {


        for(i=0; i < n; i++)
        {
            for (j=0; j < n; j++)
            {
                if (i>j)
                {
                   printf("%d-%d    ",i,j);
                }
                else
                {
                    printf("      ");
                }

            }
            printf("\n");
        }

    }

    else
    {
        printf("Número inválido. \n");
    }



   Dúvida    /* 4ª qst */

    char nome[20];
    int age,i;
    char sexo;


        for(i=1; i<21; i++)
        {
            printf("Digite seu nome usuário %d\n",i);
            getchar();
            gets(nome);


            printf("Digite seu gênero(f para feminino e m para masculino): \n");
            scanf("%c",&sexo);

            printf("Digite sua idade: \n");
            scanf("%d",&age);


            if (sexo == 'm')
            {
               if (age > 21)
               {
                   puts(nome);
               }
            }
        }



	   /* 5ª qst */

    int i =0;
    int lim,w;


    printf("Digite um limite: \n");
    scanf("%d",&lim);

    printf("Digite um intervalo: \n");
    scanf("%d",&w);


    while (i <= lim)
    {
        printf("%d\n",i);
        i = i + w;
    }


	    /* 6ª qst */

    int i, mul;
    int lim_i,lim_s,n;


    printf("Digite um limite inferior: \n");
    scanf("%d",&lim_i);

    printf("Digite um limite superior: \n");
    scanf("%d",&lim_s);

    printf("Digite um número: \n");
    scanf("%d",&n);
    printf("\n \n");
    printf("Resultado: \n");

    for(i= 0; i < lim_s; i++)
    {
       mul = n * i;
       if (mul > lim_i && mul < lim_s)
       {
           printf("%d\n",mul);
       }
    }


	      /* Qst 7 */


    int n,n1,i;
    printf("Digite a quantidade de números:   ");
    scanf("%d",&n);

    int nu[n];

    for(i=0; i < n; i++)
    {
        printf("Digite o %dª número:   \n",i+1);
        scanf("%d",&n1);

        n1 = n1 * 3;
        nu[i] = n1;

    }

        printf("\n O triplo desses números é: \n \n");

       for(i=0; i < n; i++)
    {
        printf("%d\n",nu[i]);

    }



		/* Qst 8 */

    int n,n1,menor,maior,i;
    printf("Digite a quantidade de números:   ");
    scanf("%d",&n);


    printf("Digite o 1ª número:   \n");
    scanf("%d",&n1);
    maior = n1;
    menor = n1;

    for(i=0; i < n-1; i++)
    {
        printf("Digite o %dª número:   \n",i+2);
        scanf("%d",&n1);


            if (n1 < menor)
            {
                menor = n1;
            }

            if (n1 > maior)
            {
                maior = n1;
            }
    }

    printf("O maior é: %d  e o menor é: %d .",maior,menor);



		/* Qst 9 */


	 int pos;
          int quan;

          printf("Qual a quantidade de numeros que deseja ser gerada? \n");
          scanf("%d",&quan);
          int v[quan];


            for (pos = 0; pos < quan; pos ++)
            {
                v[pos] = 0;
            }



    printf("Digite um número: ");
    scanf("%d",&v[0]);
    printf("Digite outro número: ");
    scanf("%d",&v[1]);

    for (pos = 2; pos < quan; pos ++)
    {
        if ( (pos+1) % 2  == 0)
        {
            v[pos] =  v[pos-1]- v[pos-2];
        }

        else
        {
            v[pos] =  v[pos-1] + v[pos-2];
        }
    }

    for (pos = 0; pos < quan; pos ++)
    {
        printf("%d , ",v[pos]);
    }




	       /* Qst 10 */



    int age, i=1, nota=0;
    int pessoas=0;
    float exc=0,bom=0;
    int reg=0;
    float somage=0;

    do
    {

        printf("Bem-Vindo, espectador nº %d.\n",i);
        printf("Digite sua idade: \n");
        scanf("%d",&age);
        fflush(stdin);
        printf("Escolha a nota que deseja dar ao filme:\n\n 3 -> Excelente\n 2 -> Bom \n 1 -> Regular\n");
        scanf("%d",&nota);
        fflush(stdin);

        if (nota == 3)
        {
            exc++;
            somage = age + somage;
            i++;
            pessoas++;

        }

        else if (nota == 1)
        {
            reg++;
            i++;
            pessoas++;
        }

        else if (nota == 2)
        {
            bom ++;
            i++;
            pessoas++;
        }
        else
        {
            printf("Nota inválida.");
        }


     }
       while (pessoas < 20);

    if (exc == 0)
    {
        printf("A média de idade dos expectadores que votaram 'Excelente' é: 0 n");
    }
    else
    {
        printf("A média de idade dos expectadores que votaram 'Excelente' é: %.2f \n",(somage/exc));
    }

    printf("A quantidade de expectadores que votaram 'Regular' foi: %d .\n",reg);
    printf("A percentagem de expectadores que responderam 'Bom' entre todos os expectadores analisados foi: %.2f %%",((bom/pessoas)*100) );




	/* Qst 11 */

     int x;

    do
    {
        printf("Type a number:\n");
        scanf("%d",&x);
        if (x == 0) return 0;
        printf("%d\n",x*3);
    }
    while (x != 0);



	/* Qst 12 */


    int x,n=0;

    do
    {
        printf("Type a number:\n");
        scanf("%d",&x);
        if (x > 0)
        {n++;}
        else continue;

    }
    while (x > 0);

    printf("There are %d positive numbers. \n",n);


	/* Qst 13 */


    int x,n=0;
    float soma = 0;

    do
    {
        printf("Type a number:\n");
        scanf("%d",&x);
        if (x > 0)
        {soma = soma + x; n++;}
        else continue;

    }
    while (x > 0);

    printf("The media of these %d positive numbers is %.2f . \n",n,soma/n);


	 /* Qst 14 */



    int x;

    start:

    printf("Type a number between 1-3. \n");
    scanf("%d",&x);

    switch(x)
    {
        case 1:
        {
           printf("Olá. \n");
        } break;

        case 2:
        {
           printf("Bem-Vindo. \n");
        }break;

        case 3:
        {
           return 0;
        }

        default:
        {
           goto start;
        }
    }



	/* Qst 15 */


   int i,j,z;

   printf("\nA:\n");
   for (i=1; i<11; i++)
    {
        for (j=0; j<i; j++)
        {
           printf("*");
        }
        printf("\n");
    }

    printf("\nB: \n");
    for (i=0; i<11; i++)
    {
        for (j=10; j>i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nC: \n");
    for (i=1;i<11; i++)
    {
        for (j=1; j<i; j++)
        {
            printf(" ");

        }
        for (z=11; z>i; z--)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nD: \n");
    for (i=1;i<11; i++)
    {
        for (z=10; z>i; z--)
        {
            printf(" ");

        }
        for (j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }



	/* Qst 16 */


    float s,hx,h;
    int x;
    start :
    printf("Bem-vindo usuário da Folha de Pagamento!\n  Digite seu número código: \n");
    scanf("%d",&x);

    switch (x)
    {
        case 1:
        {
            printf("Bem-vindo, genrente. \n");
            printf("Digite o seu salário semanal: \n");
            scanf("%f",&s);
            printf("Seu salário semanal é %.2f R$.",s);

        }break;

        case 2:
        {
            printf("Bem-vinfo, horista. \n");
            printf("Digite o valor de seu salário/hora: \n");
            scanf("%f",&s);
            printf("Digite a quantidade de horas trabalhadas: \n");
            scanf("%f",&h);

            if (h <= 40)
            {
                printf("Seu salário semanal é: %.2f R$.",s*h);
            }

            else
            {
                hx = h - 40;
                printf("Seu salário semanal é: %.2f R$.",(hx * (s + s/2) + 40 * s) );

            }

        }break;

        case 3:
        {
            printf("Bem-vinfo, trabalhador de comissão. \n");
            printf("Digite o valor de suas vendas desta semana: \n");
            scanf("%f",&s);
            printf("Seu salário semanal é: %.2f R$", 610 + s * 0.057);

        }break;

        case 4:
        {
            printf("Bem-vinfo, tarefeiro. \n");
            printf("Digite o valor de cada peça produzida: \n");
            scanf("%f",&s);
            printf("Digite quantos itens foram produzidos: \n");
            scanf("%f",&h);
            printf("Seu salário semanal é %.2f R$.", s* h);

        }break;

        default:
        {
            printf("Código inválido.\n");
            goto start;
        }
    }

