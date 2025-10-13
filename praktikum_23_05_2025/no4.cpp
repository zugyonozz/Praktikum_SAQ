#include <iostream>
using namespace std;

bool isGenap(int angka) {
    return angka % 2 == 0;
}

int main() {
    int data[] = {7, 9, 12, 7, 20, 5};

    cout << "Hasil pengecekan ganjil/genap:\n";
    for (int i = 0; i < 6; i++) {
        cout << "Angka " << data[i] << " adalah " 
             << (isGenap(data[i]) ? "Genap" : "Ganjil") << endl;
    }

    return 0;
}
