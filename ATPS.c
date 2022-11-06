#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num;

main()
{

 	setlocale (LC_ALL,"portuguese");

	printf("PAÍSES PARTICIPANTES DAS OLIMPÍADAS 2021 \n\n");
	printf("1 - Estados Unidos\n");
	printf("2 - China\n");
	printf("3 - Japão\n");
	printf("4 - Grã-Bretanha\n");
	printf("5 - Brasil\n");
	printf("\n Escolha de 1 a 5 para verificar medalhas e posições dos países citados  \n");
	printf(" Digite 'Resultado' para verificar a classificação dos países com medalhas de ouro nas olimpíadas 2021\n\n");
		scanf("%d",&num);

	switch(num)
	{
		case 1:
			system("cls");
				int ouro=39;
				int prata=41;
				int bronze=33;
			printf("Introduza a quantidade que você acha que o país ganhou em medalhas de Ouro\n");
				scanf("%d",&ouro);
			printf("o valor correto é %d\n\n",ouro=39);
			printf("Introduza a quantidade que você acha que o país ganhou em medalhas de Prata\n");
				scanf("%d",&prata);
			printf("o valor correto é %d\n\n",prata=41);
			printf("Introduza a quantidade que você acha que o país ganhou em medalhas de Bronze\n");
				scanf("%d",&bronze);
			printf("O valor correto é %d\n\n",bronze=33);
			printf("Deseja saber a quantidade total de medalhas?\n");
			printf(" - Primeiro, tente adivinhar hehe: \n");
			scanf("%d");
			printf("A soma geral é de 113 medalhas \n");
			printf("Obs: Foi o país em 1° lugar nas olimpíadas 2021\n\n");
			break;
			
		case 2: 
			system("cls");
				int ouro1=38;
				int prata1=32;
				int bronze1=18;
			printf("Introduza a quantidade que você acha que o País ganhou em medalhas de Ouro\n");
				scanf("%d",&ouro1);
			printf("O valor correto é %d\n\n",ouro1=38);
			printf("Introduza a quantidade que você acha que o País ganhou em medalhas de Prata\n");
				scanf("%d",&prata);
			printf("o valor correto é %d\n\n",prata1=32);
			printf("Introduza a quantidade que você acha que o País ganhou em medalhas de Bronze\n");
				scanf("%d",&bronze);
			printf("o valor correto é %d\n\n",bronze1=18);
			printf("Deseja saber a quantidade total de medalhas?\n");
			printf(" - Primeiro, tente adivinhar hehe: \n");
			scanf("%d");
			printf("A soma geral é de 88 medalhas \n");
			printf("Obs: Foi o país em 2° lugar nas olimpíadas 2021\n\n");
			break;
			
		case 3: 
			system("cls");
				int ouro2=27;
				int prata2=14;
				int bronze2=17;
			printf("Introduza a quantidade que você acha que o País ganhou em medalhas de Ouro\n");
				scanf("%d",&ouro2);
			printf("O valor correto é %d\n\n",ouro2=27);
			printf("Introduza a quantidade que você acha que o País ganhou em medalhas de Prata\n");
				scanf("%d",&prata);
			printf("o valor correto é %d\n\n",prata2=14);
			printf("Introduza a quantidade que você acha que o País ganhou em medalhas de Bronze\n");
				scanf("%d",&bronze);
			printf("o valor correto é %d\n\n",bronze2=17);
			printf("Deseja saber a quantidade total de medalhas?\n");
			printf(" - Primeiro, tente adivinhar hehe: \n");
			scanf("%d");
			printf("A soma geral é de 58 medalhas \n");
			printf("Obs: Foi o país em 3° lugar nas olimpíadas 2021\n\n");
			break;
			
		case 4: 
			system("cls");
				int ouro3=22;
				int prata3=21;
				int bronze3=22;
			printf("Introduza a quantidade que você acha que o País ganhou em medalhas de Ouro\n");
				scanf("%d",&ouro3);
			printf("O valor correto é %d\n\n",ouro3=22);
			printf("Introduza a quantidade que você acha que o País ganhou em medalhas de Prata\n");
				scanf("%d",&prata);
			printf("o valor correto é %d\n\n",prata3=21);
			printf("Introduza a quantidade que você acha que o País ganhou em medalhas de Bronze\n");
				scanf("%d",&bronze);
			printf("o valor correto é %d\n\n",bronze3=22);
			printf("Deseja saber a quantidade total de medalhas?\n");
			printf(" - Primeiro, tente adivinhar hehe: \n");
			scanf("%d");
			printf("A soma geral é de 65 medalhas \n");
			printf("Obs: Foi o país em 4° lugar nas olimpíadas 2021\n\n");
			break;
			
		case 5: 
			system("cls");
				int ouro4=7;
				int prata4=6;
				int bronze4=8;
			printf("Introduza a quantidade que você acha que o País ganhou em medalhas de Ouro\n");
				scanf("%d",&ouro4);
			printf("O valor correto é %d\n\n",ouro4=7);
			printf("Introduza a quantidade que você acha que o País ganhou em medalhas de Prata\n");
				scanf("%d",&prata);
			printf("o valor correto é %d\n\n",prata4=6);
			printf("Introduza a quantidade que você acha que o País ganhou em medalhas de Bronze\n");
				scanf("%d",&bronze);
			printf("o valor correto é %d\n\n",bronze4=8);
			printf("Deseja saber a quantidade total de medalhas?\n");
			printf(" - Primeiro, tente adivinhar hehe: \n");
			scanf("%d");
			printf("A soma geral é de 21 medalhas \n");
			printf("Obs: Ficamos em 12° lugar nas olimpíadas 2021\n\n");
			break;
			
		default:
			printf("Outras opções\n\n");	
	}
	printf("Países em suas respectivas posições com ouro nos jogos de 2021\n\n");
	printf("1°- Estados Unidos\n");
	printf("2°- China\n");
	printf("3°- Japão\n");
	printf("4° - Grã-Bretanha\n");
	printf("12° - Brasil\n");

	
 system("pause");
 return 0;
 
} 
