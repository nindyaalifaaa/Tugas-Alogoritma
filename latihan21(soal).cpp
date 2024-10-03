//coding di  buat oleh nindya alifa yang baik hati
//nim 240121053
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	char nm_seles[50];
	float jumlah_Penjualan,komisi,sisa,totkomsi;
	cout << setprecision(10);
	
	cout << "Komisi Pegawai PT. Murah Hati" << endl;
	cout << "------------------------------" << endl;
    for(int i = 1; i <= 10; i++){
	cout << "Nama Sales = ";
	cin >> nm_seles;
	cout << "Jumlah Penjualan = ";
	cin >> jumlah_Penjualan;



	if(jumlah_Penjualan == 500000){
		komisi = jumlah_Penjualan * 0.10;
		sisa = 0;
	}
	 else if(jumlah_Penjualan > 500000){
		komisi = jumlah_Penjualan * 0.10;
		sisa = (jumlah_Penjualan - 500000) * 0.15;
	} else {
		sisa = 0;
	}
	
	totkomsi = komisi + sisa;
	
	cout << "Komisi: "<< komisi << endl;
	cout << "Sisa:" << sisa << endl;
	cout << "Total Komisi: " << totkomsi << endl;
	cout << endl; 
	
}
	return 0;
}

