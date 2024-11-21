#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int wyniki[6];
void rzut() {
    for (int i = 0; i < 6; i++) {
        int los = rand() % 5 + 1;
        wyniki[los - 1] += 1;
    }
}

int main() {
    srand(time(NULL));
    rzut();
    for (int i = 0; i < 6; i++) {
        cout << i + 1 << " wylosowano " << wyniki[i] << " razy." << endl;
    }
    return 0;
}
