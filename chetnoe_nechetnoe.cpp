#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	
	int a;
	cout<<"������� �����: "<<endl;
	cin>>a;
	
	if (a%2==0)
	{
		cout<<"������ �����"<<endl;
	}
	else
	{
		cout<<"��������"<<endl;
	}
}
