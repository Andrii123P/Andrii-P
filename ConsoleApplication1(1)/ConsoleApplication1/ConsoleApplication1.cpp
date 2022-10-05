/* file name: ConsoleApplication1.sln
* студент: Позейчук Андрій Володимирович
* група: КН-1-2
* дата створення: 30/09/2022
* лабораторна робота №1
* тема: алгоритмізація та програмування задач лінійної структури
* завдання: розробити блок-схему алгоритму для обчислення величин, що
задані виразами, та реалізувати його мовою С\С++ відповідно варіанту
індивідуального завдання, що наведено у таблиці Г.1 з додатку Г
*/

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <windows.h>
#define _USE_MATH_DEFINES
#include <cmath>

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
    const int A = 2, B = 3, C = 8, E = 4, L = 11;
    double  Z1, Z2, Z3, alpha, pi = 2 * asin(1.0);
    cout << " Введіть значення змінної alpha = ";
    cin >> alpha;
    Z1 = (pow((cos(B*pi/C-alpha/E)), A)-pow((cos(L*pi/C+alpha/E)), A));
    Z2 = (sqrt(A) / A * sin(alpha / 2));
    Z3 = (pow((cos(Z1 / pi)), A) - (pow((cos(pi / Z2)), A)));
    SetColor(10, 0);
    printf("Результат Z1 = %5.3f\n", Z1);
    SetColor(11,1);
    printf("Результат Z2 = %5.3f\n", Z2);
    SetColor(9, 2);
    printf("Результат Z3 = %5.3f\n", Z3);
    SetColor(7, 0);
    system("pause");
    return 0;
}

