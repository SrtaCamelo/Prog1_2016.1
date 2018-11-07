

	//Lista 04
	//Aluna Raissa camelo - BCC 2016.1


	  /*Qst 01*/
    #include <time.h>
    srand(time(NULL));

    int x,i,e;
    x = rand()%10;
    e = 2*x;
    int v[x],v1[x],v2[x];

    for(i=0; i<x; i++)
    {
        v[i] = rand()%9;
        v1[i] = rand()%9;
        v2[i] = v[i] * v1[i];
    }

    printf("Vetor 1:\n");

    for(i=0; i<x; i++)
    {
        printf("%d\n",v[i]);

    }

    printf("Vetor 2:\n");

    for(i=0; i<x; i++)
    {
        printf("%d\n",v1[i]);

    }

    printf("Muliplicacao:\n");

    for(i=0; i<x; i++)
    {
        printf("%d\n",v2[i]);

    }

	/*Qst 02*/ Requer #inclide <time.h>


        srand(time(NULL));
        int x,i,maior=0;
        printf("Type the vector size: \n");
        scanf("%d",&x);

    int v[x];

    for(i=0; i<x; i++)
    {
        v[i] = rand()%9;

        if(v[i] > maior)
        {
            maior = v[i];
        }

        printf("%d , ",v[i]);
    }

    printf("O maior elemento do vetor é: %d",maior);


	/*Qst 03*/


   int x,i,pos,cont=0;

    printf("Digite o tamanho dos vetores: \n");
    scanf("%d",&x);

   int vi[x];
   char vc[x];

   printf("Digite o numero e o caracter (respectivamente) dos dois vetores: \n");

    for(i=0; i<x; i++)
    {
        scanf("%d %c",&vi[i],&vc[i]);
    }

    printf("Escolha uma posisao do vetor numerico: \n");
    scanf("%d",&pos);

    while(cont < vi[pos])
    {

        for(i=0; i<x; i++)
        {
            printf("%c , ",vc[i]);
        }
        cont++;
    }



	Criar uma função que receba um vetor de inteiros e seu tamanho e retorne 1 (um) se o vetor
        estiver ordenado de forma decrescente ou 0 (zero) se não estiver

	/*Qst 04*/PROBLEM

    int x,i;

    printf("Digite o tamanho do vetor: \n");
    scanf("%d",&x);
    int v[x];
    int ordenado=1;


    printf("Digite os elementos do vetor:\n");

    for(i=0; i<x; i++)
    {
        scanf("%d",&v[i]);
    }
     for(i=0; i<x; i++)
    {
        printf(" %d\n",v[i]);
    }
    for(i=0; i<x; i++)
    {
        if(v[i] < v[i+1])
        {
            ordenado =0;

            break;
        }


    }

    printf("%d",ordenado);


 /*Qst 05*/


    int m[10][10];
    int i,j,n;

    printf("Choose the elements of the matrix: \n");

     for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("\n element: %d - %d: ",i,j);
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }

    printf("This is the matrix: \n\n");
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    printf("\nThis is the secondary diagonal: \n");
    i=0;
    j=9;

   while (i<10 && j> -1)
   {
       printf("%d ",m[i][j]);
       i++;
       j--;
   }
   printf("\n");



	/*Qst 06*/


    int m[10][10];
    int i,j;

    printf("Choose the elements of the matrix: \n");

     for(i=0; i<10; i++)
     {
        for(j=0; j<10; j++)
        {
            printf("\n element: %d - %d: ",i,j);
            scanf("%d",&m[i][j]);
        }
        printf("\n");
     }

    printf("This is the matrix: \n\n");
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    printf("\nThis is the matrix without the secondary diagonal: \n");

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(j+i == 9)
            {
                printf(" ");
            }
            else
            {
                printf("%d ",m[i][j]);
            }

        }
        printf("\n");
    }


	/*Qst 07*/


	int m[5][5];
	int i,j;

	printf("\nType your Matrix: \n");
	for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("\n Element %d-%d: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    printf("\nThis is your Matrix: \n");
	for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d ",m[i][j]);

        }
        printf("\n");
    }

    printf("\nThis is your Qst Matrix: \n");

	for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if( (i +j) %2 == 0)
            {
                printf("%d ",m[i][j]);
            }

        }
        printf("\n");
    }


	/* Qst 08 */



        int a[4][4];
	int b[4][4];
	int i,j;

	printf("\nType your  A Matrix: \n");
	for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("\n Element %d-%d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }


	printf("\nType your B Matrix: \n");
	for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("\n Element %d-%d: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nThis is the sum Matrix: \n");
	for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d",(a[i][j] + b[i][j]) );

        }
        printf("\n");
    }


	/* Qst 09 */



	int m[2][3];
	int m2[3][2];
	int i, j;

	for(i=0; i< 2; i++)
    {
        for(j=0; j < 3; j++)
        {
            printf("Element %d %d: \n",i,j);
            scanf("%d",&m[i][j]);
        }

    }

    for(i=0; i< 2; i++)
    {
        for(j=0; j < 3; j++)
        {
            m2[j][i] = m[i][j];

        }

    }

      for(i=0; i< 3; i++)
      {
        for(j=0; j < 2; j++)
        {

            printf("%d",m2[i][j]);

        }
      	printf("\n");
      }


	/* Qst 10 */


    int e[4][3];
    int i,j,a1=0,a2=0,a3=0,maior=0,qa;
    int cus[3][3];

    for(i=0; i <4; i++)
    {
        for(j=0; j < 3; j++)
        {
            if (i == 3)
            {
                printf("Digite o custo do produto %d: \n",j+1);
                scanf("%d",&e[i][j]);
            }
            else
            {
                printf("Digite a quantidade de produto %d, contida no armazem %d: \n",j+1,i+1);
                scanf("%d",&e[i][j]);
                if (j == 2)
                {
                    if(e[i][j] > maior)
                    {
                        maior = e[i][j];
                        qa = i;

                    }
                }

                if (i == 0)
                {
                    a1 += e[i][j];
                }

                else if (i == 1)
                {
                    a2 += e[i][j];
                }

                else
                {
                    a3 += e[i][j];
                }
            }
        }
    }

    for(i=0; i <4; i++)
    {
        for(j=0; j < 3; j++)
        {
            printf(" %d ",e[i][j]);
        }
        printf("\n\n");
    }

    printf("Os armazens 1 2 e 3 possuem respectivamente: %d, %d, %d, produtos estocados.\n",a1,a2,a3);
    printf("O armazem que possui mais produto 2 eh: %d",qa);

      for(i=0; i <4; i++)
     {
        for(j=0; j < 3; j++)
        {
           if (i < 3)
           {
               cus[i][j] = (e[i][j] * e[3][j];);
           }
        }

     }
       for(i=0; i <3; i++)
     {
        for(j=0; j < 3; j++)
        {
            printf("O custo do produto %d no armazem %d eh: %d\n",j+1,i+1,cus[i][j]);
            if (i == 0)
            {
                a1 += cus[i][j];
            }

            else if (i == 1)
            {
                a2 += cus[i][j];
            }
             if (i == 2)
            {
                a3 += cus[i][j];
            }
        }


     }

     printf("O custo no do estoque no armazem 1 foi %d.\nO custo no do estoque no armazem 2 foi %d \nO custo no do estoque no armazem 3 foi %d",a1,a2,a3);






     /* Qst 11*/

    int A[10];
    float B[10]; /* Não pode ser inteiro, apesar de na qst pedir */
    int i;

    printf("Digite seu vetor A: \n");
    for(i=0; i<10; i++)
    {
        printf("\nDigite o elemento da posicao %d:",i);
        scanf("%d",&A[i]);
    }

      for(i=0; i<10; i++)
      {
        if(i%2 == 0)
        {
            B[i] = (A[i]/2);
        }
        else
        {
            B[i] = (A[i] * 3);
        }
      }

        for(i=0; i<10; i++)
        {
            printf("\n A: %d,  B: %.2f ",A[i],B[i]);

        }



     /* Qst 12*/


     int A[5];
     int B[5];
     int C[5];
     int i;

    printf("Digite seus vetore A e B: \n");
    for(i=0; i<5; i++)
    {
        printf("\nDigite o elemento da posicao %d:",i);
        scanf("%d %d",&A[i],&B[i]);
    }

      for(i=0; i<5; i++)
      {
         C[i] = A[i] + B[i];
         printf("\n A: %d, B: %d, C: %d",A[i],B[i],C[i]);

      }
      printf("\n\n\n");


  	/* Qst 13*/

    printf("Feito mentalmente/ folha.\n");
    printf("B\nO\nA\n \nS\nO\nR\nT\nE\n!\n");



  	/* Qst 14*/



    float a_n1[20],a_n2[20], a_media[20];
    int i;

    printf("Digite as notas da primeira e segunda prova respetivamente: \n");
    for(i=0; i<20; i++)
    {
        printf("Aluno %d: ",i+1);
        scanf("%f %f",&a_n1[i],&a_n2[i]);
        a_media[i] = ((a_n1[i] * 2) + (a_n2[i] * 3)) / 5;
    }

    for(i=0; i<20; i++)
    {
        printf("Aluno %d teve notas %.2f e %.2f e media %.2f \n",i+1,a_n1[i],a_n2[i],a_media[i]);

    }

	/* Qst 15*/


      float a_n1[20],a_n2[20], a_media[20];
      int i, qa_mb=0;
      float media=0;

    printf("Digite as notas da primeira e segunda prova respetivamente: \n");
    for(i=0; i<4; i++)
    {
        printf("Aluno %d: ",i+1);
        scanf("%f %f",&a_n1[i],&a_n2[i]);
        a_media[i] = ((a_n1[i] * 2) + (a_n2[i] * 3)) / 5;
        media = media + a_media[i];
    }
    media = media/i;

    for(i=0; i<4; i++)
    {
        printf("Aluno %d teve notas %.2f e %.2f e media %.2f \n",i+1,a_n1[i],a_n2[i],a_media[i]);

        if(a_media[i] < media)
        {
            qa_mb++;
        }

    }


	/* Qst 16*/


     srand(time (NULL));
     float apurado[12],total=0;
     int i,x=0,maior=0,menor=0,mes_ior=0,mes_eno=0;

     for(i=0; i < 12; i++)
     {
         apurado[i] = rand()%200;
         while (x < 1)
         {
             menor = apurado[0];
             x++;
         }

         total = total + apurado[i];

         if(apurado[i] > maior)
         {
             maior = apurado[i];
             mes_ior = i+1;
         }

         if(apurado[i] < menor)
         {
             menor = apurado[i];
             mes_eno = i+1;
         }
     }

     for(i=0; i<12; i++)
     {
         printf("Apurados: Mes %d: %.2f\n",i+1,apurado[i]);

     }
     printf("Total apurado: %.2f", total);
     printf("\n Mes em que o apurado foi maior: %d, \n Mes em que o apurado foi menor: %d",mes_ior, mes_eno);



	/* Qst 17*/

    printf("Feito mentalmente / no papel: \n");
    printf("0 1 lixo \n1 2 lixo\n");


      /* Qst 18*/


	int m[3][4];
	int m2[4][3];
	int i, j;

	for(i=0; i< 3; i++)
    {
        for(j=0; j < 4; j++)
        {
            printf("Element %d %d: \n",i,j);
            scanf("%d",&m[i][j]);
        }

    }

    for(i=0; i< 3; i++)
    {
        for(j=0; j < 4; j++)
        {
            m2[j][i] = m[i][j];

        }

    }

      for(i=0; i< 4; i++)
      {
        for(j=0; j < 3; j++)
        {

            printf("%d",m2[i][j]);

        }
      	printf("\n");
      }


      /* Qst 19*/


    int A[3][3], B[3][3], C[3][3],x=0;
    int i,j,k;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\nDigite os elementos %d %d das marizes A e B, respecivamente:   ",i,j);
            scanf("%d %d",&A[i][j],&B[i][j]);
            C[i][j] = 0;
        }
    }

  for(k=0; k<3; k++)
  {
        for(i=0; i<3; i++)
        {

            for(j=0; j<3; j++)
            {
                x += A[i][j] * B[j][i];
            }

            C[k][i] = x;
            x= 0;
        }

  }

  printf("\n");
  for(i=0; i<3; i++)
  {

      for(j=0; j<3; j++)
      {
          printf("%d  ",C[i][j] );

      }
      printf("\n");
  }


	/* Qst 20*/


    int M[5][5],i,j;


    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("\nDigite o elemento %d %d da mariz :   ",i,j);
            scanf( "%d",&M[i][j] );
        }
    }

    printf("\nLetra A, diagonal principal: \n");

        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                if(i == j)
                {
                    printf("%d ",M[i][j]);
                }
                else
                {
                    printf("  ");
                }
            }
          printf("\n");
       }

     printf("\nLetra B, Triagulo superior: \n");

         for(i=0; i<5; i++)
         {
            for(j=0; j<5; j++)
            {
                if(i < j)
                {
                    printf("%d ",M[i][j]);
                }
                else
                {
                    printf("  ");
                }
            }
          printf("\n");
        }


    printf("\nLetra C, Triagulo inferior: \n");

         for(i=0; i<5; i++)
         {
            for(j=0; j<5; j++)
            {
                if(i > j)
                {
                    printf("%d ",M[i][j]);
                }
                else
                {
                    printf("  ");
                }
            }
          printf("\n");
        }


    printf("\nLetra D, Tudo menos diagonal principal: \n");

         for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                if(i == j)
                {
                    printf("  ");
                }
                else
                {
                    printf("%d ",M[i][j]);

                }
            }
          printf("\n");
       }


	/* Qst 21 */



	printf(" S E R A \n Q U E * \n * E * * \n I S T O");


	/* Qst 22 */


    float m[10][10];
    float soma= 0;
    int i,j;

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("Digite o elemento %d-%d: \n",i,j);
            scanf("%f",&m[i][j]);

            if (i == j)
            {
                soma += m[i][j];
            }
        }
    }

     printf("A matriz: \n");
     for(i=0; i<10; i++)
     {
        for(j=0; j<10; j++)
        {
            printf("%.1f ",m[i][j]);
        }
        printf("\n");
     }

    printf("\nA soma da diagonal principal eh: %.1f \n",soma);
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if (i > j)
            {
                m[i][j] = m[i][j] * soma;
            }
        }
    }

      printf("A matriz multiplicada: \n");

     for(i=0; i<10; i++)
     {
        for(j=0; j<10; j++)
        {
            printf("%.1f ",m[i][j]);
        }
        printf("\n");
     }




 	/* Qst 23 */


   srand(time(NULL));

   int m[3][3],i,j,x=0;
   int v[36];


   for(i=0; i<36; i++)
   {
       printf("Digite o elemento %d",i);
       scanf("%d"&v[i]);
   }

   for(i=0; i<3; i++)
   {
       for(j=0; j<3; j++)
       {
           x = rand()%36
           m[i][j] = v[x];
       }
   }

