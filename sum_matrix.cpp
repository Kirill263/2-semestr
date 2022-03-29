#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(NULL));
  //Инициализируем переменные
  const int row = 4;
  const int col = 4;
  int sum =0;
  
  int matrix[row][col];
  
  //Создание матрицы
  for (int i=0; i<row; i++)
  {
    for (int j=0; j<col; j++)
    {
      matrix[i][j]=rand()%1-1;
     
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
    
     
    //Суммируем по строкам
    for (int i=0; i<row; i++)
      {
        for (int j=0; j<col; j++)
        {
         sum = sum + matrix[i][j];
        
        }
     
      }
    
    //Суммируем по столбцам
    for (int i=0; i<row; i++)
      {
        for (int j=0; j<col; j++)
        {
         sum = sum + matrix[j][i];
        
        }
     
      }
      

  //Выводим сумму в консоль
  cout<<sum;

  return sum;
}
