#include <iostream>
using namespace std;

int main() {
    string dataMhs[50][2]; // {[50] digunakan untuk total mahasiswa yang di tampung
	// [2] ini digunakan untuk mengisi nama dan NIM = {nama, NIM};

	// index                         0             1              2        .....
	// dataMhs[colom][baris] = {{Nama, NIM}, {Nama1, NIM1}, {Nama2, NIM2}, dst}

    int opsi, index = 0; // opsi menampung data input menu
	// index = 0 yang digunakan untuk menunjukkan seberapa banyak data yang telah diisi
    bool menu = true; // digunakan untuk mengontrol jalannya perulangan while

    while (menu) { 
        cout << "========================================================" << endl;
        cout << " APLIKASI DATA MAHASISWA " << endl;
        cout << " 1. TAMBAH DATA MAHASISWA " << endl;
        cout << " 2. TAMPILKAN MAHASISWA " << endl;
        cout << " 3. KELUAR PROGRAM " << endl;
        cout << "========================================================" << endl;
        cout << " MASUKKAN MENU: ";
        cin >> opsi;
        cout << "========================================================" << endl;

        switch (opsi) {
            case 1:
				cout << " Masukkan Nama Mahasiswa  : ";
				cin >> dataMhs[index][0]; // dataMhs[0][0] -> dataMhs[1][0]
				cout << " Masukkan NIM Mahasiswa   : ";
				cin >> dataMhs[index][1]; // dataMhs[0][1] -> dataMhs[1][1]
				index++;
                break;

            case 2:
                if (index == 0) {
                    cout << "Belum ada data mahasiswa!" << endl;
                } else {
                    for (int i = 0; i < index; i++) {
                        cout << "Nama : " << dataMhs[i][0] << endl;
                        cout << "NIM  : " << dataMhs[i][1] << endl;
                    }
                }
                break;

            case 3:
                menu = false;
                break;

            default:
                cout << "Menu tidak ada dalam pilihan!" << endl;
                break;
        }
    }
    cout << "bye bye..." << endl;
    return 0;
}
// representasi dari array2d sama hal nya seperti matriks
// dataMhs[kolom][baris] = 
// 	baris/kolom	0     |    1    |     2    
//         0.  Rafi   |   yono  |    budi    ----> dataMhs[1][1] = 124
//         1.  123    |   124   |    125


// 1. apa yang terjadi jika index nilainya tidak diisi / tidak diinisialisasikan?
