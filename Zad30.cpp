#include<iostream>
#include<cmath>
using namespace std;
float F(float a, float b);
int main(){
	float x, wynik;
	cout<<"Podaj x: ";
	cin>>x;
	wynik = sqrt(sqrt(x*x+(x+3)*(x+3))) + 5 * sqrt(sqrt((3*x)*(3*x)+100));
	cout<<"Wartosc wyrazenia to "<<wynik<<endl;
	cout<<"Funckja F: "<<F(x, wynik);
}

float F(float a, float b)
{
	float p = sqrt(sqrt(a*a + b*b));
	return p;
}
