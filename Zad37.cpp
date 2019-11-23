#include<iostream>
using namespace std;
void max2(int &a, int &b, int &x);
void max3(int &x, int &c);
int main()
{
	int a,b,c,x;
	cout<<"Podaj pierwsza liczbe: ";
	cin>>a;
	cout<<"Podaj druga liczbe: ";
	cin>>b;
	cout<<"Podaj trzecia liczbe: ";
	cin>>c;
	cout<<"Max to: ";
	max2(a,b,x);
	max3(x,c);
}

void max2(int &a, int &b, int &x)
{
	if(a>=b)
	{
		x = a;
	}
	if(a<b)
	{
		x = b;
	}
}
void max3(int &x, int &c)
{
	if(x>=c)
	{
		cout<<x;
	}
	if(x<c)
	{
		cout<<c;
	}
}




