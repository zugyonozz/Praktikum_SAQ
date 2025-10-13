#include <iostream>
using namespace std;

struct Mhs{ // syntax : struct nama_objek {member};
	string nama;
	string NIM;
	int SKS;
};

void showMhs(Mhs mahasiswa);

int main(){
	// deklarasi obj Mhs
	Mhs mhs1, mhs2;

	// isi member dari Obj Mhs
	// cara 1 ----> isi satu persatu membernya
	mhs1.nama = "Budi";
	mhs1.NIM = "202431000";
	mhs1.SKS = 20;

	// cara 2 ----> isi langsung semua membernya sesuai urutan
	mhs2 = {"Ayu", "202431001", 22};

	// tampilkan isi obj Mhs
	// cara manual
	cout << "Nama\t: " << mhs1.nama
		 << "\nNIM\t: " << mhs1.NIM
		 << "\nSKS\t: " << mhs1.SKS << endl;

	// cara 2
	showMhs(mhs2);

	return 0;
}

void showMhs(Mhs mahasiswa){
	cout << "\n--------------------------------------\n";
	cout << "Nama\t: " << mahasiswa.nama
		 << "\nNIM\t: " << mahasiswa.NIM
		 << "\nSKS\t: " << mahasiswa.SKS << endl;
}