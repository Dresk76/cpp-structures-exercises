#include <iostream>
using namespace std;

										//******Ejercicio Estructura******//
										
/*-----60. Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos: nota1, nota2, nota3;
y otro llamado alumno que tendrá los siguientes campos: nombre, sexo, edad; hacer que la estructura promedio
este anidada en la estructura alumno, luego calcular su promedio, y por ultimo imprimir todos sus datos incluidos
el promedio*/

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
}alumno1;

int main(int argc, char** argv) {
	
	float prom_notas;
	
	cout<<"Ingrese su nombre: ";
	cin.getline(alumno1.nombre,20,'\n');
	cout<<"Ingrese su sexo: ";
	cin.getline(alumno1.sexo,10,'\n');
	cout<<"Ingrese su edad: ";
	cin>>alumno1.edad;
	
	cout<<"\nNotas del alumno"<<endl;
	cout<<"Nota 1: ";
	cin>>alumno1.prom.nota1;
	cout<<"Nota 2: ";
	cin>>alumno1.prom.nota2;
	cout<<"Nota 3: ";
	cin>>alumno1.prom.nota3;
	
	prom_notas = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3) / 3;
	
	cout<<"\n\nDatos del Alumno"<<endl;
	cout<<"Nombre: "<<alumno1.nombre<<endl;
	cout<<"Sexo: "<<alumno1.sexo<<endl;
	cout<<"Edad: "<<alumno1.edad<<endl;
	cout<<"Promedio de Notas: "<<prom_notas<<endl;		
		
	return 0;
}
