#include<iostream>
using namespace std;
struct flowers // объявление структуры
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	flowers gifts[2] = 
	{
		{"roses", 5, 5},
		{"irises",14, 10}
	};

	cout<<flowers[0].name<<endl;
	cout<<flowers[0].volume<<endl;
	cout<<flowers[0].price<<endl;

	flowers bouquet1 = {"sunflowers", 20, 10};
	flowers bouquet2;

	bouquet2=bouquet1;

	cout<<"bouquet1 name: "<<bouquet1.name<<endl;
	cout<<"bouquet2 name: "<<bouquet2.name<<endl;

	cout<<"bouquet1 volume: "<<bouquet1.volume<<endl;
	cout<<"bouquet2 volume: "<<bouquet2.volume<<endl;

	cout<<"bouquet1 price: "<<bouquet1.price<<endl;
	cout<<"bouquet2 price: "<<bouquet2.price<<endl;
	


	return 0;
}