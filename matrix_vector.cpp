#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n; //Объявляем линейный размер матрицы
	cout<<"Enter size vector"<<endl;
	cin>>n;
	
	vector<vector <int> >vect(n, vector<int>(n)); //Создаем двумерный вектор
	
	//Создаем матрицу
	cout<<"Enter elements of matrix"<<endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>vect[i][j];
		}
	}
	cout<<endl;
	
	//Выводим матрицу
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
    
    //Меняем местами главную и побочную диагонали
    for (int i=0; i < n; i++)
    {
    	int tmp = vect[i][n-i-1];
    	vect[i][n-i-1]=vect[i][i];
    	vect[i][i]=tmp;
    }
    cout<<endl;
    
    //Выводим измененную матрицу
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
