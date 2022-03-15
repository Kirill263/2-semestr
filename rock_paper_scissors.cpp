#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void Win()
{
	cout<<"You win!"<<endl;
}
void Lose()
{
	cout<<"You lose!"<<endl;
}
int main()
{
	srand(time(NULL));
	
	cout<<"1 - rock"<<endl;
	cout<<"2 - paper"<<endl;
	cout<<"3 - scissors"<<endl;
	cout<<"Enter number: ";
	
	int userChoice;
	cin>>userChoice;
	
	int compChoice=(rand()%3)+1;
	
	if (userChoice == 1)
	{
		cout<<"Your choice is rock"<<endl;
	}
	else if (userChoice == 2)
	{
		cout<<"Your choice is paper"<<endl;
	}
	else if (userChoice == 3)
	{
		cout<<"Your choice is scissors"<<endl;
	}
	else
	{
		cout<<"Invalid choice"<<endl;
		return 1;
	}
	if (compChoice == 1)
	{
		cout<<"Computer's choice is rock"<<endl;
	}
	else if (compChoice == 2)
	{
		cout<<"Computer's choice is paper"<<endl;
	}
	else if (compChoice == 3)
	{
		cout<<"Computer's choice is scissors"<<endl;
	}
	if (userChoice == compChoice)
	{
		cout<<"Draw"<<endl;	
	}
	if (userChoice == 1)
	{
		if (compChoice == 2)
		{
			Lose();
		}
		else if (compChoice == 3)
		{
			Win();
		}
	}
	else if (userChoice == 2)
	{
		if (compChoice == 1)
		{
			Win();
		}
		else if (compChoice == 3)
		{
			Lose();
		}
	}
	else if (userChoice == 3)
	{
		if (compChoice == 1)
		{
			Lose();
		}
		else if (compChoice == 2)
		{
			Win();
		}
	}
}
