#include <iostream>
using namespace std;

//������� �����.
//���� while.

int main()
{
	int symbolCount; 
	char symbol; //������� �������� � ���������� char
	int lineType; 
	int index=0; //�������, ���������� ������ ����
	
	cout<<"Enter the number of characters in the line"<<endl;
	cin>>symbolCount; //������ ���������� ��������
	
	cout<<"Enter symbol"<<endl;
	cin>>symbol; //������ ������
	
	cout<<"Select line type"<<endl<<
	    "1-vertical line"<<endl<<
	    "2-horizontal line"<<endl;
	    
	cin>>lineType; //�������� ��� �����
	
	if (lineType!=1 && lineType!=2)
	{
		cout<<"Error"<<endl;
		return 0;
	}
	
	while(index<symbolCount) //��������� �� ����������, index=0, �� � ������ ��������� ������������� �� 1
	{
		if(lineType==1)
		{
			cout<<symbol<<endl;
		}
		else if(lineType==2)
		{
			cout<<symbol;
		}
		index++;
	}
}
