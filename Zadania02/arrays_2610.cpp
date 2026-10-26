int main{
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
}