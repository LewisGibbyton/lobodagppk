// arrays_2610.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {

    cout << "sprawdzanie bez roku przestepnego";
    vector<int> arrdzien(32);
    vector<int> arrmiesiac(13);
    vector<int> arrdzienend(32);
    vector<int> arrmiesiacend(13);


    int dzien;
    int miesiac;
    int dzienend;
    int miesiacend;

    cout << "Podaj date początkową (D/M): ";
    cin >> dzien;
    cout << "/ ";
    cin >> miesiac;
    cout << "Podaj date początkową (D/M): ";
    cin >> dzienend;
    cout << "/ ";
    cin >> miesiacend;


    // Sprawdzenie, czy indeksy mieszczą się w zakresie
    if (dzien >= 0 && dzien < 32 && miesiac >= 0 && miesiac < 13) {
        arrdzien[dzien] = dzien - 1;
        arrmiesiac[miesiac] = miesiac - 1;
    }
    else {
        cout << "Podano niepoprawny dzień lub miesiąc!" << endl;
    }
    if (dzienend >= 0 && dzienend < 32 && miesiacend >= 0 && miesiacend < 13) {
        arrdzienend[dzienend] = dzienend - 1;
        arrmiesiacend[miesiacend] = miesiacend - 1;
    }
    else {
        cout << "Podano niepoprawny dzień lub miesiąc!" << endl;
    }
    int liczba_dni;
    switch (arrmiesiac[miesiac])
    {
    case 1:
        liczba_dni = arrdzien[dzien];

    case 2:
        
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    default:
        break;
    }



    return 0;
}









/*
    int relative[11] = {};


    for (int i = 0; i <= 10; i++) {
        cout << "podaj liczbę: ";
        cin >> relative[i];
        cout << endl;
    }


    for (int n = 0;n <= 10; n++) {
        cout << "liczba: " << relative[n] << endl;
    }
    cout << "-------------------\n";

    int najwieksza = relative[0];

    for (int liczba : relative) {
        if (najwieksza < liczba) {
            najwieksza = liczba;

        }
    }
    cout << "max to: " << najwieksza;
    cout << "------------------\n";
    const int N = 14;
    int tablica[N][N];

    // 1. Wypełnianie tablicy
    for (int w = 0; w < N; w++) {
        for (int k = 0; k < N; k++) {
            tablica[w][k] = (w + 1) * (k + 1);
        }
    }

    // 2. Wyświetlanie tablicy
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "  " << tablica[i][j];
        }
        cout << endl;
    }
    */


