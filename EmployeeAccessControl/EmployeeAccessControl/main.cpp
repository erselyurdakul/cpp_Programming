#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


class Person
{
public:
	std::string userName;
	int id;

	void printName();

	void printId();
};

void Person::printName()
{
	std::cout << "username is : " << userName;
}

void Person::printId()
{
	std::cout << "User id is : " << id;
}

int main()
{
	Person obj1;
	std::string name;
	std::cout << "Username : \n";
	std::getline(std::cin, name);
	int no;
	std::cout << "ID Number : \n";
	std::cin >> no;
	obj1.userName = name;
	obj1.id = no;

	obj1.printName();
	std::cout << "\n\n";

	obj1.printId();
	std::cout << "\n\n\n\n\n";

	if (obj1.userName == "admin" && obj1.id == 1111)
	{
		std::cout << "Access Granted !\n\nWelcome\t" << name << "!\n\n\n";
	}
	else
	{
		std::cout << "Access Denied !!!\n\n\n";
	}


	return 0;
}