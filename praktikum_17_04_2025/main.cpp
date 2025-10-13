#include <iostream>     
#include <string.h>     
using namespace std;

int main(){
    // Mendeklarasikan array karakter (string C-style)
    char teks1[] = "yyy";
    char teks2[] = "LAB SAQ";
	char teks4[] = "yyy";
    
    char cpteks1[100] = ""; // Mengalokasikan dengan ukuran cukup atau gunakan char cpteks1[100];

    // Menyalin isi teks1 ke cpteks1
    strcpy(cpteks1, teks1); 

	cout << "------------- strcmp -------------" << endl;
    // Membandingkan cpteks1 dan teks2 secara alfabetik (berdasarkan kode ASCII)
    cout << "perbandingan panjang teks1 dan teks2 :" << strcmp(teks4, teks1) << endl;
    
    cout << "------------- strcpy -------------" << endl;
    cout << "teks1 = " << teks1 << endl;
    cout << "cpteks1 = " << teks1 << endl;

    cout << "------------- strlen -------------" << endl;
    // Mengukur panjang karakter dalam teks1
    cout << "panjang karakter dari teks1 = " << strlen(teks1) << endl;

    cout << "------------- strlwr -------------" << endl;
    // Mengubah semua huruf dalam cpteks1 menjadi huruf kecil
    cout << "lower dari teks1 = " << strlwr(cpteks1) << endl;

    cout << "------------- strupr -------------" << endl;
    // Mengubah semua huruf dalam cpteks1 menjadi huruf kapital
    cout << "upper dari teks1 = " << strupr(cpteks1) << endl;

    cout << "------------- strrev -------------" << endl;
    // Membalik urutan karakter dalam cpteks1
    cout << "reverse dari teks1 = " << strrev(cpteks1) << endl;

    cout << "------------- strcat -------------" << endl;
    // Menggabungkan teks1 ke akhir newTeks
    char newTeks[] = "LAB SAQ - ";
    strcat(newTeks, teks1);
    cout << "gabungan dari teks1 dan teks2 = " << newTeks << endl;

    cout << "------------- strstr -------------" << endl;
    char teks3[] = "Hello World";
    // Mencari substring pertama dari "e" dalam teks3
    char* ptrTeks1 = strstr(teks3, "e");
    cout << "posisi substring \"e\" dari teks1 = " << ptrTeks1 << endl;
}
