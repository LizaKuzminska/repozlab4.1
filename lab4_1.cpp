// lab4_1.cpp 
// Кузьмінська Єлизавета
// Лабораторна робота № 4.1
// Цикли
// Варіант 10

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int  N, i;
	double P;
	cout << "N = "; cin >> N;

	P = 1;
	i = N;
	while (i <= 16)
	{
		P *= ((1. * i) * N) / ((1. * i) * (1. * i) + N * N);
		i++;
	}
	cout << P << endl;

	P = 1;
	i = N;
	do {
		P *= ((1. * i) * N) / ((1. * i) * (1. * i) + N * N);
		i++;
	} while (i <= 16);
	cout << P << endl;

	P = 1;
	for (i = N; i <= 16; i++)
	{
		P *= ((1. * i) * N) / ((1. * i) * (1. * i) + N * N);
	}
	cout << P << endl;

	P = 1;
	for (i = 16; i >= N; i--)
	{
		P *= ((1. * i) * N) / ((1. * i) * (1. * i) + N * N);
	}
	cout << P << endl;

	return 0;
}
