#include <iostream>
#include <climits>
#define ZERO 0
int main()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	
	cout<<"Sam has "<<sam<<" dollars"<<endl;
	cout<<"Sue has "<<sam<<" dollars"<<endl;
	
    sam = sam +1;
    sue = sue +1;
    
    cout<<"After adding 1 dollar to both"<<endl;
    cout<<"Sam has "<<sam<<" dollars"<<endl;
    cout<<"Sue has "<<sue<<" dollars"<<endl;
    
    sam = ZERO;
    sue = ZERO;
    
    cout<<"Sam has "<<sam<<" dollars"<<endl;
	cout<<"Sue has "<<sam<<" dollars"<<endl;
    
    sam = sam -1;
    sue = sue -1;
    
    cout<<"After adding -1 dollar to both"<<endl;
    cout<<"Sam has "<<sam<<" dollars"<<endl;
    cout<<"Sue has "<<sue<<" dollars"<<endl;
    
    return 0;
}
