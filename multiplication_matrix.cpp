#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(NULL));
  //�������������� ����������
  const int row = 3;
  const int col = row;
  
  int matrix1[row][col];
  int matrix2[row][col];
  
  int matrix3[row][col];
  
  //�������� ������
  for (int i=0; i<row; i++)
  {
    for (int j=0; j<col; j++)
    {
      matrix1[i][j]=rand()%10;
      matrix2[i][j]=rand()%10;
     
    }
  }
  
    //����� ������ � �������   
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
    
     
    
      // ��������� ������
      for(int i = 0; i < row; i++)
	   {
        for(int j = 0; j < row; j++)
		 {
            for(int k = 0; k < row; k++)
			 {
                matrix3[i][j] += (matrix1[i][k] * matrix2[k][j]);
             }
         }
       }

    //����� ���������� ������� ������� � �������   
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
