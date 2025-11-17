#include <iostream>
using namespace std ;

int main() {
	int kode = 0 ;
	cout << "kode : " ; cin >> kode ;
	
	switch(kode) {
		case 31 : cout << "Teknik Informatika\n" ; break ;
		case 32 : cout << "Sistem Informasi\n" ; break ;
		default : cout << "Kode tidak terdaftar\n" ; break ;
	}
}