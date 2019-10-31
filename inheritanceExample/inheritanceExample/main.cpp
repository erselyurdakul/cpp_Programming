//**********************ERSEL YURDAKUL**********************//
//************************30.10.2019************************//
//*******************INHERITANCE EXAMPLE********************//



#include <iostream>
#include <algorithm>
#include <vector>

//using with "class" keyword default is private.
class MyClass
{
public:
	MyClass()
	{
		std::cout << "MyClass Contstructor.\n";
	}
	~MyClass()
	{
		std::cout << "MyClass Destructor.\n";
	}

private:

};



//using with "class" keyword default is public.
struct MyStruct : MyClass
{
	MyStruct()
	{
		std::cout << "MyStruct Contstructor\n";

	}
	~MyStruct()
	{
		std::cout << "MyStruct Destructor.\n";

	}
	void A()
	{ 
		MyClass A;
		std::cout << "MyClass type object in MyStruct class. \n"; 
	}
private:

};


int main()
{
	MyStruct mystruct;
	mystruct.A();

	return 0;
}