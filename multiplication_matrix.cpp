#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(NULL));
  //Инициализируем переменные
  const int row = 5;
  const int col = row;
  
  int matrix1[row][col];
  int matrix2[row][col];
  
  int matrix3[row][col];
  
  //Создание матриц
  for (int i=0; i<row; i++)
  {
    for (int j=0; j<col; j++)
    {
      matrix1[i][j]=rand()%1+7;
      matrix2[i][j]=rand()%1+3;
     
    }
  }
  
    //Вывод матриц в консоль   
    for (int i=0; i<row; i++)
      {
        for (int j=0; j<col; j++)
        {
          cout<<matrix1[i][j]<<'\t';
        }
        cout<<endl;
      }
      cout<<endl;
      
     for (int i=0; i<row; i++)
      {
        for (int j=0; j<col; j++)
        {
          cout<<matrix2[i][j]<<'\t';
        }
        cout<<endl;
      }
      cout<<endl;
    
     
    //Умножаем одну матрицу на другую
    for (int i=0; i<row; i++)
      {
        for (int j=0; j<col; j++)
        {
         matrix3[i][j] = matrix2[i][j] * matrix1[i][j];
        
        }
          cout<<endl;
     
      }
     for (int i=0; i<row; i++)
      {
        for (int j=0; j<col; j++)
        {
         matrix3[j][i] += matrix2[j][i] * matrix1[j][i];
        
        }
          cout<<endl;
     
      }
      
      for (int i=0; i<row; i++)
      {
        for (int j=0; j<col; j++)
        {
         matrix3[j][i] += matrix2[j][i] * matrix1[j][i];
        
        }
          cout<<endl;
     
      }

    //Вывод результата третьей матрицы в консоль   
    for (int i=0; i<row; i++)
      {
        for (int j=0; j<col; j++)
        {
          cout<<matrix3[i][j]<<'\t';
        }
        cout<<endl;
      }
      cout<<endl;




  return 0;
}
