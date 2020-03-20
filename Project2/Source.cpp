#include <iostream>
#include<list>
#include "array processing.h"
using namespace std;
int main()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, 7);
	const int size_arr=20;
	int numbers[size_arr];	
	for (;;)
	{
		system("cls");
		cout << "1) Random array" << endl;
		cout << "2) Show array" << endl;
		cout << "3) Element search" << endl;
		cout << "4) Sort array" << endl;
		cout << "5) Average array" << endl;
		cout << "6) Multiples of 5" << endl;
		cout << "7) Move array" << endl;
		cout << "8) EXIT" << endl;
		while (true)
		{
			switch (_getch())
			{
			case 49://1
				random_array(numbers, size_arr);
				break;
			case 50://2
				show_array(numbers, size_arr);
				break;
			case 51://3
				element_search(numbers, size_arr);
				break;
			case 52://4
				sort_array(numbers, size_arr);
				break;
			case 53://5
				average_array(numbers, size_arr);
				break;
			case 54://6
				multiples_of_5(numbers, size_arr);
				break;
			case 55://7
				move_array(numbers, size_arr);
				break;
			case 56://8
				return 0;
				break;
			default:
				continue;
			}
			break;
		}
	}
    return 0;
}