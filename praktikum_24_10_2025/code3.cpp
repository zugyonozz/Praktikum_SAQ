#include <iostream>
using namespace std;

// array = buffer
// cap = kapasitas
// top = indexing

class Stack {
private:
	int buf[100]; // kapasitas buffer 100 elemen
	int top;	  // index terakhir

public:
	Stack() { // ctor
		top = -1; // stack masih kosong
	}

	bool is_empty() {
		return top == -1;
	}

	bool is_full() {
		return top == 99; // 99 -> 100 - 1
	}

	Stack &push(int value) {
		if (is_full()) {
			return *this;
		}
		buf[++top] = value;
		return *this;
	}

	Stack &pop() {
		if (is_empty()) {
			return *this;
		}
		--top;
		return *this;
	}

	void reset() {
		top = -1;
	}

	void print() {
		for (int i = 0; i <= top; i++) {
			cout << buf[i] << (i == top ? "\n" : ", ");
		}
	}

	int front() {
		if (is_empty()) {
			return 0;
		}
		return buf[0];
	}

	int back() {
		if (is_empty()) {
			return 0;
		}
		return buf[top];
	}

	int size() {
		return top + 1;
	}
};

int main() {
	Stack s;
	for (int i = 0; i < 3; i++) {
		s.print();
		s.push(i + 1);
	}

	for (int i = 0; i < 3; i++) {
		s.print();
		s.pop();
	}
	s.print();
	return 0;
}