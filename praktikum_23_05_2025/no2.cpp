#include <iostream>
using namespace std;

int main() {
    int matriks[4][3] = {
        {5, 18, 7},
        {2, 30, 11},
        {25, 1, 14},
		{9, 22, 6}
    };

    int maks = matriks[0][0];
    int min = matriks[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriks[i][j] > maks) {
				maks = matriks[i][j];
			}
            if (matriks[i][j] < min) {
				min = matriks[i][j];
			}
        }
    }

    cout << "Nilai maksimum: " << maks << endl;
    cout << "Nilai minimum: " << min << endl;

    return 0;
}
