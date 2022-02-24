#include <stdio.h>
#include <locale.h>
#define QTD 3

/*15- A espaçonave Voyager está em uma viagem até Plutão. Dentro dela, os tripulantes estão em
estado dormente em quatro cápsulas de sono (cápsula 1, cápsula 2, cápsula 3 e cápsula 4). De
hora a hora são medidas as temperaturas de cada tripulante (ao longo de um dia = 24 leituras para
cada tripulante). Escreva um programa capaz de:
1. Proceder à leitura e armazenamento numa matriz de dimensão 24x4 dos valores das
temperaturas dos 4 tripulantes ao longo das 24 horas de um dia;
2. Calcular e apresentar a média das pulsações para cada um dos tripulantes;
3. Identificar a capsula onde se encontra o tripulante que apresentou o menor valor médio
das temperaturas lidas;
4. Identificar o valor menos elevado armazenado na matriz e a identificação da cápsula e da
hora em que ocorreu.*/

int main ()
{
	setlocale(LC_ALL,"");
	
	float temp [QTD][4];
	float media[4];
	float MenorTemperatura, acumulador;
	int tripulante, i, j;
	char resp;
	
	printf("________________________________________________________VOYAGER_________________________________________________________");
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("1) Calcular Média de Pulsações");
	printf("\n2) Armazenar as Temperaturas das Cápsulas");
	printf("\n3) Identificar Cápsula com Menor Valor Médio de Temperatura");
	printf("\n4) Identificar Cápsula com Menor Valor registrado e a hora\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	
	printf("Qual função deseja executar ?");
	
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("Tripulantes Presentes: ");
	printf("\n1) Cpt. Cesar Tofanini");
	printf("\n2) Sgt. Marta");
	printf("\n3) Etg. Daniel");
	printf("\n4) Ceo. Robert\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	
	do {
	printf("\nVocê é qual tripulante ?: ");
	scanf("%i", &tripulante);
	printf("\n");
	switch (tripulante)
	{
		case 1:
			for (i=0; i<QTD; i++)
			{
				printf("Digite a sua temperatura as %i horas: ", i+1);
				scanf("%f", &temp[i][0]);
				media[tripulante] = media[tripulante] + temp [i][0];
			}
			media[tripulante] = media[tripulante]/QTD;
		break;
		case 2:
			for (i=0; i<QTD; i++)
			{
				printf("Digite a sua temperatura as %i horas: ", i+1);
				scanf("%f", &temp[i][1]);
				media[tripulante] = media[tripulante] + temp [i][1];
			}
			media[tripulante] = media[tripulante]/QTD;
		break;
		case 3:
			for (i=0; i<QTD; i++)
			{
				printf("Digite a sua temperatura as %i horas: ", i+1);
				scanf("%f", &temp[i][2]);
				media[tripulante] = media[tripulante] + temp [i][2];
			}
			media[tripulante] = media[tripulante]/QTD;
		break;
			case 4:
			for (i=0; i<QTD; i++)
			{
				printf("Digite a sua temperatura as %i horas: ", i+1);
				scanf("%f", &temp[i][3]);
				media[tripulante] = media[tripulante] + temp [i][3];
			}
			media[tripulante] = media[tripulante]/QTD;
		break;
	}
	
	printf("\nA média de temperatura do tripulante %i foi de %.2f°C durante as últimas 24 horas", tripulante, media[tripulante]);
	
	
	printf("\n\nDeseja continuar? (s/n): ");
	scanf ("%s", &resp);
	
	} while (resp=='s');
	
	/*MenorTemperatura = 100;
	
	for (i=0; i<QTD; i++)
	{
		for (j=0; j<QTD; j++)
		{
			if (temp[i][j]<MenorTemperatura)
			{
				MenorTemperatura=temp[i][j];
			}
		}
	}
	
	for (i=0; i<QTD; i++)
	{
		for (j=0; j<QTD; j++)
		{
			if (temp[i][j]==MenorTemperatura)
			{
				printf("\n\nMenor temperatura: %.2f", MenorTemperatura);
				printf("\nCapsula do tripulante pertencente: %f", temp[j]);
				printf("\nHora em que foi registrada: %f", temp[i]);
			}
		}
	}
	
	//printf("A menor temperatura registrada foi de: %.2f, retirada do tripulante: %i", MenorTemperatura, tripulante);
	
	
	for (i=1; i<5; i++)
	{
		if (media[i]<media[i+1])
		{
			acumulador = media[i];
			printf("media da vez: %.f", media[i]);
		}
	}
	printf ("\n\nA menor média foi de %.2f", acumulador);
	*/
	
	return 0;
}
