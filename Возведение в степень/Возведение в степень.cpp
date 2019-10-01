// Возведение в степень.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Реализовать функцию возведения числа a в степень b:
// а. Без рекурсии.
// б. Рекурсивно.
// с. *Рекурсивно, используя свойство чётности степени.
#include <iostream>
void Power(int b, int a) // Функция возведения в степень без рекурсии
{
	using namespace std;
	cout << "Enter number: ";
	cin >> a;
	cout << "Enter power: ";
	cin >> b;
	int nsave = a;
	if (b == 0) { cout << 1 << endl; }
	for (int i = 1; i < b; i++)
	{
		a *= nsave;
	}
	cout << a << endl;
}


int RecursivePow(int base, int power) // Функция возведения в степень с рекурсией
{
	return power == 1 ? base : base * RecursivePow(base, power - 1);
}

void PowProperty(int i, int x, int y, int y1) // используя свойство чётности степени
{
	if (y > 2) {
		x *= x;
		y -= 2;
		PowProperty(i, x, y, y1);
	}
	else if (y == 1) {
		x *= i;
		y--;
		PowProperty(i, x, y, y1);
	}
	else {
		std::cout << i << "^" << y1 << " = " << x;
	}
}
using namespace std;
int main()
{
	int b = 0, a = 0, i = 1, nsave = 0;
	Power(b, a); // без рекурсии
	cout << "Enter number: ";
	cin >> a;
	cout << "Enter power: ";
	cin >> b;
	std::cout << RecursivePow(a, b) << std::endl; // с рекурсией
	PowProperty(a, a * a, b - 2, b); // используя свойство чётности степени
	getchar();
	getchar();
	return 0;
}


