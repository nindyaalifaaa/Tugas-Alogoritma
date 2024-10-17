//dibuat nindya alifa
//nim 240121053
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int max_dta = 100;
    string nm_brang[max_dta];
    int harga[max_dta];
    int jumlahJual[max_dta];
    int totalHarga[max_dta];
    float diskon[max_dta];
    float totalBayar[max_dta];
    
    float totalPendapatan = 0;  // Ubah menjadi float untuk memastikan ketepatan
    int dataCount = 0;
    char inputLagi = 'Y';
    
    cout << "PENJUALAN BARANG ELEKTRONIK\n";
    
    while (inputLagi == 'Y' || inputLagi == 'y') {
        if (dataCount >= max_dta) {
            cout << "Maksimal data yang dapat diinput sudah tercapai!" << endl;
            break;
        }

        //Input Nama Barang menggunakan getline untuk menghindari masalah spasi
        cout << "\nNama Barang: ";
        cin.ignore();  // membersihkan buffer input
        getline(cin, nm_brang[dataCount]);
        
        //Input Harga Barang
        cout << "Harga: ";
        cin >> harga[dataCount];
        
        //Input Jumlah Jual
        cout << "Jumlah Jual: ";
        cin >> jumlahJual[dataCount];
        
        //hitung total harga
        totalHarga[dataCount] = harga[dataCount] * jumlahJual[dataCount];
        
        //hitung diskon 10%
        diskon[dataCount] = 0.1 * totalHarga[dataCount];
        
        //hitunv total bayar
        totalBayar[dataCount] = totalHarga[dataCount] - diskon[dataCount];
        
        //menghitung total pendapatan
        totalPendapatan += totalBayar[dataCount];
        
        //ini hasil perhitungan
        cout << "Total Harga: " << totalHarga[dataCount] << endl;
        cout << "Diskon (10%): " << diskon[dataCount] << endl;
        cout << "Total Bayar: " << totalBayar[dataCount] << endl;

        dataCount++;

        //kalo mau input lagi
        cout << "\nApakah Mau Input Lagi [Y/T]: ";
        cin >> inputLagi;
    }

    //total pendapatan
    cout << "\nTotal Pendapatan: " << totalPendapatan << endl;
    
    return 0;
}
