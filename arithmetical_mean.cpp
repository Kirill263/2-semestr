#include <iostream>
using namespace std;

int main()
{
    int size =10;
	int arr[size]; //������
	int i; //������� ��� ������� �� �������

	for(i=0; i<size;i++) 
	{
        cout<<"add a number to array"<<endl;
        cin >> arr[i]; //���� ����� � ������
        sum += arr[i]; //�����
    }
    
    for(i=0; i<size;i++){
    cout<<"�rithmetic mean: "<<sum/arr<<endl;
    }

    return 0;
}
