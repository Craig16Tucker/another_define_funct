#include "Def.h"

void main()
{
	setlocale(LC_ALL, "Rus");

	cout << "\n������� ������";
	INTEGER* arr = new INTEGER[5];

	randomArrayNum(arr);
	printArr(arr);
	min(arr);
	max(arr);
	sor(arr);
	change(arr);
}