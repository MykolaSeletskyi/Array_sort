#include "array processing.h"
#include "sortings.h"
#include<conio.h>
void random_array(int* arr, int size) {
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = (rand() % 100);
	}
}
void show_array(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		if (i % 10 == 0)
		{
			cout << endl;
		}
		cout << arr[i] << " ";
	}
	cout << endl;
}
void element_search(int* arr, int size)
{
	int number = 0;
	bool was_found = false;
	cout << "Enter search number _ ";
	cin >> number;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == number)
		{
			was_found = true;
			cout << "Index = " << i << endl;
		}
	}
	if (!was_found)
	{
		cout << "NUMBER NOT FOUND" << endl;
		Sleep(500);
	}
}
void sort_array(int* arr, int size)
{
	system("cls");
	bool parameter_sort=true;
	bool graphic_sorting=true;
	cout << "1) graphic sorting" << endl;
	cout << "2) sorting" << endl;
	cout << "3) EXIT" << endl;
	while (true)
	{
		switch (_getch())
		{
		case 49:
			graphic_sorting = true;
			break;
		case 50:
			graphic_sorting = false;
			break;
		case 51:
			return;
			break;
		default:
			continue;
		}
		break;
	}
	system("cls");
	cout << "1) 1..9" << endl;
	cout << "2) 9..1" << endl;
	cout << "3) EXIT" << endl;
	while (true)
	{
		switch (_getch())
		{
		case 49:
			parameter_sort = true;
			break;
		case 50:
			parameter_sort = false;
			break;
		case 51:
			return;
			break;
		default:
			continue;
		}
		break;
	}
	system("cls");
	cout << "Type sorting " << endl;
	cout << "1) inserts sorting" << endl;
	cout << "2) bubble sorting" << endl;
	cout << "3) selection sorting" << endl;
	cout << "4) EXIT" << endl;
	while (true)
	{
		switch (_getch())
		{
		case 49:
			inserts_sort(arr, size, parameter_sort, graphic_sorting);
			break;
		case 50:
			bubble_sort(arr, size, parameter_sort, graphic_sorting);
			break;
		case 51:
			selection_sort(arr, size, parameter_sort, graphic_sorting);
			break;
		case 52:
			return;
			break;
		default:
			continue;
		}
		break;
	}


	//inserts_sort(arr, size, true);//true зростання false спадання
}

