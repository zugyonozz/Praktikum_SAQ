#include <iostream>
using namespace std ;

class Pos {
private :
	int x, y ;
public :
	Pos(int x, int y) : x(x), y(y) {}

	void print() const { cout << "( " << x << ", " << y << " )" ; }
} ;

int main() {

	Pos p(1, 3);
	p.print() ;

	return 0 ;
}