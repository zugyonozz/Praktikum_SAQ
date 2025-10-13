#include <iostream>
using namespace std;

float avg(int arr[], int size){
	int sum = 0;
	for(int i = 0; i < size; i++){
		sum += arr[i];
	}
	return sum / size;
}

int main(){
	int size = 5;
	int i = 0;
	int arr[5];

	cout << "===== Penghitung Rata-rata ======\n";
	cout << "masukkan Angka: \n";
	while(true){
		cout << i+1 << ". " ;
		cin >> arr[i];
		if(i == 4){
			break;
		}
		i++;
	}

	cout << "rata-rata array adalah : "  << avg(arr, size);
}