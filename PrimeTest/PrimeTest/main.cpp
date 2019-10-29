//*****************PRIME TEST*****************//

#include <iostream>
#include <vector>


int main()
{
	std::vector<int> x = { 11,13,17,2,8,4 };
	std::cout << "add your number to array \"x\" \n";
	int lucky;
	std::cin >> lucky;
	if (lucky <= 1)
	{
		std::cout << "added wrong number !!! \n\n";
		abort;
	}
	else
	{
		x.push_back(lucky);
	}
	int size = x.size();
	std::cout << "size : " << size << "\n\n";

	for (int i = 0; i < size; ++i)
		std::cout << x[i] << ", ";
	std::cout << "\n";


	for (int j = 0; j < size; ++j)
	{
		int counter = 0;

		for (int i = 2; i < x[j]; ++i)
		{
			if (x[j] % i == 0)
				++counter;
		}
		if (counter == 0)
			std::cout << x[j] << " is a prime.\n" << std::endl;
		else
			std::cout << x[j] << "is not a prime.\n" << std::endl;
	}

	return 0;

}