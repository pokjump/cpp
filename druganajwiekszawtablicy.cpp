#include <iostream>
using namespace std;

int tabela[] = {1, 2, 5, 3, 10, 21, 37};
//int tabela[] = {21};
int najwieksza = 0;
int drugaNajwieksza = -1;

void znajdzDrugaNajwieksza() {
    int dlugoscTabeli = size(tabela);
    for (int i = 0; i < dlugoscTabeli; i++) {
        if (tabela[i] > najwieksza) {
            drugaNajwieksza = najwieksza;
            najwieksza = tabela[i];
        } else if (tabela[i] > drugaNajwieksza && tabela[i] != najwieksza) {
            drugaNajwieksza = tabela[i];
        }
    }

    if (dlugoscTabeli > 1) {
        cout << drugaNajwieksza << " to druga najwieksza wartosc funkcji";
    } else {
        cout << najwieksza << " to najwyzsza wartosc funkcji, ktora ma dlugosc " << dlugoscTabeli;
    }
}

int main() {
    znajdzDrugaNajwieksza();
    return 0;
}
