#include <iostream>
using namespace std;

struct c{
	float k; // koefisien
	char x; // variabel

	c() = default;
	c(const float k, const char x) : k(k), x(x) {}
	c(const string aljabar){
		if(aljabar.size() == 1){
			if(aljabar.front() > 'A' && aljabar.front() < 'z') throw invalid_argument("variabel invalid");
			k = 0.0f;
			x = aljabar.front();
			return;
		}
		k = (float)(aljabar.at(0) - '0');
		x = aljabar.at(1);
	}
};

int main(){

	c args1("1x");
	cout << args1.k << args1.x;

	return 0;
}