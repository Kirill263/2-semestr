#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void f(int arr, int N)
{
	arr = 0;
	N=100;
}

int main()
{
	int *arr = new int[100]; //Объявляем массив с указателем и выделяем память, достаточную для того, чтобы вместить тип int
	int N;
	int min = arr[0];
	srand (time(NULL));
	//Заполняем массив случайными числами
	for (int i=0; i<100; i++)
	{
		N = rand()%100;
	    arr[i] = N;
	}
	//Выводим массив
	for (int i=0; i<100; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	//Проходим по циклу и выводим max число из этого массива
	for (int i=0; i<100; i++)
	{
		if (i==0 || arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout<<"min = "<<min<<endl;
	
	cout<<"min address = "<< &min<<endl; //Вывод адресса max числа
	
	cout<<(sizeof(arr)*N)<<endl; //Вывод размера N элементов в байтах
	delete []arr; //Освобождаем выделенную память
	return 0;
}

