#include <iostream>
using namespace std;

										//******Ejercicio Estructura******//
										
/*-----58. Realizar un programa que lea de un arreglo de estructuras los datos de de N empleados de la empresa
y que imprima los datos de los empleados con mayor y menor salario*/

struct Empleado{
	char nombre[20];
	float salario;
}emp[100];
int main(int argc, char** argv) {
	
	int n_empleados,posMa = 0,posMe = 0;
	float mayor = 0, menor = 99999999;
	
	cout<<"Cuantos empleados va a ingresar?: ";
	cin>>n_empleados;
	
	for(int i = 0; i < n_empleados; i++){
		fflush(stdin);
		cout<<i+1<<". Ingrese el nombre: ";
		cin.getline(emp[i].nombre,20,'\n');
		cout<<i+1<<" .Ingrese el salario: ";
		cin>>emp[i].salario;
		
		//Empleado Mayor Salario
		if(emp[i].salario > mayor){
			mayor = emp[i].salario;
			posMa = i;
		}
	
		//Empleado Menor Salario
		if(emp[i].salario < menor){
			menor = emp[i].salario;
			posMe = i;
		}
		
		cout<<"\n";
	}
	
	cout<<"\nDatos del empleado con mayor salario"<<endl;
	cout<<"Nombre: "<<emp[posMa].nombre<<endl;
	cout<<"Salario: "<<emp[posMa].salario<<endl;
	
	cout<<"\n\nDatos del empleado con menor salario"<<endl;
	cout<<"Nombre: "<<emp[posMe].nombre<<endl;
	cout<<"Salario: "<<emp[posMe].salario<<endl;
	
	
	return 0;
}
