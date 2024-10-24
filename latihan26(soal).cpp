//codingan dibuat nindya alifa
//nim2401210053
//coding menggunakan array dan menghasikan tabel
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(2);
    const int maxpeg = 50;
    string nm[maxpeg], golngn[maxpeg], kode[maxpeg], jbtn[maxpeg];
    float gaji[maxpeg], tnjngn[maxpeg], pnjmn[maxpeg], pjak[maxpeg], gjkot[maxpeg], gajber[maxpeg];
    char lagi;
    int nopgwai = 0;

    cout << "GAJI PEGAWAI PT. TELKOM" << endl;
    cout << "-----------------------" << endl;

    do {
        cout << "Pegawai ke-" << nopgwai + 1 << endl;
        cout << "Nama Pegawai              : ";
        cin >> nm[nopgwai];
        cout << "Golongan                  : ";
        cin >> golngn[nopgwai];
        cout << "Kode Jabatan              : ";
        cin >> kode[nopgwai];

        if (golngn[nopgwai] == "Ia") {
            gaji[nopgwai] = 500000;
        } else if (golngn[nopgwai] == "IIa") {
            gaji[nopgwai] = 750000;
        } else if (golngn[nopgwai] == "IIIa") {
            gaji[nopgwai] = 1000000;
        } else if (golngn[nopgwai] == "Ib") {
            gaji[nopgwai] = 1500000;
        } else if (golngn[nopgwai] == "IIb") {
            gaji[nopgwai] = 1750000;
        } else if (golngn[nopgwai] == "IIIb") {
            gaji[nopgwai] = 2500000;
        } else {
            cout << "Golongan tidak dikenal!" << endl;
            continue;
        }

        if (kode[nopgwai] == "Dir") {
            jbtn[nopgwai] = "Direktur";
            tnjngn[nopgwai] = 450000;
        } else if (kode[nopgwai] == "Sek") {
            jbtn[nopgwai] = "Sekretaris";
            tnjngn[nopgwai] = 300000;
        } else if (kode[nopgwai] == "Wak") {
            jbtn[nopgwai] = "Wakil Direktur";
            tnjngn[nopgwai] = 375000;
        } else if (kode[nopgwai] == "Stf") {
            jbtn[nopgwai] = "Staf Administrasi";
            tnjngn[nopgwai] = 200000;
        } else {
            cout << "Kode jabatan tidak dikenal!" << endl;
            continue;
        }

        cout << "Pinjaman                  : ";
        cin >> pnjmn[nopgwai];

        pjak[nopgwai] = gaji[nopgwai] * 0.05;
        gjkot[nopgwai] = gaji[nopgwai] + tnjngn[nopgwai];
        gajber[nopgwai] = gjkot[nopgwai] - pnjmn[nopgwai] - pjak[nopgwai];

        nopgwai++;

        cout << "Masih ingin lanjut menghitung gaji? [Y/T]: ";
        cin >> lagi;
        cout << endl;

    } while ((lagi == 'Y' || lagi == 'y'));

    // Menampilkan tabel hasil akhir
    cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "| No | Nama Pegawai | Jabatan         | Gaji      | Tunjangan | Pajak     | Gaji Kotor | Gaji Bersih |" << endl;
    cout << "-------------------------------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < nopgwai; i++) {
        cout << "| " << setw(2) << i + 1 << " | "
             << setw(12) << nm[i] << " | "
             << setw(15) << jbtn[i] << " | "
             << setw(10) << gaji[i] << " | "
             << setw(9) << tnjngn[i] << " | "
             << setw(9) << pjak[i] << " | "
             << setw(11) << gjkot[i] << " | "
             << setw(12) << gajber[i] << " |" << endl;
    }

    cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "SELESAI" << endl;
    return 0;
}

