#include <iostream>
#include <string.h>

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
	
	virtual void atesEt()
	{
		cout << "cıt cıt\n"; //polymorphismdir örnek olarak bir silah farklı bir silah olduğunda sesi farklı çıkar ve virtual method ile yapılır.
	}

	/*
	virtual void atesEt() = 0; //bunu virtual yapmayınca diğer silahları seslerini işlemiyor virtual da süslü parantez olmaz.
		
	{
		cout << "ses islenmedi\n";
	}
	*/

	~silah()
	{
		cout << "silah bitti\n";
	}
};

class Ak47 :public silah
{
public:
	Ak47()
	{
		cout << "ak47 olusuyor\n";
	}

	bool seriTek;
	int kayisUzunlugu;
	bool durbun;

	void atesEt() //override işlemidir normalde silahdaki bu method yazılmasa silah classındaki method çalışacaktı.
	{
		silah::atesEt(); //override olmuş methodun içine tekrar silahın içindeki method tekrar yazdırdı.
		cout << "dirrr\n";
	}

	~Ak47()
	{
		cout << "ak47 olustu\n";
	}
		
};

class M1 :public silah
{
public:
	bool seriTek;
	int kayisUzunlugu;
	bool durbun;
	M1()
	{
		cout << "m1 olusuyor\n";
	}

	void atesEt() //override işlemidir normalde silahdaki bu method yazılmasa silah classındaki method çalışacaktı.
	{
		cout << "tak tak\n";
	}


	~M1()
	{
		cout << "m1 olustu\n";
	}
};

void goster(silah* silahPtr) //down cast yapıldı // çalışma zamanı polymorphism'e örnektir çünkü aslında silah olan şey farklı bir silah olarak kullanılmıştır.
{
	cin >> silahPtr->isim;

	cout<< "\n" << silahPtr->isim << "\n";

	silahPtr->atesEt();
}

int main()
{
	Ak47 ak47;
	Ak47* ak47Ptr;
	ak47Ptr = &ak47;

	M1 m1;
	M1* m1Ptr;
	m1Ptr = &m1;

	goster(ak47Ptr);
	goster(m1Ptr);

	return 0;
}

