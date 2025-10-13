#include <iostream>
using namespace std;

struct Mhs{
	string nama;
	string NIM;
	string angkatan;
	float NilaiAkhir;
	string grade;
	string status;

	void setAngkatan(){ angkatan = NIM.substr(0, 4); }

	void setGrade(){
		if(NilaiAkhir >= 80){
			grade = "A";
		} else if(NilaiAkhir >= 70 && NilaiAkhir < 80){
			grade = "B";
		} else if(NilaiAkhir >= 60 && NilaiAkhir < 70){
			grade = "C";
		} else if(NilaiAkhir >= 50 && NilaiAkhir < 60){
			grade = "D";
		} else{
			grade = "E";
		}
	}

	void printMhs(){
		cout << "--------------------------------------\n";
		cout << "Nama\t\t: " << nama << endl;
		cout << "NIM\t\t: " << NIM << endl;
		cout << "Angkatan\t: " << angkatan << endl;
		cout << "Nilai Akhir\t: " << NilaiAkhir << endl;
		cout << "Grade\t\t: " << grade << endl;
		cout << "Status\t\t: " << status << endl;
		cout << "--------------------------------------\n";
	}
};

int main(){
	Mhs mhs = {"Rafi", "202331000", "", 60.0f, "", "Aktif"};
	mhs.setAngkatan();
	mhs.setGrade();
	mhs.printMhs();
	return 0;
}