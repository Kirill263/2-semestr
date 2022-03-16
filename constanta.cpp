#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	
	const int COUNT_DAYS_IN_WEEK = 7;
	
	//COUNT_DAYS_IN_WEEK = 5; - выведет ошибку
	
	const char NEW_LINE = '\n';
	
	cout<<COUNT_DAYS_IN_WEEK<<NEW_LINE;
	return 0;
}
