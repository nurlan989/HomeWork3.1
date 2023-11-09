#include <vector>
#include <iostream>

#include "OperationOnVector.h"



void SumMinAndMaxVector()
{
	std::vector<int>numbers;
	int input{ };
	
	std::cout << "Enter number (press 0 to exit): " << std::endl;
	while (true)
	{
		std::cin >> input;
		if (input == 0)
		{
			break;
		}
		numbers.push_back(input);
	}
	for (size_t i : numbers) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	int sum = numbers[0] + numbers[numbers.size() - 1];
	std::cout << "sum of first and last numbers = ";
	std::cout << sum << std::endl;
	
}

void TestVector()
{
	SumMinAndMaxVector();
}
