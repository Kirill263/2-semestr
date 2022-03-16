#include <iostream>
int main()
{
	using namespace std;
	char ch = 'M';
	int i = ch;

	cout<<"ASCII code for "<<ch<<" is = "<<i<<endl;
		
	cout<<"adding +1 to character"<<endl;
	ch = ch + 1;
	i = ch;
	cout<<"ASCII code for "<<ch<<" is = "<<i<<endl;

	return 0;
}