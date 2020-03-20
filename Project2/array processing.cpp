#include "array processing.h"
#include "sortings.h"
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
		if (arr[i]== number)
		{
			was_found = true;
			cout << "Index = " << i<<endl;
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
	bool parameter_sort;
	bool show_sort;
	cout << "1) grapfick sort";
	//inserts_sort(arr, size, true);//true зростання false спадання
}

