#include <iostream>
#include <array>

#include "OperationOnSTLArray.h"

const int maxSize = 5;


void CheackToEvenForSTLArray()
{
	std::array<int, maxSize> arr;

	for (auto& i : arr)
	{
		std::cin >> i;
	}
	for (auto& i : arr)
	{
		std::cout << i << " ";
	}
	for (size_t i = 0; i < maxSize; ++i)
	{
		if (i == 0 && arr[0] % 2 == 0)
		{
			 std::cout << "First element is even number = " << arr[0] << std::endl;
		}
		if (i == 0 && arr[0] % 2 == 1)
		{
			std::cout << "First element is odd number = " << arr[0] << std::endl;
		}
	}
}

void SumMinAndMaxSTLArray()
{
	std::array<int, maxSize> arr;
	int sum{ 0 };
	for (auto& i : arr)
	{
		std::cin >> i;
		sum = arr[0] + arr[maxSize - 1];
	}
	std::cout << "sum of first and last numbers = ";
	std::cout << sum << std::endl;
}


void TestSTLArray()
{
	SumMinAndMaxSTLArray();
	// CheackToEvenForSTLArray();
}
