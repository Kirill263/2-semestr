#include<iostream>
#include<vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand (time(NULL));
	int n, m; //Объявляем размер матрицы
	cout<<"Enter size vector"<<endl;
	cin>>n;
	cin>>m;
	
	vector<vector <int> >vect(n, vector<int>(m)); //Создаем двумерный вектор
	
	//Создаем матрицу
	cout<<"Enter elements of matrix"<<endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			vect[i][j]=rand()%100;
		}
	}
	cout<<endl;
	
	//Выводим матрицу
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
    
    //Проходим по каждому столбцу, складываем сумму, проверяем, чтобы оно соответствовало условию. Если сумма следующего столбца оказалась меньше, фиксируем ее.
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
