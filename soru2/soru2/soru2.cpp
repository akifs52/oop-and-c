

#include <iostream>

using namespace std;

int main()
{
	int year, month ;
	
	cin >> month >> year;

	cout << "month: " << month << "     year: " << year <<endl;
	
	if (month >= 1 && month <= 12)
		{
		year = year + (month + 100) / 12 ;
		month = ((month + 100) % 12); 
	    }

	cout << "    new month: " << month << "    new year: " << year << "after adding 100 months"<<endl;

	
	return 0;
}

