#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num;

main()
{

 	setlocale (LC_ALL,"portuguese");

	printf("PA�SES PARTICIPANTES DAS OLIMP�ADAS 2021 \n\n");
	printf("1 - Estados Unidos\n");
	printf("2 - China\n");
	printf("3 - Jap�o\n");
	printf("4 - Gr�-Bretanha\n");
	printf("5 - Brasil\n");
	printf("\n Escolha de 1 a 5 para verificar medalhas e posi��es dos pa�ses citados  \n");
	printf(" Digite 'Resultado' para verificar a classifica��o dos pa�ses com medalhas de ouro nas olimp�adas 2021\n\n");
		scanf("%d",&num);

	switch(num)
	{
		case 1:
			system("cls");
				int ouro=39;
				int prata=41;
				int bronze=33;
			printf("Introduza a quantidade que voc� acha que o pa�s ganhou em medalhas de Ouro\n");
				scanf("%d",&ouro);
			printf("o valor correto � %d\n\n",ouro=39);
			printf("Introduza a quantidade que voc� acha que o pa�s ganhou em medalhas de Prata\n");
				scanf("%d",&prata);
			printf("o valor correto � %d\n\n",prata=41);
			printf("Introduza a quantidade que voc� acha que o pa�s ganhou em medalhas de Bronze\n");
				scanf("%d",&bronze);
			printf("O valor correto � %d\n\n",bronze=33);
			printf("Deseja saber a quantidade total de medalhas?\n");
			printf(" - Primeiro, tente adivinhar hehe: \n");
			scanf("%d");
			printf("A soma geral � de 113 medalhas \n");
			printf("Obs: Foi o pa�s em 1� lugar nas olimp�adas 2021\n\n");
			break;
			
		case 2: 
			system("cls");
				int ouro1=38;
				int prata1=32;
				int bronze1=18;
			printf("Introduza a quantidade que voc� acha que o Pa�s ganhou em medalhas de Ouro\n");
				scanf("%d",&ouro1);
			printf("O valor correto � %d\n\n",ouro1=38);
			printf("Introduza a quantidade que voc� acha que o Pa�s ganhou em medalhas de Prata\n");
				scanf("%d",&prata);
			printf("o valor correto � %d\n\n",prata1=32);
			printf("Introduza a quantidade que voc� acha que o Pa�s ganhou em medalhas de Bronze\n");
				scanf("%d",&bronze);
			printf("o valor correto � %d\n\n",bronze1=18);
			printf("Deseja saber a quantidade total de medalhas?\n");
			printf(" - Primeiro, tente adivinhar hehe: \n");
			scanf("%d");
			printf("A soma geral � de 88 medalhas \n");
			printf("Obs: Foi o pa�s em 2� lugar nas olimp�adas 2021\n\n");
			break;
			
		case 3: 
			system("cls");
				int ouro2=27;
				int prata2=14;
				int bronze2=17;
			printf("Introduza a quantidade que voc� acha que o Pa�s ganhou em medalhas de Ouro\n");
				scanf("%d",&ouro2);
			printf("O valor correto � %d\n\n",ouro2=27);
			printf("Introduza a quantidade que voc� acha que o Pa�s ganhou em medalhas de Prata\n");
				scanf("%d",&prata);
			printf("o valor correto � %d\n\n",prata2=14);
			printf("Introduza a quantidade que voc� acha que o Pa�s ganhou em medalhas de Bronze\n");
				scanf("%d",&bronze);
			printf("o valor correto � %d\n\n",bronze2=17);
			printf("Deseja saber a quantidade total de medalhas?\n");
			printf(" - Primeiro, tente adivinhar hehe: \n");
			scanf("%d");
			printf("A soma geral � de 58 medalhas \n");
			printf("Obs: Foi o pa�s em 3� lugar nas olimp�adas 2021\n\n");
			break;
			
		case 4: 
			system("cls");
				int ouro3=22;
				int prata3=21;
				int bronze3=22;
			printf("Introduza a quantidade que voc� acha que o Pa�s ganhou em medalhas de Ouro\n");
				scanf("%d",&ouro3);
			printf("O valor correto � %d\n\n",ouro3=22);
			printf("Introduza a quantidade que voc� acha que o Pa�s ganhou em medalhas de Prata\n");
				scanf("%d",&prata);
			printf("o valor correto � %d\n\n",prata3=21);
			printf("Introduza a quantidade que voc� acha que o Pa�s ganhou em medalhas de Bronze\n");
				scanf("%d",&bronze);
			printf("o valor correto � %d\n\n",bronze3=22);
			printf("Deseja saber a quantidade total de medalhas?\n");
			printf(" - Primeiro, tente adivinhar hehe: \n");
			scanf("%d");
			printf("A soma geral � de 65 medalhas \n");
			printf("Obs: Foi o pa�s em 4� lugar nas olimp�adas 2021\n\n");
			break;
			
		case 5: 
			system("cls");
				int ouro4=7;
				int prata4=6;
				int bronze4=8;
			printf("Introduza a quantidade que voc� acha que o Pa�s ganhou em medalhas de Ouro\n");
				scanf("%d",&ouro4);
			printf("O valor correto � %d\n\n",ouro4=7);
			printf("Introduza a quantidade que voc� acha que o Pa�s ganhou em medalhas de Prata\n");
				scanf("%d",&prata);
			printf("o valor correto � %d\n\n",prata4=6);
			printf("Introduza a quantidade que voc� acha que o Pa�s ganhou em medalhas de Bronze\n");
				scanf("%d",&bronze);
			printf("o valor correto � %d\n\n",bronze4=8);
			printf("Deseja saber a quantidade total de medalhas?\n");
			printf(" - Primeiro, tente adivinhar hehe: \n");
			scanf("%d");
			printf("A soma geral � de 21 medalhas \n");
			printf("Obs: Ficamos em 12� lugar nas olimp�adas 2021\n\n");
			break;
			
		default:
			printf("Outras op��es\n\n");	
	}
	printf("Pa�ses em suas respectivas posi��es com ouro nos jogos de 2021\n\n");
	printf("1�- Estados Unidos\n");
	printf("2�- China\n");
	printf("3�- Jap�o\n");
	printf("4� - Gr�-Bretanha\n");
	printf("12� - Brasil\n");

	
 system("pause");
 return 0;
 
} 
