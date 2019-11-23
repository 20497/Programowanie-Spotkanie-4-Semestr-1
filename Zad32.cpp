#include<iostream>
using namespace std;
float potega(float a, float b);
int main(){
	float a, b, c, n;
	cout<<"Podaj a: ";
	cin>>a;
	cout<<endl<<"Podaj b: ";
	cin>>b;
	cout<<endl<<"Podaj c: ";
	cin>>c;
	cout<<endl<<"Podaj n: ";
	cin>>n;
	cout<<endl<<"Wynik jest rowny: ";
	cout<<(potega(a, n) + potega(b, n+5)) / potega(c, 2*n+1);
}

float potega(float a, float b)
{
	float wynik = 1;
	for(int i=0; i<b; i++)
	{
			wynik *= a;
	}	
	return wynik;
}




