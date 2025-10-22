#include <iostream>
using namespace std ;

/*
KEY :
- front = first element
- rear = last element
*/

class Queue {
private :
	int buf[100] ;
	int front ;
	int rear ;

public :
	Queue() {
		front = rear = 0 ;
	}

	bool IsLimit() {
		return rear == 100 ;
	}

	bool IsAtEnd() {
		return front == 100 ; 
	}

	Queue& Enqueue(int val) {
		if (IsLimit()) {
			cout << "Queue - Kapaistas telah mencapai batas!\n" ;
			return *this ;
		}

		buf[rear++] = val ;
		return *this ;
	}

	Queue& Dequeue() {
		if (IsAtEnd()) {
			cout << "Queue - Index telah mencapai batas!\n" ;
			return *this ;
		}

		++front ;
		return *this ;
	}

	void Print() {
		for (int i = front; i < rear; i++) {
			cout << buf[i] << (i == rear - 1 ? "\n" : ", ") ;
		}
	}
} ;

int main() {
	Queue q ;
	q.Enqueue(5).Enqueue(6).Enqueue(7) ;
	q.Print() ;
	q.Dequeue() ;
	q.Print() ;
}
