#include <iostream>
using namespace std ;

int main() {
	float var;
	
	cout << "Masukkan angka:";
	cin >> var;

	switch(var) {
		case 1.1 : cout << "var : " << 1 << endl ;
		case 2.3 : cout << "var : " << 2 << endl ; break ;
		case 3.3 : cout << "var : " << 3 << endl ; break ;
		default : cout << "var bukan di antaranya\n" ;
	}
	
	return 0 ;
}