#include <iostream>
using namespace std;

int main()
{
	int height,width;
	char z = '*';
	
	cout<<"Enter height"<<endl;
	cin>>height;
	cout<<"Enter a width"<<endl;
	cin>>width;
	for (int i=0; i<width; i++)
	{
		for (int j=0; j<height; j++)
		{
			cout<<"*";	
		}
		cout<<endl;
	}
	cout<<endl;
}
