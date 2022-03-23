#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int matrix[4][4], i ,j;
	
	srand(time(NULL));
	int mas[2]={-1,1};
	std::cout<<mas[(rand()%2)]<<'\n';
 
 
 for(i = 0; i < 4; ++i)
  {for( j = 0;  j < 4; ++j)
     {a[i][j] =(rand()%2);}
  }
 for(i = 0; i < 4; ++i)
  {for(j = 0; j < 4; ++j)
     cout<<matrix[i][j]<<'\t';
     cout<<endl;
 }
 return 0;
}
