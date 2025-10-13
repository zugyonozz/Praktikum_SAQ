#include <iostream>
using namespace std ;

class Test {
private :
	int data ;
public :
	Test(int data_input) {
		cout << "Ini Constructor!\n" ;
		data = data_input ;
	}

	Test() : data(0) {}

	~Test() {
		cout << "Ini Destructor!\n" ;
	}

	int getData() {
		return data ;
	}
} ;

int main() {
	Test tes ;
	cout << tes.getData() << "\n" ;

	return 0 ;
}