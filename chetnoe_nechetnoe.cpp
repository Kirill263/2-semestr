#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	
	int a;
	cout<<"Введите число: "<<endl;
	cin>>a;
	
	if (a%2==0)
	{
		cout<<"Четное число"<<endl;
	}
	else
	{
		cout<<"Нечетное"<<endl;
	}
}
