#include <iostream>
using namespace std;

//������� �����.
//���� while.

int main()
{
	int sum=0; 
	
    int rangeBegin, rangeEnd; //�������� �����
	
	cout<<"Enter rangeBegin"<<endl;
	cin>>rangeBegin; //������ ������ ���������
	
	cout<<"Enter rangeEnd"<<endl;
	cin>>rangeEnd; //������ ����� ���������
	
	do
	{
		if(rangeBegin%2!=0)
		{
			sum += rangeBegin;
		}
		
		rangeBegin++;
	}while(rangeBegin<rangeEnd);
	
	cout<<"Sum of all nechetnih numbers: "<<sum<<endl;
}
