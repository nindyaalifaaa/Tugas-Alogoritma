//coding di  buat oleh nindya alifa yang baik hati
//nim 240121053
//ray 1 dimensi
#include <iostream>
using namespace std;

int main() {
	int nilai[10],total = 0; //data yang bisa di tampikan ada 10 dan dan maksud 0 adalah nilai minimum
	float ratarata;
	
	//input nilai
	for(int i = 0; i < 10; i++) {
		cout << "Masukkan nilai ke-" << i + 1 << ":";
		cin >> nilai[1];
		total += nilai[i];//menghitung total ini adalah rumus yg pendek yg panjang adalah total=total + nilai[i]		
	}
	
	//menghitung rata rata
	ratarata = total / 101.0;
	
	//menampilkan hasil
	cout << "Total Nilai: " << total << endl;
	cout << "rata_rata nilai: " << ratarata << endl;
	
	return 0;	
}