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
	show_array(numbers, size_arr);
	//element_search(numbers, size_arr);
	sort_array(numbers, size_arr);
	show_array(numbers, size_arr);
	//const int size = 10;
	//int arr_1[size] = { 10,5,7,11,45,6,8,2,3,6 };
	//int arr_2[size] = { 10,5,7,11,45,6,8,2,3,6 };
	//int arr_3[size] = { 10,5,7,11,45,6,8,2,3,6 };

	//int count = 0;
	//

	////бульбашкою

	//for (int i = 0; i < size-1; i++)
	//{
	//	for (int j = 0;j< size-i-1; j++)
	//	{
	//		if (arr_1[j]>arr_1[j+1])
	//		{
	//			swap(arr_1[j], arr_1[j + 1]);
	//count++;
	//		}
	//	}
	//}
	//show(arr_1, size);

	//cout << count << endl;
	//count = 0;


	////selection
	//for (int i = 0; i < size; i++)
	//{
	//	int temp;
	//	for (int j = i+1; j < size; j++)
	//	{
	//		if (arr_2[i]>arr_2[j])
	//		{
	//			swap(arr_2[i], arr_2[j]);
	//			count++;
	//		}
	//	}
	//}

	//show(arr_2, size);
	//cout << count << endl;
	//count = 0;

	//вставками
	//int temp;
	//int index_prev;
	//for (int i = 1; i < size; i++)
	//{
	//	temp = arr_3[i];
	//	index_prev = i - 1;
	//	count++;
	//	while (arr_3[index_prev]> temp&& index_prev >=0)
	//	{
	//		count++;
	//		arr_3[index_prev + 1] = arr_3[index_prev];
	//		arr_3[index_prev] = temp;
	//		index_prev--;
	//		
	//	}

	//}
	//show(arr_3, size);
	//cout << count << endl;
	//count = 0;
    return 0;
}