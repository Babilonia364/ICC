#include <stdio.h>

void main () //Em Construcao
{
	float Media = 0, Nota1;
	
	do
	{
		printf("Digite sua nota:\nDigite -1 para sair\n");
		scanf("%f", &Nota1);
		Media = (Media + Nota1)/2;
		printf("Sua media inicial e: %f\n", Media);
	} while (Nota1 != -1);
}
