#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(NULL));
  //Инициализируем переменные
  const int row = 3;
  const int col = row;
  int sum1 = 0;
  int sum2 = 0;
  int sum = 0;
  
  int matrix[row][col];
  
  //Создание матрицы
  for (int i=0; i<row; i++)
  {
    for (int j=0; j<col; j++)
    {
      matrix[i][j]=rand()%5;
    }
  }
  
    //Вывод матрицы в консоль   
    for (int i=0; i<row; i++)
      {
        for (int j=0; j<col; j++)
        {
          cout<<matrix[i][j]<<'\t';
        }
        cout<<endl;
      }
      cout<<endl;
    
     
    for (int i=0; i<row; i++)
      {
        for (int j=0; j<row-1; j++)
        {
         sum1 = sum1 + matrix[i][j]*matrix[i][j+1];
        }
        sum1 = sum1 + matrix[i][row-1]*matrix[i][0];
      }
      
    //Транспонируем матрицу
    int matrixTrans[row][col];
    
    for (int i=0; i<row; i++)
      {
        for (int j=0; j<col; j++)
		matrixTrans[i][j] = matrix[j][i];
	  }
	for (int i=0; i<row; i++)
      {
        for (int j=0; j<row-1; j++)
        {
         sum2 = sum2 + matrixTrans[i][j]*matrixTrans[i][j+1];
        }
        sum2 = sum2 + matrixTrans[i][row-1]*matrixTrans[i][0]; 
      }
    sum = sum1 + sum2;
		 
  //Выводим сумму в консоль
  cout<<sum;

  return sum;
}
