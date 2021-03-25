#include <iostream>

using namespace std;

int main()
{
	int a=1; //copy initialization
	int b(2);    //direct
	int b2(2.6);//initialization
	int c{3}; //direct brace initialization
	int d={4}; //copy brace initialization
	
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"b2 = "<<b2<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"d = "<<d<<endl;
	
	int z{};
	cout<<"z = "<<z<<endl;
	z=5;
	cout<<"z = "<<z<<endl;
	
	return 0;
}
