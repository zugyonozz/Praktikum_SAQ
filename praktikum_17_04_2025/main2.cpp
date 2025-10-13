#include <iostream>
using namespace std;

int Max(int array[], int size){
	int temp = 0;
	for(int i = 0; i < size; i++){
		if(temp < array[i]){
			temp = array[i];
		}
	}

	return temp;
}

void sort(int array[], int size);

int main(){
	int array[] = {0, 62, 56, 26, 76, 50, 2, 12, 4, 25, 47, 57}; 
	int size = sizeof(array)/sizeof(array[0]);
	cout << "Max = " << Max(array, size) << endl;
	sort(array, size);

	return 0;
}

bool swapNum(int array[], int size){
	int temp, j;
	bool isSort = true;
	for(int i = 0; i < size; i++){
		j = i+1;
		if(array[i] < array[j]){
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			isSort = false;
		}
	}
	return isSort;
}

void sort(int array[], int size){
	bool isSort = false;
	while(isSort == false){
		isSort = swapNum(array, size);
	}
	for(int i = 0; i < size; i++){
		cout << array[i] << ", ";
	}
}