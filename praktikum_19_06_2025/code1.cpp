#include <iostream>
using namespace std ;

class Event {
private :
	string eventDetails ;
	int dateOfMonth ;
	int month ;
	int year ;

public :
	Event(string eventDetails, int dateOfMonth, int month, int year) {
		this->eventDetails = eventDetails ;
		this->dateOfMonth = dateOfMonth ;
		this->month = month ;
		this->year = year ;
	}
	void getEventDetails() {
		cout << "Event\t: " << this->eventDetails << "\n" ;
		cout << "Date\t: " << this->dateOfMonth << "/"  << this->month << "/" << this->year << "\n";
	}
} ;

int main() {
	Event e = {"Menyiram Tanaman", 19, 6, 2025} ;
	e.getEventDetails() ;
}