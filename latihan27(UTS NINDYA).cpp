//codingan dibuat nindya alifa
//nim 240121053
//coding UTS Nindya Alifa
#include <iostream>
#include <iomanip>
#include <string>
#include <limits> 

using namespace std;

struct Mahasiswa {
    string nama;
    string npm;
    string kode;
    string jrusan;
    double pmbyrnawl;
    int jmlhcclan;
    double bsrcclan;
    int pembayaranKe;
    double uangKuliah;
    double uangkultrbyr;
    double sisaUangKuliah;
};

int main() {
    char tambahLagi;  
    int noMahasiswa = 0;  
    Mahasiswa mahasiswa[100]; 

    do {
        cout << "\nData Mahasiswa ke-" << noMahasiswa + 1 << endl;

        
        cout << "Nama Mahasiswa: ";
        getline(cin, mahasiswa[noMahasiswa].nama);

        
        cout << "NPM Mahasiswa: ";
        cin >> mahasiswa[noMahasiswa].npm;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  

    
        cout << "Kode Mahasiswa: ";
        cin >> mahasiswa[noMahasiswa].kode;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  

        
        cout << "Jurusan: ";
        getline(cin, mahasiswa[noMahasiswa].jrusan);

        
        cout << "Pembayaran Awal (Rp): ";
        cin >> mahasiswa[noMahasiswa].pmbyrnawl;

        
        cout << "Jumlah Cicilan: ";
        cin >> mahasiswa[noMahasiswa].jmlhcclan;

        
        cout << "Besar Cicilan (Rp): ";
        cin >> mahasiswa[noMahasiswa].bsrcclan;

        
        mahasiswa[noMahasiswa].uangKuliah = mahasiswa[noMahasiswa].pmbyrnawl + (mahasiswa[noMahasiswa].jmlhcclan * mahasiswa[noMahasiswa].bsrcclan);

    
        cout << "\nMasukkan pembayaran ke berapa: ";
        cin >> mahasiswa[noMahasiswa].pembayaranKe;

        
        if (mahasiswa[noMahasiswa].pembayaranKe <= mahasiswa[noMahasiswa].jmlhcclan && mahasiswa[noMahasiswa].pembayaranKe > 0) {
            mahasiswa[noMahasiswa].uangkultrbyr = mahasiswa[noMahasiswa].pmbyrnawl + (mahasiswa[noMahasiswa].pembayaranKe * mahasiswa[noMahasiswa].bsrcclan);
            mahasiswa[noMahasiswa].sisaUangKuliah = mahasiswa[noMahasiswa].uangKuliah - mahasiswa[noMahasiswa].uangkultrbyr;

            
            cout << fixed << setprecision(0); 
            cout << "\nPembayaran ke-" << mahasiswa[noMahasiswa].pembayaranKe << endl;
            cout << "Kode Mahasiswa: " << mahasiswa[noMahasiswa].kode << endl;
            cout << "jrusan: " << mahasiswa[noMahasiswa].jrusan << endl;
            cout << "Pembayaran Awal (Rp): " << mahasiswa[noMahasiswa].pmbyrnawl << endl;
            cout << "Jumlah Cicilan: " << mahasiswa[noMahasiswa].jmlhcclan << endl;
            cout << "Besar Cicilan (Rp): " << mahasiswa[noMahasiswa].bsrcclan << endl;
            cout << "Uang Kuliah (Rp): " << mahasiswa[noMahasiswa].uangKuliah << endl;
            cout << "Uang Kuliah Terbayar (Rp): " << mahasiswa[noMahasiswa].uangkultrbyr << endl;
            cout << "Sisa Uang Kuliah yang Harus Dibayar (Rp): " << mahasiswa[noMahasiswa].sisaUangKuliah << endl;
        } else {
            cout << "Pembayaran ke tidak valid, harap masukkan angka antara 1 dan " << mahasiswa[noMahasiswa].jmlhcclan << "." << endl;
        }

        
        cout << "Apakah masih ingin menambahkan data mahasiswa (y/t)? ";
        cin >> tambahLagi;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  

        noMahasiswa++;  

    } while (tambahLagi == 'y' && noMahasiswa < 100);

    cout << "\n\nTabel Data Pembayaran Mahasiswa\n";
    cout << "================================================================================================================================================\n";
    cout << setw(3) << "No" 
         << setw(15) << "Nama" 
         << setw(10) << "Kode" 
         << setw(15) << "Jurusan" 
         << setw(20) << "UKT"
         << setw(20) << "Awal (Rp)" 
         << setw(8) << "Cicil" 
         << setw(15) << "Cicilan (Rp)" 
         << setw(8) << "Ke" 
         << setw(15) << "Terbayar" 
         << setw(15) << "Sisa (Rp)" << endl;
    cout << "===============================================================================================================================================\n";

    for (int i = 0; i < noMahasiswa; i++) {
        cout << setw(3) << i + 1
             << setw(15) << mahasiswa[i].nama 
             << setw(10) << mahasiswa[i].kode 
             << setw(25) << mahasiswa[i].jrusan 
             << setw(15) << fixed << setprecision(0) << mahasiswa[i].uangKuliah
             << setw(15) << fixed << setprecision(0) << mahasiswa[i].pmbyrnawl
             << setw(8) << mahasiswa[i].jmlhcclan 
             << setw(15) << fixed << setprecision(0) << mahasiswa[i].bsrcclan 
             << setw(8) << mahasiswa[i].pembayaranKe  
             << setw(15) << fixed << setprecision(0) << mahasiswa[i].uangkultrbyr 
             << setw(15) << fixed << setprecision(0) << mahasiswa[i].sisaUangKuliah << endl;
    }

    cout << "===============================================================================================================================================\n";

    return 0;
}
