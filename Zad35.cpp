#include<iostream>
using namespace std;
void fun(int a, int b);
int main(){
	int a,b;
	cout<<"Podaj pierwsza liczbe: ";
	cin>>a;
	cout<<"Podaj druga liczbe: ";
	cin>>b;
	fun(a,b);
}

void fun(int a, int b)
{
	cout<<a*2<<endl<<b+100;
}
