#include <string.h>
#include <iostream>

using namespace std;


class patoz
{
private:
	float time=0.0;
public:
	patoz()
	{
		cout << "basliyor\n";
	}

	~patoz() {
		cout << "bitiyor\n";

	}

	friend void toplam(patoz *ptr);
	
};

void toplam(patoz *ptr)
{
	ptr->time = 100.52;  //friendi pointer ile almayınca hata yapıp 2 tane destructor yazıyor.

	cout << ptr->time <<endl;

}

int main()
{
	patoz p1;

	toplam(&p1);

}