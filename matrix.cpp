#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int mas[2]={-1,1};
	std::cout<<mas[(rand()%2)]<<'\n';
 
    int a[4][4], i ,j;
 
 for(i = 0; i < 4; ++i)
  {for( j = 0;  j < 4; ++j)
     {a[i][j] =(rand()%2);}
  }
 for(i = 0; i < 4; ++i)
  {for(j = 0; j < 4; ++j)
     cout<<a[i][j]<<'\t';
     cout<<'\n';
 }
 return 0;
}
