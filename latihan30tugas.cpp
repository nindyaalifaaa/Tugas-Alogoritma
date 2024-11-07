//dibuat oleh nindya alifa
//nim 240121053
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Mahasiswa {
    string nm;
    string npm;
    float nilmid;
    float nilsmes;
    float nilakhr;
    char nilhur;
};

char hitungNilaiHuruf(float nilaiAkhir) {
    if (nilaiAkhir >= 80 && nilaiAkhir <= 100) return 'A';
    else if (nilaiAkhir >= 70) return 'B'; 
    else if (nilaiAkhir >= 55) return 'C'; 
    else if (nilaiAkhir >= 40) return 'D'; 
    else return 'E';
}

float hitungNilaiAkhir(float nilaiMid, float nilaiSemester) {
    return (0.4f * nilaiMid) + (0.6f * nilaiSemester); 
}

int main() {
    const int maxData = 100;
    Mahasiswa mhs[maxData];
    int jumlahData;

    cout << "Masukkan jumlah mahasiswa (maksimal " << maxData << "): ";
    cin >> jumlahData;

    // Validate jumlahData input
    if (jumlahData < 1 || jumlahData > maxData) {
        cout << "Jumlah mahasiswa tidak valid!" << endl;
        return 1;
    }

    for (int i = 0; i < jumlahData; i++) {
        cout << "Data Mahasiswa " << (i + 1) << endl;
  	    cout << "NPM: ";  
	    cin >> mhs[i].npm;
	    cout << "Nama: ";
        cin.ignore(); 
        getline(cin, mhs[i].nm);
        cout << "Nilai Mid: ";
        cin >> mhs[i].nilmid;
        cout << "Nilai Semester: ";
        cin >> mhs[i].nilsmes;

        mhs[i].nilakhr = hitungNilaiAkhir(mhs[i].nilmid, mhs[i].nilsmes);
        mhs[i].nilhur= hitungNilaiHuruf(mhs[i].nilakhr);
        cout << endl;
    }

    cout << fixed << setprecision(2);
    cout << "-------------------------------------------- HASIL --------------------------------------------" << endl;
    cout << "Nama\t\tNPM\t\tNilai Mid\tNilai Semester\tNilai Akhir\tNilai Huruf" << endl;
    cout << "-----------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < jumlahData; i++) {
        cout << mhs[i].nm << "\t" << mhs[i].npm << "\t" 
             << mhs[i].nilmid << "\t\t" 
             << mhs[i].nilsmes << "\t\t" 
             << mhs[i].nilakhr << "\t\t" 
             << mhs[i].nilhur << endl;
    }

    return 0;
}

