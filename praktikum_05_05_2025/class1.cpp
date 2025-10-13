#include <iostream>
using namespace std;

class Car{
private:
	string brand, year, type, color;
	int price;
public:
	Car() {
		brand = "";
		year = "";
		type = "";
		color = "";
		price = 0;
	}
	Car(string newBrand, string newYear, string newType, string newColor, int price){
		brand = newBrand ;
		year = newYear ;
		type = newType ;
		color = newColor ;
		this->price = price ;
	}
	void setPrice(int price) {
		this->price = price;
	}
	void setYear(string year){
		this->year = year;
	}
	string getYear(){
		return this->year;
	}
	int getPrice(){
		return this->price;
	}
	void printInfo(){
		cout << "brand\t: " << brand << endl;
		cout << "year\t: " << year << endl;
		cout << "type\t: " << type << endl;
		cout << "color\t: " << color << endl;
		cout << "price\t: " << price << endl;
	}
};

int main(){
	Car car1 = {"Honda", "2020", "Jazz", "Red", 200000000};
	car1.setPrice(300000000);
	car1.setYear("2025");
	// car1.printInfo();
	cout << car1.getPrice() << endl;
	cout << car1.getYear() << endl;
	return 0;
}