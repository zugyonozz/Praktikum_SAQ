#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char str[] = "YYY";
	char str2[100];

	cin >> str2;

	if(strlen(str) == strlen(str2)){
		cout << "true" << endl;
	}

	return 0;
}