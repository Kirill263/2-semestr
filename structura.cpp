#include <iostream>
struct company_products //объ€вление структуры
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;
	company_products product1 = {"chokopie", 100, 3.0};
	company_products product2 = {"coca cola", 50, 1.2};
	
	cout<<"you can buy "<<product1.name;
	cout<<" and "<<product2.name<<endl;
	
	cout<<"price of both is = "<<product1.price+product2.price<<endl;
	
	return 0;
	
}
