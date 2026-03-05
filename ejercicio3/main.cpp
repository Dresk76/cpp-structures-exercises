#include <iostream>
using namespace std;

										//******Ejercicio Estructura******//
										
/*-----59. Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: 
nombre, pais, numero_Medallas. Y devuelva los datos (nombre, pais) del atleta que ha ganado el mayor número 
de madallas.*/

struct Atleta{
	char nombre[20];
	char pais[15];
	int medallas;
}atletas[50];
int main(int argc, char** argv) {
	
	int num_atletas, posA = 0, mayor = 0;
	
	cout<<"Cuantos Atletas va a ingresar?: ";
	cin>>num_atletas;
	
	for(int i = 0; i < num_atletas; i++){
		fflush(stdin);
		
		cout<<i+1<<". Ingrese su nombre: ";
		cin.getline(atletas[i].nombre,20,'\n');
		cout<<"Ingrese su pais: ";
		cin.getline(atletas[i].pais,15,'\n');
		cout<<"Ingrese su numero de medallas: ";
		cin>>atletas[i].medallas;
		
		if(atletas[i].medallas > mayor){
			mayor = atletas[i].medallas;
			posA = i;
		}
		cout<<"\n";
	}
	
	cout<<"\nDatos del atleta con mayor numero de medallas"<<endl;
	cout<<"Nombre: "<<atletas[posA].nombre<<endl;
	cout<<"Pais: "<<atletas[posA].pais<<endl;
	cout<<"Numero de medallas: "<<atletas[posA].medallas<<endl;
	
	
	return 0;
}
