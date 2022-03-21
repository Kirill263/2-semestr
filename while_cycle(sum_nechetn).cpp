#include <iostream>
using namespace std;

//Понятие цикла.
//Цикл while.

int main()
{
	int sum=0; 
	
    int rangeBegin, rangeEnd; //Диапазон чисел
	
	cout<<"Enter rangeBegin"<<endl;
	cin>>rangeBegin; //задаем начало диапазона
	
	cout<<"Enter rangeEnd"<<endl;
	cin>>rangeEnd; //задаем конец диапазона
	
	do
	{
		if(rangeBegin%2!=0)
		{
			sum += rangeBegin;
		}
		
		rangeBegin++;
	}while(rangeBegin<rangeEnd);
	
	cout<<"Sum of all nechetnih numbers: "<<sum<<endl;
}
