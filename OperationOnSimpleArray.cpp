#include <iostream>

#include "OperationOnSimpleArray.h"

const int maxSize = 5;

void CheckToEven()
{
	int arr[maxSize]{};
	for (size_t i = 0; i < maxSize; ++i)
	{
		std::cin >> arr[i];
	}
	for (size_t i = 0; i < maxSize; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	for (size_t i = 0; i < maxSize; ++i)
	{
		if (i == 0 && arr[i] % 2 == 0)
		{
			std::cout << "First element is even number = " << arr[0] << std::endl;
		}
		if (i == 0 && arr[i] % 2 == 1)
		{
			std::cout << "First element is odd number = " << arr[0] << std::endl;
		}
	}
}

void SumMinAndMaxArray()
{
	int arr[5]{ };
	int sum{ 0 };
	for (size_t i = 0; i < maxSize; ++i)
	{
		std::cin >> arr[i];
		sum = arr[0] + arr[std::size(arr) -1];
	}
	std::cout << "sum of first and last numbers = ";
	std::cout << sum << std::endl;
}

void MultiplyOddNumber()
{
	int arr[maxSize]{ };
	int multiply{ 0 };

	for (size_t i = 0; i < maxSize; ++i)
	{
		std::cin >> arr[i];
		
	}
	for (size_t i = 0; i < maxSize; ++i)
	{
		if (arr[i] == 1)
		{
			multiply = 1;
		}
		if (arr[i] % 2 == 1)
		{
			multiply *= arr[i];	
		}	
	}
	if (multiply == 0)
	{
		std::cout << "Array doesn't have an odd number " << std::endl;
	}
	else
	{
		std::cout << "multiplying all odd numbers in an array = ";
		std::cout << multiply << std::endl;
	}
}


void SwapArray()
{
	int arr[maxSize]{ };
	for (size_t i = 0; i < maxSize; ++i)
	{
		std::cin >> arr[i];
		arr[i] = maxSize - i;
	}
	for (size_t i = 0; i < maxSize; ++i)
	{
		std::cout << arr[i];
	}
}


void TestArray()
{
	// SwapArray();
	// MultiplyOddNumber();
	// SumMinAndMaxArray();
	// CheckToEven();
}

