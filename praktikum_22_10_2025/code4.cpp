#include <iostream>
using namespace std ;

int main() {
	int menu ;
	float a, b ;

	cout << "Kalkulator SAQ\n" ;
	
	while(true) {
		cout << "\n1. Penjumlahan\n" ;
		cout << "2. Pengurangan\n" ;
		cout << "3. Pekalian\n" ;
		cout << "4. Pembagian\n" ;
		cout << "5. Keluar\n" ;
		
		cout << "\nPilih menu\t\t: " ; cin >> menu ;
		
		if (menu == 5) {
			break ;
		} else if (menu < 1 || menu > 5) {
			cout << "Menu tidak terdefinisi!.\n" ;
			continue ;
		}
		
		cout << "Masukkan angka pertama\t: " ; cin >> a ;
		cout << "Masukkan angka kedua\t: " ; cin >> b ;
		
		switch (menu) {
			case 1 : cout << "Hasil operasi\t\t: " << a + b << endl ; break ;
			case 2 : cout << "Hasil operasi\t\t: " << a - b << endl ; break ;
			case 3 : cout << "Hasil operasi\t\t: " << a * b << endl ; break ;
			case 4 : cout << "Hasil operasi\t\t: " << a / b << endl ; break ;
		}
	}
	
	cout << "Terima kasih.\n" ;
	return 0 ;
}