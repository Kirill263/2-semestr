#include<iostream>
#include<vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand (time(NULL));
	int n, m; //��������� ������ �������
	cout<<"Enter size vector"<<endl;
	cin>>n;
	cin>>m;
	
	vector<vector <int> >vect(n, vector<int>(m)); //������� ��������� ������
	
	//������� �������
	cout<<"Enter elements of matrix"<<endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			vect[i][j]=rand()%100;
		}
	}
	cout<<endl;
	
	//������� �������
	cout<<"Matrix"<<endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout<<vect[i][j]<<'\t';
		}
		cout<<endl;
    }
    cout<<endl;
    
    //�������� �� ������� �������, ���������� �����, ���������, ����� ��� ��������������� �������. ���� ����� ���������� ������� ��������� ������, ��������� ��.
    int sum=0;
    for (int j = 0; j < m; j++)
    {
    	int sumCol=0;
    	for (int i = 0; i < n; i++)
    	{
    		sumCol+=vect[i][j];
    	}
    	if (j==0||sum>sumCol){
    			sum=sumCol;
    		}
    }
    cout<<sum<<endl;	
    
    return 0;
}
