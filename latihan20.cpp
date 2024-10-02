//coding di  buat oleh nindya alifa yang baik hati
//nim 240121053
//mohon maaf bila ada salah pak,semoga kedepannya saya bisa lebih baik
#include <iostream>
using namespace std;

int main() {
    char lagi = 'Y';
    int jumbarng,jmlhdta,totpnjualan = 0, k = 1;

    while (lagi == 'Y' || lagi == 'y') {
    	
    	cout << "-----------------------------------------------" << endl;
		cout << "Daftar Jumlah Barang Yang Terjual Di Toko" << endl;
        cout << "Masukkan Jumlah Barang Yang Terjual Di Toko " << "k" << " : ";
        cin >> jumbarng;
        cout << "Jumlah Data" ;

        totpnjualan += jumbarng;

        cout << "Apakah Anda ingin memasukkan data lagi? (Y/T): ";
        cin >> lagi;
        
        k++; 
    }
    
    cout << "-----------------------------------------------" << endl;
    cout << "Total Barang Yang Terjual Di Toko Adalah: " << totpnjualan << endl;
    cout << "Jumlah Barang: " << totpnjualan << endl;
    cout << "Jumlah Data: " << totpnjualan << endl;


    return 0;
    
}


