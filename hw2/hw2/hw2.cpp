#include <iostream>
#include <string.h>

using namespace std;


class Pet
{
private:
	string food;
public:

	Pet(string f): food(f)
	{
		food = f;
	}

	virtual void feed()
	{
		cout << "Eats " << food << endl;
	}

	virtual void speak()
	{
		cout << "No sound"<< endl;
	}

};

class Cat :public Pet
{
private:
	string color;
public:
	

	Cat(string f, string c) :Pet(f)
	{
		color = c;
		 cout << "got a " << color << " cat"<< endl;
	}

	

	void speak()
	{
		cout << "Meow!\n";
	}

};

class Monkey :public Pet
{
private:

bool tail;

public:

	

	Monkey(string f, bool t) :Pet(f)
	{
		tail = t;
		if (t == 0)
		{
			cout << "got a monkey with no tail"<< endl;
		}
		else
		{
			cout << "got a monkey with tail"<< endl;
		}
	}
	

	void speak()
	{
		cout << "*stratches pit*\n";
	}
};

class Lizard :public Pet
{
private:
	int tongue;

public:

	Lizard(string f, int ton) :Pet(f)
	{
		tongue = ton;
		cout << "Got a lizard with a " << ton << "cm tongue "<< endl;
	}
	
	

	void speak()
	{
		cout << "Grrrrrr~\n";
	}

};

class Turtle :public Pet
{
private:
	float pound;

public:
	
	Turtle(string f, float p) :Pet(f)
	{
		pound = p;
		cout << "Got a " << p << "-pound turtle" << endl;
	}
	
	

	void speak()
	{
		cout << "*Turtle noise*\n";
	}

};

int main()
{
	Pet* Nick, * Jeff, * Chris, * Sam;

	Nick = new Cat("Meow mix", "blue");
	Jeff = new Monkey("Banana", false);
	Chris = new Lizard("Flies", 5);
	Sam = new Turtle("Lettuce", 0.5);



	Nick->feed();
	Jeff->feed();
	Chris->feed();
	Sam->feed();
	Nick->speak();
	Jeff->speak();
	Chris->speak();
	Sam->speak();

	delete Nick;
	delete Jeff;
	delete Chris;
	delete Sam;
						//pointerların hafızayı yaptığı işlemlerden sonra salması için delete kullanılır.	
	
	return 0;
}
