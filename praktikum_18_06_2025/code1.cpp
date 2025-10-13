#include <iostream>
using namespace std ;

class Date {
public :
	int dateOfMonth, month, year ;
	void getDate() {
		cout << "Date\t: " << this->dateOfMonth << " - " << this->month << " - " << this->year << "\n" ;
	}
} ;

class Event {
private :
	string eventDesc ;
	Date date ;

public :
	// contructor
	Event(string eventDesc, Date date) : eventDesc(eventDesc), date(date) {}

	void showEventDetails() {
		cout << "-------------------------------\n" ;
		cout << "Event\t: " << this->eventDesc << "\n" ;
		date.getDate() ;
	}
} ;

int main() {
	Event events[3] = {
		{"Menyiram Tanaman", {25, 10, 2025}},
		{"Memberi Pupuk", {26, 11, 2025}},
		{"Memindahkan ke pot", {27, 12, 2025}},
	} ;
	cout << "-------------------------------\n" ;
	cout << "------- List Aktivitas --------\n" ;
	for(int i = 0; i < 3; i++) {
		events[i].showEventDetails() ;
	}
	cout << "-------------------------------\n" ;
}