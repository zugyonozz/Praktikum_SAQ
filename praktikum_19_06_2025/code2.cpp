#include <iostream>
using namespace std ;

class Info {
private :
	string type, seri, year ;

public :
	Info(string type, string seri, string year) : type(type), seri(seri), year(year) {}
	void getInfo () const {
		cout << "Type\t: " << this->type << "\n" ;
		cout << "Seri\t: " << this->seri << "\n" ;
		cout << "Year\t: " << this->year << "\n" ;
	}
} ;

class Car {
private :
	Info info ;
	string color ;

public :
	Car(Info info, string color) : info(info), color(color) {}
	void getCarInfo() const {
		info.getInfo() ;
		cout << "Color\t: " << this->color << "\n" ;
	}
} ;

int main () {
	Car car1(Info{"Toyota", "Avanza", "2020"}, "red") ;
	car1.getCarInfo() ;
}