#include <iostream>
using namespace std;

void sayHello(string name){ // "void" jenis fungsi yang tidak mengebalikan nilai, "sayHello" nama fungsi, "string name" parameter
    cout << "Hello " << name << endl;
}

int exp(int value, int expValue){
	value;
	for(int i = 1; i < expValue; i++){
		value += value;
	}
	return value;
}

int main(){
	cout << exp(2, 3) << endl;

	return 0;
}