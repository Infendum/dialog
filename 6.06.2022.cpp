cat.h

#pragma once
#include "pet.h"
#include <iostream>
#include <string>

using namespace std;
class cat
{
private:
	string name;
	size_t age;
};


dog.h

#pragma once
#include "pet.h"
#include <iostream>
#include <string>

using namespace std;
class dog : public pet
{
	string type;
	string gettype();
public:
	enum { Alabai, Rottveiler, Doberman, Bulterier };
	dog();
	dog(string tp, string nm, size_t ag, string hng);
	void Sound() override;
	void Show() override;
	void Type() override;
};


dog.cpp
#include "dog.h"

dog::dog()
{
}

dog::dog(string tp, string nm, size_t ag, string hng) : pet (nm, ag, hng)
{
	type = tp;
}

void dog::Sound()
{
	cout << "gav gav" << endl;
}

void dog::Show()
{
	cout << getname << endl;
}

void dog::Type()
{

}


humster.h

#pragma once
#include "pet.h"
#include <iostream>
#include <string>

using namespace std;
class hamster
{
private:
	string name;
	size_t age;
};


parrot.h

#pragma once
#include "pet.h"
#include <iostream>
#include <string>

using namespace std;
class parrot
{
private:
	string name;
	size_t age;
};


pet.h

#pragma once
#include <iostream>
#include <string>

using namespace std;
class pet
{
	string name;
	size_t age;
	string hang;
public:
	pet();
	pet(string nm, size_t ag, string hng);

	virtual void Sound() = 0;
	virtual void Show() = 0;
	virtual void Type() = 0;

	string getname();
	size_t getage();
	string gethang();


};


pet.cpp
#include "pet.h"

pet::pet()
{
}

pet::pet(string nm, size_t ag, string hng)
{
	name = nm;
	age = ag;
	hang = hng;
}

string pet::getname()
{
	return this->name;

}

size_t pet::getage()
{
	return this->age;
}

string pet::gethang()
{
	return this->hang;
}
