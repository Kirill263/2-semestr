#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void f(int *arr, int N)
{
	arr = new int[N];
	int mas;
	int max = arr[0];
	srand (time(NULL));
	//Заполняем массив случайными числами
	for (int i=0; i<100; i++)
	{
		mas = rand()%100;
	    arr[i] = mas;
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
		if (i==0 || arr[i] > max) //Знак || обозначает ИЛИ
		{
			max = arr[i];
		}
	}
	cout<<"max = "<<max<<endl;
	
	cout<<"max address = "<< &max<<endl; //Вывод адресса max числа
	
	cout<<sizeof(N)<<endl; //Вывод размера N элементов в байтах
	delete []arr; //Освобождаем выделенную память
}

int main()
{
	f(0,100); 	
}
