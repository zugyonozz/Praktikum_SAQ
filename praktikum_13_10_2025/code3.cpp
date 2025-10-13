#include <iostream>
using namespace std;

int main() {
    int usia;
    cout << "Masukkan usia: " ;
    cin >> usia ;

    if (usia >= 21) {
        cout << "Anda sudah dewasa penuh.\n" ;
    } else if (usia >= 18) {
        cout << "Anda telah memasuki usia dewasa muda.\n" ;
    } else if (usia >= 12) {
        cout << "Anda masih remaja.\n" ;
    } else {
        cout << "Anda masih kanak-kanak.\n" ;
    }

    return 0;
}