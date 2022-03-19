//программа заполняет массив числами, которые вводит пользователь, затем выводит массив на экран
#include <iostream>
using namespace std;

int main()
{
	int size =10;
	int a[size]; //массив
	int i; //счетчик для прохода по массиву

	for(i=0; i<size;i++)
	{
		cout<<"add a number to array"<<endl;
		cin>>a[i]; //ввод данных с клавиатуры
	}
	for(i=0; i<size;i++){
		cout<<a[i]<<'\t';
	}


	return 0;
}
