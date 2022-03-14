#include <stdio.h>;
#include <stdlib.h>;

struct Horario {
	int hora;
	int minutos;
};

struct Data {
	int dia;
	int mes;
	int ano;
};

struct Compromisso{
	char compromisso[60] = "Estudar structs";
	Horario horario;
	Data data;
};

main(){
	
	struct Compromisso c;

	c.horario.hora = 10;
	c.horario.minutos = 10;
	
	c.data.dia = 13;
	c.data.mes = 3;
	c.data.ano = 2022;
	
	printf("Infos. Compromisso:\n\n");
	printf("Horario: %d:%d\n", (c.horario.hora), (c.horario.minutos));
	printf("Data: %d/%d/%d\n", (c.data.dia), (c.data.mes), (c.data.ano));	
	printf("Descricao do compromisso: %s", (c.compromisso));
}
