#include <stdio.h>
#include <locale.h>
#define QTD 4 //horas - alterar para 24 quando completo
#define CPT 4 //capit�es - alterar para 4 quando completo

/*15- A espa�onave Voyager est� em uma viagem at� Plut�o. Dentro dela, os tripulantes est�o em
estado dormente em quatro c�psulas de sono (c�psula 1, c�psula 2, c�psula 3 e c�psula 4). De
hora a hora s�o medidas as temperaturas de cada tripulante (ao longo de um dia = 24 leituras para
cada tripulante). Escreva um programa capaz de:
1. Proceder � leitura e armazenamento numa matriz de dimens�o 24x4 dos valores das
temperaturas dos 4 tripulantes ao longo das 24 horas de um dia;
2. Calcular e apresentar a m�dia das pulsa��es para cada um dos tripulantes;
3. Identificar a capsula onde se encontra o tripulante que apresentou o menor valor m�dio
das temperaturas lidas;
4. Identificar o valor menos elevado armazenado na matriz e a identifica��o da c�psula e da
hora em que ocorreu.*/

int main ()
{
	setlocale(LC_ALL,"");
	
	float temp [QTD][CPT];
	float media[QTD];
	int posicao, hora;
	int tripulante, tarefa, batimentos, i, j;
	int linha, coluna;
	char resp, confirm;
	float MenorTemp, MenorMedia;
	
	system("Color A");
	printf("________________________________________________________VOYAGER_________________________________________________________");
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("Tripulantes Presentes: ");
	printf("\n1) Cpt. Cesar Tofanini");
	printf("\n2) Cpt. Saito");
	printf("\n3) Cpt. Tetsuo");
	printf("\n4) Cpt. Vanderlei\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	
	
	system("Color A");
	
	printf("Registre as temperaturas: \n\n");
	
	for(i=0; i<CPT; i++)
	{
	printf("\n");
		for(j=0; j<QTD; j++)
		{
			printf("C�psula: %i, Hora: %i: ", i+1, j+1);
			scanf ("%f", &temp [i][j]);
			tripulante = i;
			switch (tripulante)
			{
				case 0:
				media[tripulante] = media[tripulante] + temp [i][j];
				break;
				case 1:
				media[tripulante] = media[tripulante] + temp [i][j];
				break;
				case 2:
				media[tripulante] = media[tripulante] + temp [i][j];
				break;
				case 3:
				media[tripulante] = media[tripulante] + temp [i][j];
				break;
			}
		}
		media[tripulante] = media[tripulante]/QTD;
		printf("\nA m�dia de temperatura do tripulante %i foi de %.2f�C durante as �ltimas 24 horas", i+1, media[tripulante]);	
		printf("\n");	
	}
	printf("\n");
	system("pause");
	system("cls");
	
	do {
		system("Color B");
		printf("________________________________________________________VOYAGER_________________________________________________________");
		printf("------------------------------------------------------------------------------------------------------------------------");
		printf("1) Calcula M�dia de Pulsa��es");
		printf("\n2) Identifica C�psula com Menor Valor M�dio de Temperatura");
		printf("\n3) Identifica C�psula com Menor Valor registrado e a hora");
		printf("\n4) Imprime uma matriz das Temperatura registradas para cada Tripulante");
		printf("\n5) Limpa a tela do terminal \n");
		printf("------------------------------------------------------------------------------------------------------------------------");
		
		printf("\n\nQual fun��o deseja executar ?");
		scanf("%i", &tarefa);
	
		switch (tarefa)
		{
			case 1:
				printf("\n------------------------------------------------------------------------------------------------------------------------");
				printf("\nQuantos batimentos voc� teve nos �ltimos 10seg ?: ");
				scanf("%i", &batimentos);
				batimentos = batimentos * 6;
				printf("\nSua frequ�ncia card�aca � de %i batimentos por minuto", batimentos);
				printf("\n------------------------------------------------------------------------------------------------------------------------");
				printf("\n\nDeseja voltar ao menu ? (s/n):");
				scanf("%s", &resp);
				
			break;
			case 2:
				MenorMedia=100;
				printf("\n------------------------------------------------------------------------------------------------------------------------");
				printf("\nIdentificar C�psula com Menor Valor M�dio de Temperatura \n");
					for (i=0; i<QTD; i++) 
					{
						if (media[i]<MenorMedia)
						{
							MenorMedia=media[i];
						}
					}
				printf("\n\nA menor Media registrada foi: %.2f", MenorMedia);
				printf("\n------------------------------------------------------------------------------------------------------------------------");
				printf("\n\nDeseja voltar ao menu ? (s/n):");
				scanf("%s", &resp);	
			break;
			case 3:
				MenorTemp = 100;
				printf("\n------------------------------------------------------------------------------------------------------------------------");
				printf("\nIdentificar C�psula com Menor Valor registrado e a hora \n");
				for (i=0; i<CPT; i++)
				{
					for (j=0; j<QTD; j++)
					{
						if (temp[i][j]<MenorTemp)
						{
							MenorTemp=temp[i][j];
							posicao = i;
							hora = j;
						}
					}
				}
				printf("\n\nA menor Temperatura registrada foi: %.2f \nNa C�psula: %i \nAs %i horas\n", MenorTemp, posicao+1, hora+1);
				printf("------------------------------------------------------------------------------------------------------------------------");
				printf("\n\nDeseja voltar ao menu ? (s/n):");
				scanf("%s", &resp);
			break;
			case 4:
		      	printf("\n____________Temperatura p/h____________");
				for (i=0; i<CPT; i++)
				{
					printf("\n Tripulante %i: ", i+1);
					for (j=0; j<QTD; j++)
					{
						printf("[%.2f]", temp[i][j]);
					}
				}
				printf("\n_______________________________________");
				printf("\n\nDeseja voltar ao menu ? (s/n):");
				scanf("%s", &resp);
			break;
			case 5:
				printf("Tem certeza que deseja apagar o hist�rico acima ? (s/n): ");
				scanf("%s", &confirm);
				if (confirm == 's')
				{
					system("cls");
				}
				printf("\n\nDeseja voltar ao menu ? (s/n):");
				scanf("%s", &resp);
			break;
			default:
				system("Color C");
				printf("\nFun��o Inv�lida");
				printf("\n\nDeseja voltar ao menu ? (s/n):");
				scanf("%s", &resp);
				system("cls");
		}
	}while (resp == 's');
	
	return 0;
}
