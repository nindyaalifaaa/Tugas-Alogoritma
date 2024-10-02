//dibuat oleh nindya alifa 
//nim 240121053

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int ga_ji,pjak,pnjmn,gajber;
	char namapeg[45],jbatn[45];
	
	cout << "Gaji Karyawan STMIK PENUSA" << endl;
	cout << "=======================" << endl;
	for (int i = 1; i <=10; i++) {//menandakan yang keluar ada 10 nama
		cout << "Masukkan Nama Pegawai" << i << " : " ;
		cin >> namapeg;
		cout <<"Masukkan Jabatan : " ;
		cin >> jbatn;
		cout << "Gaji : " ;
		cin >> ga_ji;
		
		pjak = 0.5 * ga_ji; //ngetik inu slalu pake spasi
		cout << "Pajak : " << pjak << endl;
		cout << "Pinjaman : " ;
		cin >> pnjmn;
		
		gajber = ga_ji - (pnjmn + pjak);
		cout << "Gaji Bersih : " << gajber << endl;
		cout << endl;
		
	}
	return 0;
	
}