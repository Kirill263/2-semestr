#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b;
	int selection;
	cout<<"������� ��� �����"<<endl;
	cin>>a>>b;
	
	cout<<"�������� �������������� ��������"<<endl<<
	    "1-��������"<<endl<<
	    "2-���������"<<endl<<
	    "3-���������"<<endl<<
	    "4-�������"<<endl;
	
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
		cout<<"������! ����� �������� �� ����������!"<<endl;
		break;
	}
	
}
