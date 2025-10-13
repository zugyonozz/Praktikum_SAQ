#include <iostream>
using namespace std ;

class Objek {
private :
	string data ;
public :
	Objek() { 
		data = "" ;
		cout << "Objek dideklarasikan!\n" ; 
	}

	Objek(string data) {
		this->data = data ;
		cout << "Objek diinisialisasikan!\n" ; 
	}

	~Objek() { cout << "Objek dihancurkan!\n" ; }
} ;

int main() {
	Objek a ;
	Objek b("data") ;
}