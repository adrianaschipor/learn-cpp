#include <iostream>

using namespace std;

int getValueFromUser()
{
	cout<<"Enter an integer: ";
	int input{};
	cin>>input;
	
	return input;
}

int main()
{
	int x{getValueFromUser()};
	
	cout<<x<<" doubled is: "<<2*x<<'\n';
	return 0;
}
