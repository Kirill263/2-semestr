//��������� ��������� ������ �������, ������� ������ ������������, ����� ������� ������ �� �����
#include <iostream>
using namespace std;

int main()
{
	int size =10;
	int a[size]; //������
	int i; //������� ��� ������� �� �������

	for(i=0; i<size;i++)
	{
		cout<<"add a number to array"<<endl;
		cin>>a[i]; //���� ������ � ����������
	}
	for(i=0; i<size;i++){
		cout<<a[i]<<'\t';
	}


	return 0;
}
