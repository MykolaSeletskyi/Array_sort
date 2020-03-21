#include "show_sorting.h"
#include<iostream>
#include<Windows.h>
void show_sortings(int* arr, int size,int index_a,int index_b)
{
	system("cls");
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < size; i++)
	{
		SetConsoleTextAttribute(handle, 128);
		if (index_a==i)
		{
			SetConsoleTextAttribute(handle, 160);
		}
		else if (index_b == i)
		{
			SetConsoleTextAttribute(handle, 64);
		}
		std::cout << arr[i];
		for (int j = 0; j < arr[i]; j++)
		{
			std::cout <<' ';
		}
		SetConsoleTextAttribute(handle, 7);
		std::cout << std::endl<<std::endl;		
	} 
}
