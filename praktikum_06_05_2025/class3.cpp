#include <iostream>
using namespace std;

class Keranjang {
private:
	string bahan ;
	float  bobot ;
	string asal  ;
	int    nRoda ; // 0 = keranjang angkat, > 0 = keranjanga dorong
	bool   kursi ; // kursi = false , kursi = true
public:
	// oveloading constructor = banyak konstruktor dengan parameter yang berbeda
	// contructor default
	Keranjang() : nRoda(0), kursi(false), bahan("plastik"), bobot(0.0f), asal("Superindo") {}
	// contructor spesifik
	Keranjang(string bahan, float bobot, string asal, int nRoda, bool kursi) {
		this->bahan = bahan ;
		this->bobot = bobot ;
		this->asal = asal   ;
		this->nRoda = nRoda ;
		this->kursi = kursi ;
	}

	// setter
	void setBahan(const string bahan) {
		this->bahan = bahan;
	}
	void setBobot(const float bobot) {
		this->bahan = bahan;
	}
	void setAsal(const string asal) {
		this->asal = asal;
	}
	void setRoda(const int nRoda) {
		this->nRoda = nRoda;
	}
	void setKursi(const bool kursi) {
		this->kursi = kursi;
	}

	// print Info dari keranjang
	void getInfo() {
		cout << "bahan\t: " << this->bahan << endl;
		cout << "bobot\t: " << this->bobot << endl;
		cout << "asal \t: " << this->asal  << endl;
		cout << "nRoda\t: " << this->nRoda << endl;
		cout << "kursi\t: " << this->kursi << endl;
	}
};

int main(){
	Keranjang kr = {"Besi", 1.0f, "Alfamidi", 4, 1};
	kr.getInfo();
	kr.setBahan("Kaca");
	kr.setKursi(false);
	cout << "\n\n";
	kr.getInfo();

	return 0;
}