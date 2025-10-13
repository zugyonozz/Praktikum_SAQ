#include <iostream>
using namespace std;

struct Mhs{
	string nama;
	string NIM;
	string angkatan;
	float NilaiAkhir;
	string grade;
	string status;

	void printMhs(){ // function or method
		cout << "--------------------------------------\n";
		cout << "Nama\t\t: " << nama << endl;
		cout << "NIM\t\t: " << NIM << endl;
		cout << "Angkatan\t: " << angkatan << endl;
		cout << "Nilai Akhir\t: " << NilaiAkhir << endl;
		cout << "Grade\t\t: " << grade << endl;
		cout << "Status\t\t: " << status << endl;
		cout << "--------------------------------------\n";
	}
}mhs2;

int main(){
	// Mhs mhs = {"Rafi", "202331000", "2023", 80.0f, "B", "Aktif"};
	mhs2 = {"Yanto", "202431000", "2024", 70.0f, "C", "Non-Aktif"};
	mhs2.printMhs();
	return 0;
}