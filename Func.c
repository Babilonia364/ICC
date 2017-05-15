#include<stdio.h>

//Criando Função
void Quadrado()
{
	printf("XXXXX\nX   X\nX   X\nX   X\nXXXXX\n");
}

//Tirando a Média
void Media()
{
	float media1, media2, media3;
	printf("Digite suas bombinhas\n");
	scanf("%f %f %f", &media1, &media2, &media3);
	media1 = ((media1)+(2*media2)+(2*media3))/2;
	printf("Sua media e: %f\n", media1);
}

//Área do triângulo
float Area()
{
	float altura, base;
	printf("Digite base a altura do triangulo\n");
	scanf("%f %f", &base, &altura);
	altura = base*altura/2;
	printf("A area do triangulo e: %f\n", altura);
}

//Executando Programinha
int main()
{
	int x; //Declarando a variável de controle
	printf("Quadrado digite: 1\nMedia digite: 2\nArea do triangulo: 3\n\n");
	scanf("%d", &x);
	if (x <= 4)
	{
		switch (x)
		{
			case 0:
				printf("SABE LER NAO? BABACA!\n"); //VIVA LA REVOLUCION
				scanf("%d", &x);
				x = 0;
			break;
			
			case 1:
				Quadrado(); //Declarando a função quadradinho
				printf("Pressione 1 e aperte enter para fechar\n");
				scanf("%d", &x);
				x = 0;
			break;
			
			case 2:
				Media(); //Declarando a função média
				printf("Pressione 1 e aperte enter para fechar\n");
				scanf("%d", &x);
				x = 0;
			break;
			
			case 3:
				Area(); //Declarando a função área
				printf("Pressione 1 e aperte enter para fechar\n");
				scanf("%d", &x);
				x = 0;
			break;
			
			case 4:
				printf("Em construção\n");
			break;
		}
	}
	else
	{
		printf("PAU NO SEU CU\n"); //AH QUE DELÍCIA CARA
		scanf("%d", &x);
	}
	return 0;
}