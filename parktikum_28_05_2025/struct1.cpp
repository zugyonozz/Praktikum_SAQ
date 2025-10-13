#include <iostream>
using namespace std;

struct coord{
	int x, y;
};

void getKuadran(coord c){
	string msg = "Koordinat berada di ";
	// kuadran 1 & 3
	if(c.x * c.y > 0){
		msg += c.x < 0 ? "Kuadran 3" : "Kuadran 1";
	}else if(c.x * c.y < 0){ // Kuadran 2 & 4
		msg += c.x > 0 ? "Kuadran 2" : "Kuadran 4";
	}else{
		if(c.x == 0 && c.y == 0){ // Pusat
			msg += "Pusat (0, 0)";
		}else{ // Sumbu X & Y
			msg += c.x == 0 ? "Sumbu X" : "Sumbu Y";
		}
	}
	cout << msg << endl;
}

int main(){
	coord c = {1, -2};
	getKuadran(c);
	return 0;
}