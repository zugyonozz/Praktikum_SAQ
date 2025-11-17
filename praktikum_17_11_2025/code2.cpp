#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Koordinat Kartesius\n";
    cout << "Masukkan X : "; cin >> x;
    cout << "Masukkan Y : "; cin >> y;

    cout << "\nKoordinat (" << x << ", " << y << ") berada di ";
    int state = x * y; 
    
    if (state > 0) {
        if (x > 0) {
            cout << "Kuadran I\n";
        } else {
            cout << "Kuadran III\n";
        }
    } else if (state < 0) {
        if (x > 0) {
            cout << "Kuadran IV\n"; 
        } else {
            cout << "Kuadran II\n"; 
        }
    } else {
        if (x != 0) {
            cout << "Sumbu X\n"; 
        } else if (y != 0) {
            cout << "Sumbu Y\n";
        } else {
            cout << "Titik Pusat (Origin)\n";
        }
    }
    return 0;
}