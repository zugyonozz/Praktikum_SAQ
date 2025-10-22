#include <iostream>
using namespace std ;

int main() {
	// kode
	// 1 = mahasiswa
	// 2 = dosen
	// 3 = orang luar
	int kode = 1 ;

	switch(kode) {
		case 1 : 
		case 2 : cout << "kode 1 & 2 adalah bagian dari kampus.\n" ; break ;
		case 3 : cout << "kode 3 bukan bagian dari kampus.\n" ; break ;
		default : cout << "kode tidak terdefinisi.\n" ;
	}
	
	return 0 ;
}