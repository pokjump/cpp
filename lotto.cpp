#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <algorithm>

int wyniki[6];

using namespace std;

void losowanieLotto() {
    for (int i = 0; i < 6; i++) {
        int liczba = rand() % 48 + 1;

        for (int j = 0; j < i; j++) {
            while (wyniki[j] == liczba) {
                liczba = rand() % 48 + 1;
            }
        }

        wyniki[i] = liczba;
    }

    int dlugoscTabeli = size(wyniki);
    sort(wyniki, wyniki + dlugoscTabeli);
}

int main() {
    srand(time(NULL));
    cout << "Trwa losowanie:" << endl;
    losowanieLotto();
    cout << "Wylosowane liczby to:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << wyniki[i] << " ";
    }
    return 0;
}
