#include <iostream>
using namespace std;

int exp(int &n, int expVal){ // function exponen / kuadrat
	int x = n;
	for(int i = 1; i < expVal; i++){
		n = n * x;
	}
	return n;
}

double exp(double &n, int expVal){ // overload dari function exponen versi double
	double x = n;
	for(int i = 1; i < expVal; i++){
		n = n * x;
	}
	return n;
}

double luasLingkaran(double d){
	return (d / 7) * 22;
}

int main(){
	int n = 2;
	int n2 = 2;
	double r = 5;

	cout << "n^2 : " << exp(n, 2) << endl;
	cout << "n^3 : " << exp(n2, 3) << endl;

	cout << "luas lingkaran : " << luasLingkaran(exp(r, 2)) << endl;

	return 0;
}