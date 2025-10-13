#include <iostream>
using namespace std;

int increase(int x){
	cout << "--------------------------------------------------------- start function scope\n";
	cout << "nilai sekarang x\t\t\t= " << x << "\t\t|" << endl;
	cout << "--------------------------------------------------------- end function scope\n";
	return ++x;
}

int increaseByRef(int& y){
	cout << "--------------------------------------------------------- function scope\n";
	cout << "nilai sekarang y\t\t\t= " << y << "\t\t|" << endl;
	cout << "--------------------------------------------------------- function scope\n";
	return ++y;
}

int main(){
	//---------------------------------------------------------------------------------------
	int z = 10;
	cout << "\nfunction pass by value -> increase(int x)\n";
	cout << "--------------------------------------------------------- start int main scope\n";
	cout << "nilai n\t\t\t\t\t= " << z << "\t\t|"<< endl;

	increase(z);

	cout << "nilai n setelah dipanggil function\t= " << z << "\t\t|" << endl;
	cout << "--------------------------------------------------------- end int main scope\n";

	//---------------------------------------------------------------------------------------
	cout << "\n";
	cout << "\nfunction pass by reference -> increaseByRef(int& y)\n";
	cout << "--------------------------------------------------------- start int main scope\n";
	cout << "nilai n\t\t\t\t\t= " << z << "\t\t|" << endl;

	increaseByRef(z);

	cout << "nilai n setelah dipanggil function\t= " << z << "\t\t|" << endl;
	cout << "--------------------------------------------------------- end int main scope\n";

	return 0;
}