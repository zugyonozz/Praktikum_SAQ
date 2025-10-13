#include <iostream>
using namespace std ;

class Transport { // objek transportasi
private : // 
	string medan ; // data untuk meda transportasi seperti laut, darat, udara
	int roda ; // jumlah dari roda kendaraan
public :
	Transport(string medan, int roda) { // constructor fungsi atau method yang otomatis di panggil saat objek di deklarasikan
		this->medan = medan ;
		this->roda = roda ;
	}

	void print() { // method print data dari object transport
		cout << "Medan\t\t: " << this->medan << "\n" ;
		cout << "Jumlah roda\t: " << this->roda << "\n" ;
	}
} ;

int main() {
	Transport mobil("Darat", 4) ;
	mobil.print() ;
}