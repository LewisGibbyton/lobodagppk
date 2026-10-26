#include <iostream>
#include <string>

using namespace std;

// Funkcja sprawdzająca, czy rok jest przestępny
bool jestRokPrzestepny(int rok) {
    if (rok % 4 == 0) {
        if (rok % 100 == 0) {
            if (rok % 400 == 0) {
                return true; // Jest przestępny (np. 2000)
            } else {
                return false; // Nie jest (np. 1900)
            }
        } else {
            return true; // Jest (np. 2024)
        }
    }
    return false; // Nie jest (np. 2023)
}

int main() {
    int d1, m1, y1;
    int d2, m2, y2;

    cout << "--- Kalkulator Roznicy Dat (Wersja czytelna) ---" << endl;
    
    cout << "Podaj date poczatkowa (dz Miesiac Rok, np. 01 01 2020): ";
    if (!(cin >> d1 >> m1 >> y1)) return 1;

    cout << "Podaj date koncowa (dz Miesiac Rok, np. 01 01 2024): ";
    if (!(cin >> d2 >> m2 >> y2)) return 1;

    // Funkcja pomocnicza do obliczania sumy dni
    auto obliczDni = [&](int d, int m, int y) {
        long long sumaDni = 0;

        // 1. Dodajemy dni za wszystkie pełne lata przed tym aktualnym
        for (int i = 1; i < y; i++) {
            if (jestRokPrzestepny(i)) {
                sumaDni += 366;
            } else {
                sumaDni += 365;
            }
        }

        // 2. Dodajemy dni za miesiące w bieżącym roku
        int dniWMiesiacu[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        // Jeśli rok jest przestępny, luty ma 29 dni
        if (jestRokPrzestepny(y)) {
            dniWMiesiacu[1] = 29;
        }

        for (int i = 0; i < m - 1; i++) {
            sumaDni += dniWMiesiacu[i];
        }

        // 3. Dodajemy dni z bieżącego miesiąca
        sumaDni += d;

        return sumaDni;
    };

    long long total1 = obliczDni(d1, m1, y1);
    long long total2 = obliczDni(d2, m2, y2);

    long long roznica = total2 - total1;

    if (roznica < 0) {
        cout << "Uwaga: Data koncowa jest przed datą początkową!" << endl;
        roznica = -roznica;
    }

    cout << "--------------------------------" << endl;
    cout << "Roznica to: " << roznica << " dni." << endl;
    cout << "To odpowiada okolo: " << roznica / 7 << " tygodni." << endl;
    cout << "--------------------------------" << endl;

    return 0;
}
