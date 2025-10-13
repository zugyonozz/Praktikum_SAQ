#include <iostream>
using namespace std ;

int main () {
	int var1 , var2, hasil ;
	char oper ;

	cout << "----------------------------\n" ;
	cout << "      Kalkulator SAQ\n" ;
	cout << "----------------------------\n" ;
	cout << "Masukkan nilai 1\t: " ;
	cin >> var1 ;
	cout << "Masukkan operator\t: " ;
	cin >> oper ;
	cout << "Masukkan nilai 2\t: " ;
	cin >> var2 ;

	if (oper == '+') {
		hasil = var1 + var2 ;
	} else if (oper == '-') {
		hasil = var1 - var2 ;
	} else if (oper == '*') {
		hasil = var1 * var2 ;
	} else if (oper == '/') {
		hasil = var1 / var2 ;
	} else {
		cout << "operator aritmatika tidak terdefinisi!\n" ;
		return -1 ;
	}

	cout << "Hasil\t\t\t: " << hasil ;
}