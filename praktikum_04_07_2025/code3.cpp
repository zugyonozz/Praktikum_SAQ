#include <iostream>
using namespace std ;

class Numbers {
private :
	int* nums ;

public :
	Numbers() : nums(NULL) {}
	Numbers(int num) {
		nums = new int(num) ;
		cout << nums << " Berhasil diisi!\n" ;
	}
	int getData() const {
		return *nums ;
	}
	~Numbers() {
		cout << nums << " Berhasil dihapus!\n" ;
		delete nums ;
	}
} ;

int main() {
	Numbers num1(10) ;
	cout << num1.getData() << "\n" ;
	Numbers num2 ;
	cout << num2.getData() << "\n" ;
}