#include <iostream>
using namespace std;

										//******Estructura Basica******//
/*-----55. Estructura Basica*/

struct Persona{
	char nombre[20];
	int edad;
	float estatura;
}
persona;

int main(int argc, char** argv) {
	
	cout<<"Nombre: ";
	cin.getline(persona.nombre,20,'\n');

	cout<<"Edad: ";
	cin>>persona.edad;
	
	cout<<"Estatura: ";
	cin>>persona.estatura;
	
	cout<<"\nNombre: "<<persona.nombre<<endl;
	cout<<"Edad: "<<persona.edad<<endl;
	cout<<"Estatura: "<<persona.estatura<<endl;


	return 0;
}
