#include <iostream>
int main()
{
	using namespace std;
	int a = 42; //decimal
	int b = 0x42; //hexadecimal 
	int c = 042; //octal integer

	cout<<"a = "<<a<<" (42 in decimal)"<<endl;
	cout<<"b = "<<b<<" (0x42 in hex)"<<endl;
	cout<<"c = "<<c<<" (042 in hex)"<<endl;

	a = 42;
	b = 42;
	c = 42;

	cout<<"a = "<<a<<" (42 in decimal)"<<endl;
	cout<<hex;
	cout<<"b = "<<b<<" (hexadecimal for 42)"<<endl;
	cout<<oct;
	cout<<"c = "<<c<<" (octal for 42)"<<endl;
	
	return 0;
}
