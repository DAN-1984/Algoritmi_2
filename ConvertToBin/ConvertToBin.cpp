// ConvertToBin.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Реализовать функцию перевода чисел из десятичной системы в двоичную, используя рекурсию.

#include <iostream>
#include <stdio.h>

void ConvertBin(__int64 N, __int64 i, __int64 & binary)
{
	if (N <= 0) return;
	binary += (N % 2) * i;
	N = N / 2;
	i *= 10;
	ConvertBin(N, i, binary);
}

using namespace std;
int main()
{
	__int64 N;
	while (1)
	{
		cout << "Enter number: ";
		cin >> N; // при использовании scanf выдает ошибку
		__int64 i = 1, binary = 0;
		ConvertBin(N, i, binary);
		cout << "Convert to bin: "<< binary << endl;
	}
	return 0;
}



