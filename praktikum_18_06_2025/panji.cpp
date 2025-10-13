#include <iostream> // untuk i/o
#include <string> // untuk modifikasi string
using namespace std; // default std

class Event { // type class event
private: // private access pada data di bawah
    string detailEvent; //  data detail event
    int tanggal; // data tanggal
    int bulan; // data bulan
    int tahun; // data tahun

public: // public access pada data di bawah
    // Constructor
    Event(string detail, int tgl, int bln, int thn) {
        detailEvent = detail; // assignments constructor atrubut data
        tanggal = tgl; // assignments constructor atribut data
        bulan = bln; // assignments constructor atribut data
        tahun = thn; // assignments constructor atribut data
    }

    // Method untuk menampilkan detail event
    void getEventDetails() { // efisiensi, reusable kode
        cout << "Detail Event : " << detailEvent << endl;
        cout << "Tanggal      : " << tanggal << "-" << bulan << "-" << tahun << endl;
    }
};

int main() { // entry point 
    // Membuat 3 event berbeda
    Event event1("Workshop Algoritma", 18, 6, 2025) ;
    Event event2("Ujian Tengah Semester", 24, 6, 2025) ;
    Event event3("Presentasi Proyek Akhir", 1, 7, 2025) ;

	// print header
    cout << "Event 1:" << endl;
	// panggil method getEventDetails
    event1.getEventDetails();
	// print newline
    cout << endl;

    cout << "Event 2:" << endl;
    event2.getEventDetails();
    cout << endl;

    cout << "Event 3:" << endl;
    event3.getEventDetails();
    cout << endl;

    return 0;
}