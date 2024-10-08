//coding di  buat oleh nindya alifa yang baik hati
//nim 240121053
//ini contoh ray 2 dimensi
#include <iostream>
using namespace std;

int main() {
	int matriksA[2][2],matriksB[2][2],hasil[2][2];
	
	//input untuk matriks A 
	cout << "Masuk Elemet Matriks A (2x2):" << endl;
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			cout << "A[" << i <<"][" << j << "]:";
			cin >> matriksA[i][j];
			
		}
	}
	
	//input untuk matriks B
	cout << "Masuk Elemet Matriks B (2x2):" << endl;
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			cout << "B[" << i <<"][" << j << "]:";
			cin >> matriksA[i][j];
			
		}
	}
	
	//menjumlahkan kedua matriks
	for(int i =0; i < 2; i++){
		for(int j =0; j < 2; j++){
			hasil[i][j]=matriksA[i][j] + matriksB[i][j];
		}
	}
	
	//menmpilkan hasil penjumlahan
	cout << "Hasil Penjumlahan Matriks A dan B Adalah: " << endl;
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			cout << hasil[i][j] << " ";
		}
		cout << endl;
		
	}
	return 0;
}