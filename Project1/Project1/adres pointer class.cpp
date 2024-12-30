#include <iostream>
#include <string>


using namespace std;

	 
class silah
{
public:
	string isim;
	int mermiKapasitesi;
	string renk;
	silah()
	{
		cout << "silah olusuyor\n";
	}
	~silah()
	{
		cout << "silah bitti\n";
	}

};

class Ak47 :public silah
{
public:
	bool seriTek;
	int kayisUzunlugu;
	bool durbun;
	Ak47()
	{
		cout << "keles olusuyor\n";
	}
	~Ak47()
	{
		cout << "keles bitti\n";
	}
};

void test(Ak47 & ak47, Ak47 * ak47ptr)
{
	ak47ptr = &ak47;
	ak47.isim = "ak47 kirmizi ejder";
	ak47ptr->isim = "ak47 kirmizi ejder";
}

int main()
{
	Ak47 ak47;

	Ak47* ak47Ptr;
	ak47Ptr = &ak47;
	 
	ak47Ptr->isim= "ak47 kirmizi ejder";

	Ak47 &refAk47 = ak47;
	refAk47.isim = "ak47 kirmizi ejder";

	test(ak47, &ak47);

	test(refAk47, ak47Ptr);

	cout << ak47.isim<<endl;
	cout << &refAk47.isim << endl; //referans değerini 012346512AF56464 şeklinde bastırıyor
	cout << refAk47.isim << endl;
	cout << ak47Ptr->isim << endl;





	return 0;
}

