#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(NULL));
  //�������������� ����������
  const int row = 4;
  const int col = 4;
  int sum =0;
  
  int matrix[row][col];
  
  //�������� �������
  for (int i=0; i<row; i++)
  {
    for (int j=0; j<col; j++)
    {
      matrix[i][j]=rand()%1-1;
     
    }
  }
  
    //����� ������� � �������   
    for (int i=0; i<row; i++)
      {
        for (int j=0; j<col; j++)
        {
          cout<<matrix[i][j]<<'\t';
        }
        cout<<endl;
      }
      cout<<endl;
    
     
    //��������� �� �������
    for (int i=0; i<row; i++)
      {
        for (int j=0; j<col; j++)
        {
         sum = sum + matrix[i][j];
        
        }
     
      }
    
    //��������� �� ��������
    for (int i=0; i<row; i++)
      {
        for (int j=0; j<col; j++)
        {
         sum = sum + matrix[j][i];
        
        }
     
      }
      

  //������� ����� � �������
  cout<<sum;

  return sum;
}
