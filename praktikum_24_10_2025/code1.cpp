#include <iostream>
using namespace std ;

class Stack {
private:
	int buf[100] ;
	int it ; // top

public :
	Stack() {
		it = -1 ;
	}

	Stack& push(int value) {
		if (is_full()) { return *this ; }
		buf[++it] = value ;
		return *this ;
	}

	Stack& pop() {
		if (is_empty()) { return *this ; }
		--it ;
		return *this ;
	}
	
	int front() {
		if (is_empty()) {
			return 0 ;
		}
		return buf[0] ;
	}
	
	int back() {
		if (is_empty()) {
			return 0 ;
		}
		return buf[it] ;
	}

	bool is_empty() {
		return it == -1 ;
	}

	bool is_full() {
		return it == 99 ;
	}

	void print() {
		for (int i = 0; i <= it; i++) {
			cout << buf[i] << (i == it ? "\n" : ", ");
		}
	}
} ;

int main () {
	Stack s ;
	for(int i = 0; i < 3; i++) {
		s.print() ;
		s.push(i + 1) ;
	}
	for(int i = 0; i < 3; i++) {
		s.print() ;
		s.pop() ;
	}
	s.print() ;	
}