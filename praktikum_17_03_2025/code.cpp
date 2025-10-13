#include <iostream> // library untuk input output
using namespace std; 

int main(){ // program utama
	string dataMhs[10][2]; // struktur array2D {{Nama, NIM}, {Nama1, NIM1}, dst..}
	int ops, end = 0; // ops variabel menu, end variabel untuk index akhir dari data yang baru ditambahkan
	bool run = true; // variabel run buat penanganan looping program

	while(run){ 
		cout << "Aplikasi Pendataan Mahasiswa" << endl;
		cout << "1. Tambahkan Mahasiswa" << endl;
		cout << "2. Lihat Data Mahasiswa" << endl;
		cout << "3. Keluar" << endl;

		cout << "Masukkan Menu: ";
		cin >> ops;
		switch (ops){
		case 1:
			cout << "\nMasukkan nama mahasiswa: ";
			cin >> dataMhs[end][0]; // append data to Nama
			cout << "Masukkan NIM: ";
			cin >> dataMhs[end][1]; // append data to NIM
			end++;  // increment end agar index array2D bertambah1 setiap kali data baru ditambahkan
			break;
		case 2: 
			if(end == 0){ // jika array2D kosong maka tampilkan pesan data kosong
				cout << "\nData kosong" << endl << endl;
			}else{
				for(int i = 0; i < end; i++){ // looping untuk menampilkan data mahasiswa
					cout << endl << dataMhs[i][0] << "," << dataMhs[i][1] << endl; // menampilkan data mahasiswa
				}
			}
			break;
		case 3:
			run = false; // assign run = false agar keluar dari looping
			break;
		default: // nilai default jika opsi > 3 && opsi < 1
			cout << "\nMenu tidak tersedia" << endl << endl;
			break;
		}
	}

	return 0;
}