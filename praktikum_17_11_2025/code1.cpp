#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Koordinat Kartesius\n";
    cout << "Masukkan X : "; cin >> x;
    cout << "Masukkan Y : "; cin >> y;

    cout << "\nKoordinat (" << x << ", " << y << ") berada di ";

    if (x > 0) {
        if (y > 0) {
            cout << "Kuadran I\n";
        } else if (y < 0) {
            cout << "Kuadran IV\n";
        } else {
            cout << "Sumbu X (Positif)\n"; 
        }
    } else if (x < 0) {
        if (y > 0) {
            cout << "Kuadran II\n";
        } else if (y < 0) {
            cout << "Kuadran III\n";
        } else {
            cout << "Sumbu X (Negatif)\n";
        }
    } else {
        if (y > 0) {
            cout << "Sumbu Y (Positif)\n"; 
        } else if (y < 0) {
            cout << "Sumbu Y (Negatif)\n";
        } else {
            cout << "Titik Pusat (Origin)\n";
        }
    }
    return 0;
}