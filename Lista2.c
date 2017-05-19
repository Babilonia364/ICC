#include<stdio.h>
#include<math.h> //Biblioteca usada para funções matemáticas básicas

void resto () // Calcular o multiplo
{
	int num1, i = 0;
	printf("Digite um numero inteiro que deseja saber se e multiplo de 2, 3 ou 6\n");
	scanf("%d", &num1);
	if (!(num1%2)) //Se o resto for igual a zero
	{
		i++; //Incrementando o valor de i em 1, ou seja, i = i + 1
		printf("Multiplo de 2\n");
	}
	else
	{
		printf("Nao e multiplo de 2\n");
	}
	
	if (!(num1%3))
	{
		i++; //Análogo ao comentário anterior
		printf("Multiplo de 3\n");
	}
	else
	{
		printf("Nao e multiplo de 3\n");
	}
	
	if (i == 2) //Se o i tiver sido incrementado 2 vezes, o número é multiplo de 6
	{
		printf("Multiplo de 6\n");
	}
	else
		printf("Nao e multiplo de 6\n");
	//Não precisa declarar as funções if e else entre colchetes
	//Mas é bom para ter um código legível
}

void paridade () // Calcular a paridade
{
	int num1;
	float expo;
	printf("Digite o numero que deseja saber se e impar ou par\n");
	scanf("%d", &num1);
	
	if (!(num1%2))
	{
		expo = sqrt(num1); //Função da biblioteca math.h para calcular raiz
		printf("A raiz e: %.2f\n", expo);
	}
	else
	{
		expo = pow(num1, 2); // Elevar ao quadrado, poderia ser feito com num1*num1
		printf("O quadrado do numero e: %.2f\n", expo);
	}
}

void media() // Calcular a media
{
	double N1, N2, N3, ME;
	printf("Digite suas 3 bombinhas da prova do thelmo\n");
	scanf("%lf %lf %lf", &N1, &N2, &N3);
	ME = (N1 + N2 + N3)/3;
	ME = (N1 + (2*N2) + (3*N3) + ME)/7;
	
	if (ME >= 9)
	{
		printf("Conceito A\n");
	}
	else //Gambiarra dos if, se senão se, se senão se
		if (ME>=7.5)
		{
			printf("Conceito B\n");
		}
		else
			if (ME>=6)
			{
				printf("Conceito C\n");
			}
			else
				if (ME>=4)
				{
					printf("Conceito D\n");
				}
				else
					if (ME>=0)
					{
						printf("Conceito E\n");
					}
}

int calculadora2(int j) //Função secundária da calculadora
{
	int num1, num2;
	printf("Digite 2 valores\n");
	scanf("%d %d", &num1, &num2);
	switch (j)
	{
		case 0:
			printf("NAO TEM PORRA\n");
		break;
		
		case 1: //Soma
			num1 = num1 + num2;
			printf("A soma e: \n", num1);
		break;
		
		case 2: //Subtração
			num1 = num1 - num2;
			printf("A diferenca e: \n", num1);
		break;
		
		case 3: //Multiplicação
			num1 = num1*num2;
			printf("A multiplicacao e: \n", num1);
		break;
		
		case 4: //Divisão
			num1 = num1/num2;
			printf("A divisao e: \n", num1);
		break;
		
		default:
		printf("Vamo parar de curiosidade vamo?");
	}
}

void calculadora1() //Função Primária da calculadora
{
	int i, j;
	printf("Escolha uma das seguintes funções\nSoma digite 1\nSubtraçao digite 2\nMultiplicacao digite 3\nDivisao divide 4\n");
	scanf("%d", &i);
	{
		switch (i)
		{
			default:
				printf("SÓ ENTRE ZERO E 1 CARALHUDO");
			break;
			
			case 1: //Soma
				j=1;
				calculadora2(j);
			break;
			
			case 2: //Subtração
				j=2;
				calculadora2(j);
			break;
			
			case 3: //Multiplicação
				j=3;
				calculadora2(j);
			break;
			
			case 4: //Divisão
				j=4;
				calculadora2(j);
			break;
		}
	}
}

void triangulo() // Triângulos Duh
{
	int A, B, C;
	printf("Digite os valores dos 3 lados do triangulo numeros inteiros apenas.\n");
	scanf("%d %d %d", &A, &B, &C);
	if ((A<B+C)&&(B<C+A)&&(C<A+B)) //If aninhado
	{
		printf("O triangulo existe");
	}
	else
		printf("Nao e triangulo");
	
	if (A == B == C)
	{
		printf("Triangulo equilatero");
	}
	//Não é necessário ter else
	if (A == B || B == C || A == C) //Operador ou ||
	{
		printf("Triangulo isoceles");
	}
	if (A != B != C)
	{
		printf("Triangulo escaleno");
	}
}

int main ()
{
	int operador = 0, i = 1;
	printf("Resto 1\nParidade 2\nMedia 3\nCalculadora 4\nTriangulo 5\nSair 6\n");
	scanf("%d", &operador);
	while(i)
	{
		switch (operador)
		{
			case 1:
			resto();
			break;
		
			case 2:
			paridade();
			break;
		
			case 3:
			media();
			break;
		
			case 4:
			calculadora1();
			break;
		
			case 5:
			triangulo();
			break;
			
			case 6:
			i = 0;
			break;
			
			default:
			printf("Pau que nasce torto...");
		}
	}
	return 0;
}
