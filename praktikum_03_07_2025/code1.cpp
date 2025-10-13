// class matematika
// fungsi sum
// fungsi plus
// fungsi min
// fungsi mul
// fungsi div
// fungsi avg
// nah disini class hanya hanya bekerja sebagai pembungkus fungsi matematika saja jadi tidak ada data sama sekali

#include <iostream>
using namespace std ;

class Math {
public :
	static int sum(int* data, int size) {
		int result = 0 ;
		for(int i = 0; i < size; i++)
			result += data[i] ;
		return result ;
	}

	static int plus(int a, int b) {
		return a + b ;
	}

	static int min(int a, int b) {
		return a - b ;
	}

	static int mul(int a, int b) {
		return a * b ;
	}

	static int div(int a, int b) {
		return a / b ;
	}

	static float avg(int* data, int size) {
		return static_cast<float>(sum(data, size)) / size ;
	}
} ;

int main() {
	// Math m() ; // <- ada yang tahu alasannya kenapa bisa meggunakan fungsi / method tanpa mendeklarasikan tipe class
	int arr[5] = {1, 2, 3, 4, 6} ;
	cout << "Hasil jumlah semua data : " << Math::sum(arr, 5) << endl ;
	cout << "Hasil A + B = " << Math::plus(10, 10) << endl ;
	cout << "Hasil A - B = " << Math::min(10, 11) << endl ;
	cout << "Hasil A * B = " << Math::mul(10, 5) << endl ;
	cout << "Hasil A / B = " << Math::div(10, 5) << endl ;
	cout << "Hasil rata-rata semua data : " << Math::avg(arr, 5) << endl ;
	cout << *(arr + 5) ;
}