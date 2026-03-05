#include <iostream>
#include <string.h>
using namespace std;

										//******Ejercicio Estructura******//
										
/*-----57. Hacer una estructura llamada corredor, en la cual se tendran los siguientes campos:
Nombre, Edad, Sexo, Club, pedir datos al usuario para un corredor, y asignarle una categoria de competicion:
- Juvenil <= 18 años
- Señor <= 40 años
- Veterano > 40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoria de competicion*/

struct{
	char nombre[30];
	int edad;
	char sexo[10];
	char club[30];
}competidor;

int main(int argc, char** argv) {
	
	char categoria[8];
	
	cout<<"Ingrese su nombre: ";
	cin.getline(competidor.nombre,30,'\n');
	
	cout<<"Ingrese su edad: ";
	cin>>competidor.edad;
	
	fflush(stdin);
	
	cout<<"Ingrese su sexo: ";
	cin.getline(competidor.sexo,10,'\n');
	
	cout<<"Ingrese su club: ";
	cin.getline(competidor.club,30,'\n');
	
	if(competidor.edad <= 18){
		strcpy(categoria,"Juvenil");
	
	} else if(competidor.edad <= 40){
		strcpy(categoria,"Señor");
		
	} else if(competidor.edad > 40){
		strcpy(categoria,"Veterano");
	}
	
	cout<<"\n\nDatos del corredor"<<endl;
	cout<<"Nombre: "<<competidor.nombre<<endl;
	cout<<"Edad: "<<competidor.edad<<endl;
	cout<<"Sexo: "<<competidor.sexo<<endl;
	cout<<"Club: "<<competidor.club<<endl;
	cout<<"Categoria: "<<categoria<<endl;
	
	
	
	
	
	
	
	return 0;
}
