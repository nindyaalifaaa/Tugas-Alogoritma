//dibuat oleh nindya alifa 
//nim 240121053
//membuat program daftar penjualan beserta komisinya
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double hitung_Komisi(double jumlah_Penjualan) {
    double komisi;

    if (jumlah_Penjualan <= 500000) {
        komisi = jumlah_Penjualan * 0.10;
    } else {
        double komisi500000 = 500000 * 0.10;
        double sisa = jumlah_Penjualan - 500000;
        double komisi_Sisa = sisa * 0.15;
        komisi = komisi500000 + komisi_Sisa;
    }

    return komisi;
}

int main() {
    double jumlah_Penjualan;
    char nm_seles[30];

    cout << "DAFTAR PENJUALAN SALES BESERTA KOMISI YANG DITERIMA" << endl;  
    cout << "____________________________________________________" << endl;
    cout<<"PT.Nindya Raya"<<endl;
    cout << "Nama Sales: ";
    gets(nm_seles);
    cout << "Jumlah Penjualan: ";
    cin >> jumlah_Penjualan;
  
    double komisi = hitung_Komisi(jumlah_Penjualan);

    cout << "Komisi yang diterima: " << komisi << endl;

    return 0;
}