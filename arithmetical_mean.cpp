#include <iostream>
using namespace std;

int main()
{
    int size =10;
	int arr[size]; //массив
	int i; //счетчик для прохода по массиву

	for(i=0; i<size;i++) 
	{
        cout<<"add a number to array"<<endl;
        cin >> arr[i]; //ввод чисел в массив
        sum += arr[i]; //сумма
    }
    
    for(i=0; i<size;i++){
    cout<<"аrithmetic mean: "<<sum/arr<<endl;
    }

    return 0;
}
