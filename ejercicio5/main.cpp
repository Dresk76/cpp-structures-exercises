#include <iostream>
using namespace std;

										//******Ejercicio Estructura******//
										
/*-----61. Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La estructura debe
tener 3 campos: horas, minutos y segundos. Esriba un programa que dado n etapas calcule el tiempo total empleado
en correr todas las etapas*/

struct Etapa{
	int horas;
	int minutos;
	int segundos;
}etapas[50];

int main(int argc, char** argv) {
	int num_etapas,hr_total = 0,min_total = 0,sg_total = 0;
	
	cout<<"Cuantas etapas va a ingresar?: ";
	cin>>num_etapas;
	
	for(int i = 0; i < num_etapas; i++){
		cout<<"Horas en la etapa "<<i+1<<": ";
		cin>>etapas[i].horas;
		cout<<"Minutos en la etapa "<<i+1<<": ";
		cin>>etapas[i].minutos;
		cout<<"Segundos en la etapa "<<i+1<<": ";
		cin>>etapas[i].segundos;
		
		hr_total += etapas[i].horas;
		min_total += etapas[i].minutos;
		if(min_total >= 60){
			min_total -= 60;
			hr_total++;
		}
		sg_total += etapas[i].segundos;
		if(sg_total >= 60){
			sg_total -= 60;
			min_total++;
		}
		
		cout<<"\n";
	}
	
	cout<<"\n\t**Tiempo total en recorrer todas las etapas**"<<endl;
	cout<<"\t"<<hr_total<<" horas con "<<min_total<<" minutos y "<<sg_total<<" segundos.";
	
	return 0;
}
