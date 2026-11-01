// Zadania04.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;


void zamien(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

constexpr unsigned long int fib_iter(unsigned int n)
{
	long int x = 0;
	long int y = 1;
	long int wynik;
	for (int i = 2; i <= n; i++)
	{
		wynik = x + y;
		x = y;
		y = wynik;
	}
	return wynik;
}
consteval unsigned long int fib_rek(unsigned int n)
{
	if (n <= 0)
	{
		return 0;
	} else if (n == 1){
		return 1;
	} else
	{
		return fib_rek(n - 1) + fib_rek(n - 2);
	}
}

auto srednia_kroczaca(auto nowa_liczba) {
	
	static int liczba_wywolan = 0;
	static double suma;
	liczba_wywolan++;
	suma += nowa_liczba;

	return suma / liczba_wywolan;

}

int main()
{
	int a = 10;
	int b = 20;
	cout << "przed zamiana a i b: " << a << " i " << b << "\n";

	zamien(a, b);

	cout << "po zamianie " << a << " i " << b;

	cout << "\n-------------\n";
	
	cout << "wynik wynosi " << fib_iter(45);
	
	cout << "\nwynik dla rekurencji wynosi: " << fib_rek(12) << "\n";
	srednia_kroczaca(10);
	srednia_kroczaca(20);
	srednia_kroczaca(0);

	cout << srednia_kroczaca(0);
}
