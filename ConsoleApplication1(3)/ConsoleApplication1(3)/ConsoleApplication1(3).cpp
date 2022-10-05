/* file name: ConsoleApplication1(3).sln
* студент: Позейчук Андрій Володимирович
* група: КН-1-2
* дата створення: 01/09/2022
* лабораторна робота №1
* тема: алгоритмізація та програмування задач лінійної структури
* завдання: Розробити програмний код мовою С\С++ для відображення дерева в
текстовому режимі, з використанням для певних елементів різних кольорів.
Зображення має бути в стилі японських кросвордів.
*/

#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

void SetColor(int text, int background)
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void gotoxy(int xp, int yp)
{
    COORD new_xy;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    new_xy.X = xp; new_xy.Y = yp;
    SetConsoleCursorPosition(hStdOut, new_xy);
}

int main()
{
    system("cls");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    system("color 16");
    SetColor(2, 1);
    cout << endl;
    gotoxy(10, 2);
    SetColor(2, 1);
    cout << "     $$$$    " << endl;
    gotoxy(10, 3);
    cout << "    $$$$$$   " << endl;
    gotoxy(10, 4);
    cout << "   $$$$$  $   " << endl;
    SetColor(4, 1);
    gotoxy(17, 4);
    cout << "(%)";
    SetColor(2, 1);
    gotoxy(10, 5);
    cout << "  $$$$$$$$$$" << endl;
    gotoxy(10, 6);
    cout << " $$$$$$$$$$$$" << endl;
    gotoxy(10, 7);
    cout << "$$$$$ $$$$$$$$" << endl;
    SetColor(4, 1);
    gotoxy(15, 7);
    cout << "(%)";
    SetColor(2, 1);
    gotoxy(9, 8);
    cout << "$$$$$$$$$$$$$  $ " << endl;
    SetColor(4, 1);
    gotoxy(21, 8);
    cout << "(%)";
    SetColor(2, 1);
    gotoxy(9, 9);
    cout << "$  $$$$$$$$$$$$$ " << endl;
    SetColor(4, 1);
    gotoxy(10, 9);
    cout << "(%)";
    SetColor(2, 1);
    gotoxy(10, 10);
    cout << "$$$$$$$$$$$$$$" << endl;
    gotoxy(10, 11);
    cout << " $$$$$$$$$  $" << endl;
    SetColor(4, 1);
    gotoxy(19, 11);
    cout << "(%)";
    SetColor(2, 1);
    gotoxy(10, 12);
    cout << "  $$$$$$$$$$" << endl;
    gotoxy(10, 13);
    cout << "   $$  $$$$   " << endl;
    SetColor(4, 1);
    gotoxy(14, 13);
    cout << "(%)";
    SetColor(2, 1);
    gotoxy(10, 14);
    cout << "    $$$$$$   " << endl;
    gotoxy(10, 15);
    SetColor(6, 1);
    cout << "     &&&&   " << endl;
    gotoxy(10, 16);
    cout << "      &&   " << endl;
    gotoxy(10, 17);
    cout << "      &&   " << endl;
    gotoxy(10, 18);
    cout << "      &&   " << endl;
    gotoxy(10, 19);
    cout << "      &&   " << endl;
    gotoxy(10, 20);
    cout << "      &&   " << endl;
    gotoxy(10, 21);
    cout << "     &&&&   " << endl;
    gotoxy(10, 22);
    cout << "    &&&&&&   " << endl;
    gotoxy(6, 23);
    SetColor(2, 0);
    cout << "%%%%%%%%%%%%%%%%%%%%%%" << endl;
    gotoxy(0, 0);
    SetColor(1, 1);
    system("pause");
    return 0;
}


