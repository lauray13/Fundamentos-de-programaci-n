#include <iostream>

using namespace std;

int main()

{
	float D;
	cout<<"Ingrese el di�metro de una esfera"<<endl;
	cin>>D;
	float radio;
	radio = D/2;
	cout<<"El radio es "<<radio<<endl;
	double pi;
	pi=3.14159265359;
	float circunferencia;
	circunferencia = 2*pi*radio;
	cout<<"La circunferencia es "<<circunferencia<<endl;
	float area;
	area = 4*pi*(radio*radio);
	cout<<"El �rea de la esfera es "<<area<<endl;
	float volumen;
	volumen = 4/3*pi*(radio*radio*radio);
	cout<<"El volumen de la esfera es "<<volumen<<endl;
	
	if(area>30)
	{
		cout<<"El �rea es grande"<<endl;
	
	}
	else
	{
		cout<<"El �rea es peque�a"<<endl;
		
	}
	
	return 0;
	
}	
