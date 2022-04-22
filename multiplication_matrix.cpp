#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    //Инициализируем переменные
    int row1;
    int col1;
    int row2;
    int col2;
    cout<<"Enter row1 ";
    cin>>row1;
    cout<<"Enter col1 ";
    cin>>col1;
    cout<<"Enter row2 ";
    cin>>row2;
    cout<<"Enter col2 ";
    cin>>col2;
    if(col1 != row2)
    {
  	    cout<<"Error";
  	    
  	    return 0;
    }
  
    int matrix1[row1][col1];
    int matrix2[row2][col2];
  
    int matrix3[row1][col2];
  
    //Создание матриц
    cout<<"Enter matrix1 of elements";
    for (int i=0; i<row1; i++)
    {
        for (int j=0; j<col1; j++)
        {
            cout<<"matrix1[i][j]= ";
			cin>>matrix1[i][j];
        }
    }
    
    cout<<"Enter matrix2 of elements";
    for (int i=0; i<row1; i++)
    {
        for (int j=0; j<col1; j++)
        {
            cout<<"matrix2[i][j]= ";
			cin>>matrix2[i][j];
        }
    }
  
    //Вывод матриц в консоль   
    for (int i=0; i<row1; i++)
    {
	    for (int j=0; j<col1; j++)
        {
            cout<<matrix1[i][j]<<'\t';
        }
        cout<<endl;
    }
    cout<<endl;
      
    for (int i=0; i<row2; i++)
    {
        for (int j=0; j<col2; j++)
        {
            cout<<matrix2[i][j]<<'\t';
        }
        cout<<endl;
    }
    cout<<endl;
    
     
    
    // Умножение матриц
    for(int i = 0; i < row1; i++)
	{
        for(int j = 0; j < col2; j++)
		{
            matrix3[i][j] = 0;
            for(int k = 0; k < col1; k++)
			{
                matrix3[i][j] += (matrix1[i][k] * matrix2[k][j]);
            }
        }
    }

    //Вывод результата третьей матрицы в консоль   
    for (int i=0; i<row1; i++)
    {
        for (int j=0; j<col2; j++)
        {
            cout<<matrix3[i][j]<<'\t';
        }
        cout<<endl;
    }
    cout<<endl;
 
    return 0;
}
