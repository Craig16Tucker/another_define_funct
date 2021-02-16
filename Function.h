#include <iostream>
#include <stdlib.h>
#include <ctime>

using std::cout;
using std::cin;
using std::string;
using std::swap;

// Функция для создания массива и случайных значений в диапазоне 1-50.
int* randomArrayNum(int* arr)
{
	srand(time(NULL));

	cout << "\nЗаполняем массив случайными числами";
	for (int i = 0; i < 5; i++)
	{
		arr[i] = 1 + rand() % (50 - 1);
	}

	return arr;
}

// Функция для вывода значений массива на экран.
void printArr(int* arr)
{
	cout << "\nМассив: \n";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ";  ";
	}
	cout << "\n";
}

// Функция для поиска минимального значения.
void min(int* arr)
{
	cout << "\nИдёт поиск минимального значения: ";
	int min = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "\nРезультат: " << min << "\n";
}

// Функция для поиска максимального значения.
void max(int* arr)
{
	cout << "\nИдёт поиск максимального значения: ";
	int max = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "\nРезультат: " << max << "\n";
}

// Функция для сортировки массива.
int* sor(int* arr)
{
	int temp = 0;
	cout << "\nПроисходит сортировка";

	for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j < 5; j++) 
		{
			if (arr[j] > arr[j + 1] & j + 1 != 5) 
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "\nРезультат: ";

	for (int i = 0; i < 5; i++) 
	{
		cout << arr[i] << ";  ";
	}
	return arr;
}

// Функция для замены элемента на другой
int* change(int* arr)
{
	int change = 0;
	
	cout << "\nКакой элемент вы хотите поменять?\n";
	cin >> change;
	if (change < 1 || change > 5)
	{
		cout << "\nОшибка! В массиве 5 элементов";
		return 0;
	}
	else
	{
		cout << "\nКакое значение хотите ему присвоить?\n";
		cin >> arr[change - 1];
		if (arr[change - 1] > 50 || arr[change - 1] < 1)
		{
			cout << "\nОшибка";
			return 0;
		}
	}

	cout << "\nРезультат: ";

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ";  ";
	}
	return arr;
}
