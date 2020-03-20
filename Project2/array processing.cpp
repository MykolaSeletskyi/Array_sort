#include "array processing.h"
#include "sortings.h"
void random_array(int* arr, int size) {
	srand(time(0));
	system("cls");
	for (int i = 0; i < size; i++)
	{
		arr[i] = (rand() % 50);
	}
	cout << "Array is full" << endl;
	system("pause");
}
void show_array(int* arr, int size) {
	system("cls");
	for (int i = 0; i < size; i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
	system("pause");
}
void element_search(int* arr, int size)
{
	system("cls");
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
	}
	system("pause");
}
void sort_array(int* arr, int size)
{
	system("cls");
	bool parameter_sort=true;
	bool graphic_sorting=true;
	cout << "1) Graphic sorting" << endl;
	cout << "2) Sorting" << endl;
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
	cout << "1) Inserts sorting" << endl;
	cout << "2) Bubble sorting" << endl;
	cout << "3) Selection sorting" << endl;
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
	system("pause");
}
void average_array(int* arr, int size)
{
	system("cls");
	int sum_evement_array = 0;
	for (int i = 0; i < size; i++)
	{
		sum_evement_array += arr[i];
	}
	cout << "Average = " << sum_evement_array / size << endl;
	system("pause");
}
void multiples_of_5(int* arr, int size)
{
	int count = 0;
	system("cls");
	int sum_evement_array = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i]%5==0)
		{
			count++;
		}
	}
	cout << "Multiples of 5 = " << count << endl;
	system("pause");
}

void move_array(int* arr, int size)
{	
	system("cls");
	int number_of_feats=0;
	cout << "number feats = ";
	cin >> number_of_feats;
	system("cls");
	cout << "1) ->Right" << endl;
	cout << "2) <-Left" << endl;
	cout << "3) EXIT" << endl;

	while (true)
	{
		switch (_getch())
		{
		case 49:
			std::rotate(arr, arr + (size- number_of_feats), arr + size); // вправо
			break;
		case 50:
			std::rotate(arr, arr + number_of_feats, arr + (size)); // влево
			break;
		case 51:
			return;
			break;
		default:
			continue;
		}
		break;
	}
}

