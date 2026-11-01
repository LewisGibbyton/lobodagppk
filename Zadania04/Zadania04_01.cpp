#include <iostream>
#include <random>


using namespace std;


void zamien(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}


void losuj_tablice(int t[], const int N) {
	for (int i = 0; i < N; ++i) {
		t[i] = rand() % 100;
	}

}

void wypisz(int t[], const int N) {
	for (int i = 0; i < N; ++i) {
		cout << "[" << t[i] << "]" << " ";
	}
}

int sortowanie_babelkowe(int t[], const int N) {
	bool zamieniona;
	int liczba_zmian = 0;

	for (int i = 0; i <= N; i++) {
		zamieniona = false;
		for (int j = 0; j < N - 1; j++)
		{
			if (t[j] > t[j + 1]) {
				zamien(t[j + 1], t[j]);
				zamieniona = true;
				liczba_zmian++;
			}

		}
		if (!zamieniona)
		{
			break;
		}
	}
	return liczba_zmian;
}


int main() {
	srand(time(NULL));
	const int N = 10;
	int t[N];

	losuj_tablice(t, N);
	wypisz(t, N);
	sortowanie_babelkowe(t, N);
	cout << endl;
	wypisz(t, N);
}