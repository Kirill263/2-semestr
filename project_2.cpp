//���������:

//�������
//��������
//���������

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
	
	cout<<"������� ������ �����: "<<endl;
	cin>>num1;
	
	cout<<"������� ������ �����: "<<endl;
	cin>>num2;
	
	cout<<"������� ������ �����: "<<endl;
	cin>>num3;
	
	sum = num1 + num2 + num3;
	cout<<"�����: "<<sum<<endl;
	
	product = num1 * num2 * num3;
	cout<<"������������: "<<product<<endl;
	
	mean = (num1 + num2 + num3)/3;
	cout<<"������� ��������������: "<<mean<<endl;	
}

