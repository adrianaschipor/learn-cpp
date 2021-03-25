#include<iostream>

using namespace std;

int doubleNumber(int x)
{
	return 2*x;
}

int main()
{
	cout<<"Enter an integer: ";
	
	int nr{};
	cin>>nr;
	
	cout<<nr<<" doubled is "<<doubleNumber(nr)<<'\n';
	return 0;
}
