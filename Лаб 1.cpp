#include <math.h>
#include <iostream>
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
 	const int B=6, C=3, D=2, E=4, K=2, L=5;
 	double x,y,z,a,t;
 	cout<<" Введіть значення змінної а = ";
 	cin>>a;
 	t=(B*a+cos(a-C));
 	x=t/(B*a+cos(a-C));
 	y=(a+x+pow(x,K))/(sin(x));
 	z=fabs(x-y+L);
 	SetColor(10,0);
 	printf("Результат x = %5.3f\n",x);
 	SetColor(11,1);
 	printf("Результат y = %5.3f\n",y);
 	SetColor(9,2);
 	printf("Результат z = %5.3f\n",z);
 	SetColor(7,0);
 	system("pause");
 	return 0;	
 }
