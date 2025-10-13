#include <iostream>
#include <iomanip>
using namespace std;

class HP{
private:
	string Type;
	string Memory;
	string Merk;
	string Chipset;
	float Harga;

public:
	HP(string Type, string Memory, string Merk, string Chipset, float Harga ) {
		this->Type 		= Type;
		this->Memory 	= Memory;
		this->Merk 		= Merk;
		this->Chipset 	= Chipset;
		this->Harga 	= Harga;
	}
	// cetak info HP
	string printInfo( float discount = 0.0f ) {
		return "Type\t: " + this->Type + 
			   "\nMemory\t\t: " + this->Memory + 
			   "\nMerk\t\t: " + this->Merk + 
			   "\nChipset\t\t: " + this->Chipset +  
			   "\nHarga Awal\t: " + to_string(this->Harga) +
			   "\nHarga Akhir\t: " + to_string( discount ) ; 
	}
	// ubah atau set type
	void setType(string Type) {
		this->Type = Type;
	}
	// ubah atau set chipset
	void setChipset(string Chipset) {
		this->Chipset = Chipset;
	}
	// ubah atau set chipset
	void setMemory(string Memory) {
		this->Memory = Memory;
	}
	// ubah atau set Merk
	void setMerk(string Merk) {
		this->Merk = Merk;
	}
	// ubah atau set Harga
	void setHarga(float Harga) {
		this->Harga = Harga;
	}
	float setDiscount( float disc ) {
		if( disc < 0.0f && disc > 1.0f )
			return this->Harga;

		return this->Harga - this->Harga * disc;
	}
	float setCashBack( float cashback ) {
		if( cashback < 0.0f && cashback > 1.0f )
			return this->Harga;
		return this->Harga - this->Harga * cashback;
	}
};

int main(){
	HP hp1 = {"Zflip", "8 GB", "Vivo", "Snapdragon", 2000000.0f};
	cout << hp1.printInfo(hp1.setDiscount(0.5f)) << endl;
}