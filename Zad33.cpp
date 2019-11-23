#include<iostream>
using namespace std;
bool pierwsza(int n);
int main(){
	int x;
	cout<<"Podaj liczbe: ";
	cin>>x;
	int counter = 0;
	for(int i=1; i<=x; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(i%j==0)
			{
				counter++;	
			}
		}
		if(counter == 2)
		{
			cout<<i<<" ";
		}
		counter = 0;
	}
	
	
	
	cout<<endl<<"Czy podana liczba jest liczba pierwsza?( 0 - false, 1 - true): "<<pierwsza(x);
	
}

bool pierwsza(int n)
{
	int counter = 1;
	for(int i=2; i<=n; i++)
	{
		if(n%i==0)
		{
			counter++;
		}
	}
	if(counter < 3)
		return true;
	else
		return false;	
}

