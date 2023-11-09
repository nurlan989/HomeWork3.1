#include <iostream>

#include "OperationOnDynamicArray.h"

const int maxSize = 5;

void SwapWithDynamicArray()
{

	int* pointerArray = new int[maxSize];
	
	
	for (size_t i = 0; i < maxSize; ++i)
	{
		std::cin >> pointerArray[i];
		pointerArray[i] = maxSize - i;
	}
	for (size_t i = 0; i < maxSize; ++i)
	{
		std::cout << pointerArray[i];
	}
	delete[]pointerArray;
}

void TestDynamicArray()
{
	SwapWithDynamicArray();
}