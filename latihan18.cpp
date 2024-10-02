//dibuat oleh nindya alifa 
//nim 240121053
//codingan penjualan jumlah barang yang terjual

#include <iostream>
using namespace std;

int main ( ) {
	int jumdata,jumbrng,tot_pnjualan = 0;
	
	cout << "Masukkan Jumlah Data";
	cin >> jumdata;
	
	for (int i = 1; i <= jumdata; i++) {
		cout << "Masukkan Jumlah Barang Yang Terjual Di Toko" << i << ": ";
		cin >> jumbrng;
		
		tot_pnjualan += jumbrng; //ini rumus yg pendek,
		// yang panjang nya tot_pnjualan = tot_pnjualan + jumbrng
	}
	cout << "Total Barang Yang Terjual Di Toko Adalah: " << tot_pnjualan << endl;
	
	return 0;
	
}
		
		

