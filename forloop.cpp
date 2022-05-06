#include<iostream>
int main(){
	using namespace std;
	double prices[5] = {4.99, 10.99, 6.50, 8.70, 9.49};

	for(double x: prices){
		cout<<x<<endl;}

	for(double &x: prices){
		x*=0.20;}
	
	for(double x: prices){
		cout<<x<<endl;}	
	
	return 0;
}