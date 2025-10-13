#include <iostream>
using namespace std ;

class test {
public :
	test() {
		cout << "Ini Constructor!\n" ;
	}
	~test() {
		cout << "Ini Destructor!\n" ;
	}
} ;

int main() {
	test tes ;

	return 0 ;
}