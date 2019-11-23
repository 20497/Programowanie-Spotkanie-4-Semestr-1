#include<iostream>
using namespace std;
float prost(float dlug, float szer, float wys);
void V(float a, float b, float h, float &objetosc);
int main()
{
	cout<<"Program na pole powierzchni scian oraz objetosc prostopadlocianu"<<endl;
	float a,b,c;
	float objetosc = 0;
	cout<<"Podaj dlugosc: ";
	cin>>a;
	cout<<endl<<"Podaj szerokosc: ";
	cin>>b;
	cout<<endl<<"Podaj wysokosc: ";
	cin>>c;
	cout<<endl<<"Pp = "<<prost(a,b,c);
	V(a,b,c, objetosc);
	cout<<endl<<"V = "<<objetosc;

}

float prost(float dlug, float szer, float wys)
{
	return 2*dlug*szer + 2*dlug*wys + 2*szer*wys;	
}
void V(float a, float b, float h, float &objetosc)
{
	objetosc += a * b * h;
}




