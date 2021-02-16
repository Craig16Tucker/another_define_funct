#include <iostream>
#include <stdlib.h>
#include <ctime>

using std::cout;
using std::cin;
using std::string;
using std::swap;

// ������� ��� �������� ������� � ��������� �������� � ��������� 1-50.
int* randomArrayNum(int* arr)
{
	srand(time(NULL));

	cout << "\n��������� ������ ���������� �������";
	for (int i = 0; i < 5; i++)
	{
		arr[i] = 1 + rand() % (50 - 1);
	}

	return arr;
}

// ������� ��� ������ �������� ������� �� �����.
void printArr(int* arr)
{
	cout << "\n������: \n";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ";  ";
	}
	cout << "\n";
}

// ������� ��� ������ ������������ ��������.
void min(int* arr)
{
	cout << "\n��� ����� ������������ ��������: ";
	int min = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "\n���������: " << min << "\n";
}

// ������� ��� ������ ������������� ��������.
void max(int* arr)
{
	cout << "\n��� ����� ������������� ��������: ";
	int max = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "\n���������: " << max << "\n";
}

// ������� ��� ���������� �������.
int* sor(int* arr)
{
	int temp = 0;
	cout << "\n���������� ����������";

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
	cout << "\n���������: ";

	for (int i = 0; i < 5; i++) 
	{
		cout << arr[i] << ";  ";
	}
	return arr;
}

// ������� ��� ������ �������� �� ������
int* change(int* arr)
{
	int change = 0;
	
	cout << "\n����� ������� �� ������ ��������?\n";
	cin >> change;
	if (change < 1 || change > 5)
	{
		cout << "\n������! � ������� 5 ���������";
		return 0;
	}
	else
	{
		cout << "\n����� �������� ������ ��� ���������?\n";
		cin >> arr[change - 1];
		if (arr[change - 1] > 50 || arr[change - 1] < 1)
		{
			cout << "\n������";
			return 0;
		}
	}

	cout << "\n���������: ";

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ";  ";
	}
	return arr;
}
