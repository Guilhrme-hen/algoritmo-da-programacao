-----------------------------------------------------------------------------atividade1-----------------------------------------------------------------------------------
#include<stdio.h>

int main (){
int hora, minutos, segundos;

printf("digite o horario que deseja converter em horas: ");
scanf("%i", &hora);

minutos = hora * 60;

segundos = hora * 3600;

printf ("minutos = %i\n", minutos);
printf ("segundos = %i", segundos);

}
-----------------------------------------------------------------------------atividade2-----------------------------------------------------------------------------------
#include<stdio.h>
int main (){
  float raio,area;
  printf ("digite o valor do raio: ");
  scanf ("%f", &raio);
  
  area = 3.14 * (raio * raio);
  
  printf ("a area do circulo do raio informado e: %f", area);

}
-----------------------------------------------------------------------------atividade3-----------------------------------------------------------------------------------
#include<stdio.h>
int main(){;
	float nota1,nota2,nota3, media;
	
	printf ("digite a nota 1: ");
	scanf ("%f", &nota1);
	
	printf ("digite a nota 2: ");
	scanf ("%f", &nota2);
	
	printf ("digite a nota 3: ");
	scanf ("%f", &nota3);
	
	media = (nota1+nota2+nota3)/3;
	
	printf ("a media da nota e: %f", media);
	
}
-----------------------------------------------------------------------------atividade4-----------------------------------------------------------------------------------
#include<stdio.h>
int main(){;
	int a /*valor de a*/ ,b /*valor de b*/;
	
	printf ("digite o valor do dividendo: ");
	
	scanf ("%i", &a);
	
	printf ("digite o valor do divisor: ");
	
	scanf ("%i", &b);
	
	printf ("O quociente da divisao e %i\n", a/b);
	
	printf ("O resto da divisao e %i", a%b);
	
}
-----------------------------------------------------------------------------atividade5-----------------------------------------------------------------------------------
#include<stdio.h>
int main(){;
	int metrosdefio, metrosavulso, rolos;
	
	printf ("digite quantos metros precisa: ");
	
	scanf ("%i", &metrosdefio);
	
	rolos = (metrosdefio/50);
	
	metrosavulso = (metrosdefio % 50);
	
	printf ("Vai usar %i rolo(s) \nE %i de metros avulso",rolos, metrosavulso);

	
}
-----------------------------------------------------------------------------atividade6---------------------------------------------------------------------------------
#include <stdio.h>
int main (){
float notaA, notaB, media;

printf ("peso nota A: 3,5\n");
printf ("peso nota B: 7,5\n");

printf ("digite a primeira nota A ");
scanf("%f", &notaA);

printf ("digite a primeira nota B ");
scanf("%f", &notaB);

media = (3.5*notaA + 7.5*notaB)/11;

printf ("a media obitida foi: %f", media);

}
-----------------------------------------------------------------------------atividade7---------------------------------------------------------------------------------
#include<stdio.h>
int main (){
	char nome[30], sexo, matricula[10];
	float horasT, salarioH, salarioM;
	
	printf("Informe seu nome: ");
    scanf("%[^\n]", &nome);
    
	printf("Informe seu sexo (M/F): ");
    scanf("\n%c", &sexo);
    
	printf("Informe seu numero da matricula: ");
    scanf("%s", &matricula);
    
	printf("Informe Horas trabalhada Mensal: ");
    scanf("%f", &horasT);
    
	printf("Informe quanto recebe por Hora ");
    scanf("%f", &salarioH);
	
    salarioM = horasT * salarioH;
	
	printf("\nnome: %s\nsexo: %c\nmatricula: %s\n", nome, sexo, matricula);
	
	printf("Horas Trabalhadas: %g\nSalario por Hora: %g\nSalario Mensal: %g", horasT, salarioH, salarioM);
	
	
	
}
	
	
	
}