#include <iostream>
using namespace std;

class Mobil {
private:
	string TypeMobil;
	string TypeMesin;
	string Warna;
	string Merk;
	int Seri;
public:
	// Constructor default
	Mobil() {
		Merk = "";
		TypeMesin = "";
		TypeMobil = "";
		Warna = "";
		Seri = 0;
	}
	// Constructor spesifik
	Mobil(string newTypeMobil, string newTypeMesin, string newWarna, string Merk, int Seri) {
		TypeMesin = newTypeMesin;
		TypeMobil = newTypeMobil;
		Warna = newWarna;
		this->Merk = Merk;
		this->Seri = Seri;
	}
	// getter typemobil
	const string getTypeMobil() const {
		return TypeMobil;
	}
	// setter typemobil
	void setTypeMobil(string typeMobil) {
		this->TypeMobil = typeMobil;
	}
	// function / method
	void printInfo(){
		cout << "Merk\t\t: " << Merk << endl;
		cout << "TypeMesin\t: " << TypeMesin << endl;
		cout << "TypeMobil\t: " << TypeMobil << endl;
		cout << "Warna\t\t: " << Warna << endl;
		cout << "Seri\t\t: " << Seri << endl;
	}
};

int main() {
	Mobil m = {"Innova", "Matic Manual", "Silver", "Toyota", 1};
	m.setTypeMobil("Honda");
	cout << m.getTypeMobil() << endl;
	return 0;
}