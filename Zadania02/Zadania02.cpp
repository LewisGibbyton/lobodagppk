// Zadania02.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

void odliczanie(int sekundy) {
    switch (sekundy) {
        case(5):
            cout << "5... ";
            [[fallthrough]];
        case(4):
            cout << "4... ";
        case(3):
            cout << "3... ";
        case(2):
            cout << "2... ";
        case(1):
            cout << "1... Start!\n";
            break;
        default:
            cout << "Niepoprawna liczba\n";
    }
    
}

void policz_srednia() {
    // 1. Tworzymy tablice na miejscu w funkcji
    double s[] = { 1, 1, 1, 1, 2, 3, 5, 5, 5, 4, 4.5, 4.5, 3.5, 2, 3 };

    // 2. Tutaj sizeof(s) dziala, bo tablica powstala linijke wyzej!
    int n = sizeof(s) / sizeof(double);

    // 3. Liczymy sume w petli
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += s[i];
    }

    // 4. Wypisujemy gotowy wynik
    cout << "Liczba ocen: " << n << "\n";
    cout << "Srednia ocen: " << suma / n << "\n";
}


int main()
{
    cout << "--------------\n";
    odliczanie(2);
    odliczanie(8);
    cout << "--------------\n";
    policz_srednia();
    cout << "--------------\n";
    cout << "--------------\n";

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









