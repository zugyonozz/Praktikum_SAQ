#include <iostream>
using namespace std ;
int objekId = 0;

class Person {
private :
	string name;
	int objID ;
public :
	Person() {
		this->name = "" ;
		this->objID = objekId ;
		cout << "Person with id = " << this->objID << " declared!\n" ;
		objekId++ ;
	}
	Person(string name) {
		this->name = name ;
		this->objID = objekId ;
		cout << "Person with id = " << this->objID << " initialized!\n" ;
		objekId++ ;
	}
	~Person() {
		this->name = "" ;
		cout << "Person with id = " << this->objID << " deleted!\n" ;
	}
} ;

int main() {
	Person p("zuu") ;
	Person p1;

	for(int i = 0; i < 5; i++) {
		Person* p = new Person(to_string(i)) ;
		delete p;
	}
}