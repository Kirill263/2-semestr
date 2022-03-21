#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b;
	int selection;
	cout<<"Введите две числа"<<endl;
	cin>>a>>b;
	
	cout<<"Выберите математическую операцию"<<endl<<
	    "1-Сложение"<<endl<<
	    "2-Вычитание"<<endl<<
	    "3-Умножение"<<endl<<
	    "4-Деление"<<endl;
	
	cin>>selection;
	
	switch(selection)
	{
	case 1:
		cout<<a+b<<endl;
		break;
	case 2:
		cout<<a-b<<endl;
		break;
	case 3:
		cout<<a*b<<endl;
		break;
	case 4:
		cout<<a/b<<endl;
		break;
	default:
		cout<<"Ошибка! Такой операции не существует!"<<endl;
		break;
	}
	
}
