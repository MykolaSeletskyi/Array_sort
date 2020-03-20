#include<iostream>
#include "sortings.h"
#include "show_sorting.h"
void bubble_sort(int* arr, int size, bool parametr_sort,bool graphic_sorting) {
	int temp;
	int count = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (parametr_sort == (arr[j] > arr[j + 1]))
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				count++;
				if (graphic_sorting)
				{
					show_sortings(arr, size, j, j + 1);
				}			
			}
		}
	}
	std::cout << "count = " << count << std::endl;
}
void selection_sort(int* arr, int size, bool parametr_sort, bool graphic_sorting)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		int temp;
		for (int j = i + 1; j < size; j++)
		{
			if (parametr_sort == (arr[i] > arr[j]))
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				count++;
				if (graphic_sorting)
				{
					show_sortings(arr, size, i, j);
				}
			}
		}
	}
	std::cout << "count = " << count << std::endl;
}
void inserts_sort(int* arr, int size, bool parametr_sort, bool graphic_sorting)
{
	int count = 0;
	int temp;
	int index_prev;
	for (int i = 1; i < size; i++)
	{
		temp = arr[i];
		index_prev = i - 1;
		while (parametr_sort == (arr[index_prev] > temp) && index_prev >= 0)
		{
			arr[index_prev + 1] = arr[index_prev];
			arr[index_prev] = temp;
			index_prev--;
			count++;
			if (graphic_sorting)
			{

				show_sortings(arr, size, index_prev, index_prev + 1);
			}
		}
	}
	std::cout << "count = " << count << std::endl;
}

