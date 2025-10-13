#include <iostream>
#include <iomanip>
using namespace std ;

class jenisKendaraan {
private :
	string jenis ;
	string medan ;
	int jumlahRoda ;

public :
	jenisKendaraan() = default ;
	jenisKendaraan(string jenis, string medan, int jumlahRoda) {
		this->jenis = jenis ;
		this->medan = medan ;
		this->jumlahRoda = jumlahRoda ;
	}
	string getJenis() {
		return this->jenis ;
	}
	string getMedan() {
		return this->medan ;
	}
	int getJumlahRoda() {
		return this->jumlahRoda ;
	}
} ;

class hargaKendaraan {
private :
	jenisKendaraan tipe ;
	double harga ;

public :
	hargaKendaraan(jenisKendaraan tipe, double harga) {
		this->tipe = tipe ;
		this->harga = harga ;
	}
	void print() {
		cout << "Jenis\t\t: " << this->tipe.getJenis() << "\n" ;
		cout << "Medan\t\t: " << this->tipe.getMedan() << "\n" ;
		cout << "Jumlah Roda\t: " << this->tipe.getJumlahRoda() << "\n" ;
		cout << "Harga\t\t: " << fixed << setprecision(1) << this->harga << "\n" ;
	}
} ;

int main() {
	hargaKendaraan mobil(
		jenisKendaraan{
			"Mobil",
			 "Daratan",
			  4
			},
		100000000.0
	) ;
	mobil.print() ;
	return 0 ;
}