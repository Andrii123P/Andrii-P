/* file name: ConsoleApplication2.sln
* студент: Позейчук Андрій Володимирович
* група: КН-1-2
* дата створення: 30/09/2022
* лабораторна робота №1
* тема: алгоритмізація та програмування задач лінійної структури
* завдання: розробити блок-схему алгоритму для розв‘язку задачі та
реалізувати його мовою С\С++ відповідно варіанту індивідуального завдання, що
наведено у таблиці Г.2 з додатку Г
*/



#include <iostream>
#include <math.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

int main()

{
	system("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 55");
	double a, V, S;
    cout << "Введіть а = ";
	cin >> a;
	V = pow(a,3);
	cout << "Об'єм =" << V << endl;
	SetColor(7, 0);
	S = pow(a,2);
	cout << "Площа =" << S << endl;
	SetColor(10, 0);
	system("pause");
	return 0;
}
