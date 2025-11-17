#include <iostream>
using namespace std ;

template <typename T, size_t MAX_CAP>
class Stack {
private:
	T buf[MAX_CAP] ;
	int it ;

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
			return T() ;
		}
		return buf[0] ;
	}
	
	int back() {
		if (is_empty()) {
			return T() ;
		}
		return buf[it] ;
	}

	bool is_empty() {
		return it == -1 ;
	}

	bool is_full() {
		return it == MAX_CAP ;
	}

	void print() {
		for (int i = 0; i <= it; i++) {
			cout << buf[i] << (i == it ? "\n" : ", ");
		}
	}
} ;

int main () {
	Stack<char, 3> s ;
	
	for(int i = 0; i < 3; i++) {
		s.print() ;
		s.push('A' + i) ;
	}
	
	for(int i = 0; i < 3; i++) {
		s.print() ;
		s.pop() ;
	}
	s.print() ;	
}