#include <iostream>
using namespace std;

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
	int i = 0;
	int n = 0;

    while (true) {
		if(kalimat.at(i) == ' ' || i == kalimat.length() - 1){
			n += 1;
		}
		i++;
    }

    cout << "Jumlah kata: " << n << endl;

    return 0;
}
