#include <iostream>
using namespace std;

										//******Estructura Anidada******//
/*-----56. Estructura Anidada*/

struct info_direccion{
	char direccion[30];
	char ciudad[20];
	char barrio[20];
};

struct empleado{
	char nombre[20];
	struct info_direccion dir_empleado;
	float salario;
}empleados[2]; //Arreglo de estructura

int main(int argc, char** argv) {
	
	for(int i = 0; i < 2; i++){
		
		fflush(stdin); //Vaciar el buffer y permitir digitar los valores
		cout<<"Ingrese su nombre: ";
		cin.getline(empleados[i].nombre,20,'\n');
		cout<<"Ingrese su direccion: ";
		cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
		cout<<"Ingrese su ciudad: ";
		cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
		cout<<"Ingrese su barrio: ";
		cin.getline(empleados[i].dir_empleado.barrio,20,'\n');
		cout<<"Ingrese su salario: ";
		cin>>empleados[i].salario;
		cout<<"\n";
	}
	
	//Imprimir datos
	for(int i = 0; i < 2; i++){
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<"Barrio: "<<empleados[i].dir_empleado.barrio<<endl;
		cout<<"Salario: "<<empleados[i].salario<<endl;
	}
	
	
	return 0;
}
