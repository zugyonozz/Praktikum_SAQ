#include <iostream>
using namespace std;

int main(){
	string dataMhs[25][2];
	int opsi, index = 0;
	bool menu = true;	
	while(menu){
		cout << "====================================" << endl;
		cout << "1. Tambah Data Mahasiswa" << endl;
		cout << "2. Tampilkan Data Mahasiswa" << endl;
		cout << "3. Keluar" << endl;
		cout << "====================================" << endl;
		cout << "Masukan pilihan : ";
		cin >> opsi;
		
		switch(opsi){
			case 1:
				cout << "Masukan Nama : ";
				cin >> dataMhs[index][0];
				cout << "Masukan NIM : ";
				cin >> dataMhs[index][1];
				index++;
				break;
			case 2:
				for(int col = 0; col < index; col++){
					cout << col << "\t|";
				}
				cout << endl << "---------------------------------" << endl;
				for(int col = 0; col < index; col++){
					if(col != 0){
						cout << dataMhs[col][0] << "\t| ";
					}else{
						cout << col << " | " << dataMhs[col][0] << "\t| ";
					}
				}
				cout << endl;
				for(int col = 0; col < index; col++){
					if(col != 0){
						cout << dataMhs[col][1] << "\t| ";
					}else{
						cout << col << " | " << dataMhs[col][1] << "\t| ";
					}
				}
				cout << endl;
				break;
			case 3:
				menu = false;
				break;
			default:
				cout << "Pilihan tidak tersedia" << endl;

		}
		cout << endl;
	}
	cout << "bye bye ...";
	return 0;
}