#include <iostream>
using namespace std;

//Понятие цикла.
//Цикл while.

int main()
{
	int symbolCount; 
	char symbol; //символы хранятся в переменной char
	int lineType; 
	int index=0; //счетчик, изначально равный нулю
	
	cout<<"Enter the number of characters in the line"<<endl;
	cin>>symbolCount; //задаем количество символов
	
	cout<<"Enter symbol"<<endl;
	cin>>symbol; //задаем символ
	
	cout<<"Select line type"<<endl<<
	    "1-vertical line"<<endl<<
	    "2-horizontal line"<<endl;
	    
	cin>>lineType; //Выбираем тип линии
	
	if (lineType!=1 && lineType!=2)
	{
		cout<<"Error"<<endl;
		return 0;
	}
	
	while(index<symbolCount) //Проверяем на истинность, index=0, но с каждой итерацией увеличивается на 1
	{
		if(lineType==1)
		{
			cout<<symbol<<endl;
		}
		else if(lineType==2)
		{
			cout<<symbol;
		}
		index++;
	}
}
