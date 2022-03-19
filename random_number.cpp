#include <iostream>
#include <cstdlib>
#include <ctime>
int main(){
	srand (time(NULL));
	std::cout<<(rand()%100)<<'\n';
	int mas[2]={-1,1};
	std::cout<<mas[(rand()%2)]<<'\n';
	return 0;}
