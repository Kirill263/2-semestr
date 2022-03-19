//программа выводит таблицу квадратов нечетных чисел от 1 до 19
#include <iostream>
using namespace std;
int main()
{
	int x = 1;
	int y;
	int i;

	for(i=1; i<=10;i++)
	{
		y=x*x;
		cout<<x<<'\t'<<y<<endl; 
		x+=2;
	}
	return 0;
}
