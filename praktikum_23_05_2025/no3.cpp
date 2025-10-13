#include <iostream>
using namespace std;

float hitungRataRata(float tugas, float uts, float uas) {
    return (0.2 * tugas) + (0.4 * uts) + (0.4 * uas);
}

int main() {
    string nama, nim;
    float tugas, uts, uas;

    cout << "Nama: ";
    getline(cin, nama);
    cout << "NIM : ";
    getline(cin, nim);
    cout << "Nilai Tugas: ";
    cin >> tugas;
    cout << "Nilai UTS  : ";
    cin >> uts;
    cout << "Nilai UAS  : ";
    cin >> uas;

    float rata = hitungRataRata(tugas, uts, uas);

    cout << "\n=== Hasil ===\n";
    cout << "Nama : " << nama << endl;
    cout << "NIM  : " << nim << endl;
    cout << "Tugas: " << tugas 
		<< "\n UTS: " << uts 
		<< "\n UAS: " << uas << endl;
    cout << "Rata-rata Nilai: " << rata << endl;

    return 0;
}
