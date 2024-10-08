//coding di  buat oleh nindya alifa yang baik hati
//nim 240121053
//gabungan ray
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int maxkaryawan = 50;
	string namakaryawan[maxkaryawan];
	int jamkerja[maxkaryawan];
	float gajiperjam[maxkaryawan];
	float totalgaji[maxkaryawan];
	int jumlahkaryawan = 0;
	char lagi;
	
	do{
		cout << "Masukkan Nama Karyawan ke-" << jumlahkaryawan + 1 << ":";
		cin >> namakaryawan[jumlahkaryawan];
		cout << "Masukkan Jumlah Jam Kerja " << namakaryawan[jumlahkaryawan] << ":";
		cin >> jamkerja [jumlahkaryawan];
		cout <<"Masukkan Gaji Per Jam Untuk" << namakaryawan [jumlahkaryawan] <<":";
		cin >> gajiperjam [jumlahkaryawan];
		
		totalgaji[jumlahkaryawan] = jamkerja[jumlahkaryawan] * gajiperjam[jumlahkaryawan]; 
		jumlahkaryawan++;
		
		cout << " Apakah anda ingin input data lagi? (Y/T): ";
		cin >> lagi;

	}while(lagi == 'Y' || lagi == 'y');

	cout <<
"\n=====================================================================================\n";
	cout << setw(15) << left << "Nama"
		     << setw(15) << "jam kerja"
   		  << setw(15) << "Gaji per jam"
		     << setw(15) << "Gaji total"<<endl;
	cout <<
"=====================================================================================\n";
	for(int i=0; i < jumlahkaryawan; i++){
		cout << setw(15) << left << namakaryawan [i]
		    	 << setw(15) << jamkerja[i]         
		    	 <<setw(15) << gajiperjam[i]	
			     << setw(15) << totalgaji[i] << endl;
	}
    cout <<
"=====================================================================================\n";

	return 0;
}
