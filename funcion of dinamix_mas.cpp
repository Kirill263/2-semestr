#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void f(int arr, int N)
{
	arr = 0;
	N=100;
}

int main()
{
	int *arr = new int[100]; //��������� ������ � ���������� � �������� ������, ����������� ��� ����, ����� �������� ��� int
	int N;
	int min = arr[0];
	srand (time(NULL));
	//��������� ������ ���������� �������
	for (int i=0; i<100; i++)
	{
		N = rand()%100;
	    arr[i] = N;
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
		if (i==0 || arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout<<"min = "<<min<<endl;
	
	cout<<"min address = "<< &min<<endl; //����� ������� max �����
	
	cout<<(sizeof(arr)*N)<<endl; //����� ������� N ��������� � ������
	delete []arr; //����������� ���������� ������
	return 0;
}

