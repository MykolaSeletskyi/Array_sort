#include <iostream>
#include<list>
#include "array processing.h"
using namespace std;
int main()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, 7);
	const int size_arr=15;
	int numbers[size_arr];

	random_array(numbers, size_arr);
	sort_array(numbers, size_arr);

    return 0;
}