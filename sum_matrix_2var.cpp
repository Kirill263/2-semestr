#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	
    srand(time(NULL));
    //Инициализируем переменные
    const int row = 4;
    const int col = row;

    int sum = 0;
  
    int matrix[row][col];
  
    //Создание матрицы
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            matrix[i][j]=rand()%2;
        }
    }
  
  
        //Вывод матрицы в консоль   
        for (int i=0; i<row; i++)
        {
            for (int j=0; j<col; j++)
            {
        	    if (matrix[i][j]==0)
                {
                    matrix[i][j]= -1;
                }
                cout<<matrix[i][j]<<'\t';    
            }
            cout<<endl;
        }
        cout<<endl;
    
     
        for (int i=0; i<row; i++)
        {
            for (int j=0; j<row-1; j++)
            {  
            sum = sum + matrix[j][i]*matrix[j+1][i]; 
		    sum = sum + matrix[i][j]*matrix[i][j+1];
            }
        sum = sum + matrix[i][row-1]*matrix[i][0]; 
		sum = sum + matrix[row-1][i]*matrix[0][i]; 
        }
      
		 
    //Выводим сумму в консоль
    cout<<sum;

    return sum;
}
