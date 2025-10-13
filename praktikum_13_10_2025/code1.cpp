#include <iostream>
using namespace std ;

int main() {
	int var = 10 ;
	int tambah = var + 5 ;
	int kurang = var - 5 ;
	int kali = var * 5 ;
	int bagi = var / 5 ;
	int modulo = var % 5 ;
	int var2 = var ;

	cout << "---------------------------------\n" ;
	cout << "nilai var\t\t: "			<< var		<< "\t|" << endl ;
	cout << "hasil tambah\t\t: "		<< tambah	<< "\t|" << endl ;
	cout << "hasil kurang\t\t: "		<< kurang	<< "\t|" << endl ;
	cout << "hasil kali\t\t: "			<< kali		<< "\t|" << endl ;
	cout << "hasil bagi\t\t: "			<< bagi		<< "\t|" << endl ;
	cout << "hasil modulo\t\t: "		<< modulo	<< "\t|" << endl ;
	cout << "---------------------------------\n" ;
	cout << "hasil post-increament\t: " << var++	<< "\t|" << endl ;
	cout << "hasil post-decreament\t: " << var2--	<< "\t|" << endl ;
	cout << "nilai var\t\t: "			<< var		<< "\t|" << endl ;
	cout << "nilai var2\t\t: "			<< var2		<< "\t|" << endl ;
	cout << "---------------------------------\n" ;
	cout << "hasil pre-increament\t: "	<< ++var	<< "\t|" << endl ;
	cout << "hasil pre-decreament\t: "	<< --var2	<< "\t|" << endl ;
	cout << "---------------------------------\n" ;
}