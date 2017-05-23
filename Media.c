#include <stdio.h>

void main ()
{
	float Media = 0, Nota1;
	int i = 0; //Variável de controle
	printf("Digite sua nota:\nDigite -1 para sair\n");
	scanf("%f", &Nota1);
	
	while (Nota1 != -1)
	{
		i++;
		Media = (Media + Nota1)/i;
		printf("Sua media inicial e: %f\n", Media);
		printf("Se deseja continuar digite sua segunda nota\nSe nao, digite -1\n");
		scanf("%f", &Nota1);
	}
}