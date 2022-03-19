//Операторы:

//Унарные
//Бинарные
//Тернарные

#include <iostream>
using namespace std;

/*
int main()
{
	int a = 5;
	cout<<a<<endl;
	a = -a;
	cout<<a<<endl;
	return 0;
}
int main()
{
	int c;
	c =  (2 + 2) * 2;
	cout<<c<<endl;
}
*/
int main()
{
	setlocale(LC_ALL, "Rus");
	int num1;
	int num2;
	int num3;
	int sum;
	int product;
	int mean;
	
	cout<<"Введите первое число: "<<endl;
	cin>>num1;
	
	cout<<"Введите второе число: "<<endl;
	cin>>num2;
	
	cout<<"Введите третье число: "<<endl;
	cin>>num3;
	
	sum = num1 + num2 + num3;
	cout<<"Сумма: "<<sum<<endl;
	
	product = num1 * num2 * num3;
	cout<<"Произведение: "<<product<<endl;
	
	mean = (num1 + num2 + num3)/3;
	cout<<"Среднее арифметическое: "<<mean<<endl;	
}

