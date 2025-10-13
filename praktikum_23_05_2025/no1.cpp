#include <iostream>
using namespace std;

int main() {
    int matriks[3][4] = {
        {10, 20, 5, 15},
        {8, 12, 18, 22},
        {14, 7, 11, 9}
    };

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	for (int i = 0; i < 3; i++){
		a += matriks[i][0];
		b += matriks[i][1];
		c += matriks[i][2];
		d += matriks[i][3];
	}
	cout << "Kolom 1: " << a << endl;
	cout << "Kolom 2: " << b << endl;
	cout << "Kolom 3: " << c << endl;
	cout << "Kolom 4: " << d << endl;

	    cout << "Jumlah tiap kolom:\n";
    for (int kolom = 0; kolom < 4; kolom++) {
        int jumlah = 0;
        for (int baris = 0; baris < 3; baris++) {
            jumlah += matriks[baris][kolom];
        }
        cout << "Kolom ke-" << kolom + 1 << ": " 
		<< jumlah << endl;
    }

    return 0;
}
