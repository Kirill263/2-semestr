#include <iostream>
struct people
{
	char first_name[20];
	char second_name[20];
	int date_of_birth;
	char job[20];
	int salary;
};
int main()
{
	using namespace std;
 	people workers[10] = 
	{
		{"Ivan", "Ivanov", 1987, "Programmer_tester", 400000},
		{"German", "Baskakov", 1985, "Surgeon", 80000},
		{"Andrey", "Wagner", 1991, "Programmer", 130000},
		{"Viktor", "Katrushenkov", 1995, "Engineer", 100000},
		{"Viktoria", "Sokolova", 1994, "Manneger", 400000},
		{"Egor", "Smirnov", 1987, "Teacher", 40000},
		{"Alla", "Morozova", 1980, "Architect", 60000},
		{"Kristina", "Grachanaya", 1998, "Designer", 70000},
		{"Anna", "Volkova", 1975, "Biotechnologist", 170000},
		{"Maria", "Krupennikova", 1995, "Psychologist", 50000}
    };
    
    cout<<workers[0].first_name<<endl;
    cout<<workers[0].second_name<<endl;
    cout<<workers[0].date_of_birth<<endl;
    cout<<workers[0].job<<endl;
    cout<<workers[0].salary<<endl;
    
    return 0;
}
