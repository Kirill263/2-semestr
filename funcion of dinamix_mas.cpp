#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void f(int *arr, int N)
{
	arr = new int[N];
	int mas;
	int max = arr[0];
	srand (time(NULL));
	//��������� ������ ���������� �������
	for (int i=0; i<100; i++)
	{
		mas = rand()%100;
	    arr[i] = mas;
	}
	//������� ������
	for (int i=0; i<100; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	//�������� �� ����� � ������� max ����� �� ����� �������
	for (int i=0; i<100; i++)
	{
		if (i==0 || arr[i] > max) //���� || ���������� ���
		{
			max = arr[i];
		}
	}
	cout<<"max = "<<max<<endl;
	
	cout<<"max address = "<< &max<<endl; //����� ������� max �����
	
	cout<<sizeof(N)<<endl; //����� ������� N ��������� � ������
	delete []arr; //����������� ���������� ������
}

int main()
{
	f(0,100); 	
}
