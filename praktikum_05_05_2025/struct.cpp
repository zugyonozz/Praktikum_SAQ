#include <iostream>
using namespace std;

struct Car{
	string brand, year, type, color;
	int price;
};

int main() {
	Car car1 = {"Toyota", "2018", "Innova", "silver", 500000000};
	cout << car1.brand << endl;
	cout << car1.price << endl;
	cout << car1.color << endl;
	cout << car1.year << endl;

	return 0;
}