#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n; //��������� �������� ������ �������
	cout<<"Enter size vector"<<endl;
	cin>>n;
	
	vector<vector <int> >vect(n, vector<int>(n)); //������� ��������� ������
	
	//������� �������
	cout<<"Enter elements of matrix"<<endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>vect[i][j];
		}
	}
	cout<<endl;
	
	//������� �������
	cout<<"Matrix"<<endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<<vect[i][j]<<'\t';
		}
		cout<<endl;
    }
    cout<<endl;
    
    //������ ������� ������� � �������� ���������
    for (int i=0; i < n; i++)
    {
    	int tmp = vect[i][n-i-1];
    	vect[i][n-i-1]=vect[i][i];
    	vect[i][i]=tmp;
    }
    cout<<endl;
    
    //������� ���������� �������
    cout<<"Modified matrix"<<endl;
    for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<<vect[i][j]<<'\t';
		}
		cout<<endl;
    }
    
    return 0;
    
}
