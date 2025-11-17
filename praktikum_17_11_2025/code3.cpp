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
        cout << "Kuadran " << ( x > 0 ? "I" : "III") << '\n';
    } else if (state < 0) {
		cout << "Kuadran " << ( x > 0 ? "IV" : "II") << '\n';
    } else {
        cout << ( x != 0 ? "Sumbu X" : (y != 0 ? "Sumbu Y" : "Origin")) << '\n';
    }
    return 0;
}