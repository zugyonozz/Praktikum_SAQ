#include <iostream>
using namespace std;

int main(){
	struct{
		char nim[5];
		char nama[15];
		float nilai;
	}mhs[5];

	for(int i = 0; i < 5; i++){
		cout << "Masukkan Nama\t: ";
		cin >> mhs[i].nama;
		cout << "Masukkan NIM\t: ";
		cin >> mhs[i].nim;
		cout << "Masukkan nilai\t: ";
		cin >> mhs[i].nilai;
		cout << "\n--------------------------\n";
	}

	cout << "data yang telah dimasukkan\n";
	for(auto& i : mhs){
		cout << endl;
		cout << "Nama\t: " << i.nama << "\n";
		cout << "NIM\t: " << i.nim << "\n";
		cout << "Nilai\t: " << i.nilai << "\n";
		cout << endl;
	}

	return 0;
}