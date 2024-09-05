#include <iostream> 
#include <iomanip>

using namespace std;

int main () {
    float jumjual, hrga, t_har, dskon, totbay;
    char namabrg[20];

    cout << "PENJUALAN BARANG ELEKTRONIK" << endl;
    cout << "Nama Barang: ";
    cin >> namabrg;
    cout << "Harga: ";
    cin >> hrga;
    cout << "Jumlah Jual: "; 
    cin >> jumjual;

    t_har = hrga * jumjual;
    cout << "Total Harga: " << t_har << endl;
    dskon = 0.10 * t_har;
    cout << "Diskon (10%): " << dskon << endl;
    totbay = t_har - dskon;
    cout << "Total Bayar: " << totbay << endl;

    return 0;
}