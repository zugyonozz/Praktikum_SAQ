#include <iostream>
using namespace std;

void sayHello(){
	cout << "hello world!\n";
}

//type 	nama    parameter
void SayHello1(string nama){ 
	// cout << "Halo " << nama << endl;
	return;
}

int addNum(int x, int y){ 
	return x + y;
}

int main(){
	SayHello1("agus");
	cout << addNum(1, 2) << endl; 
	return 0;
}