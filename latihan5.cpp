//nama:nindya alifa
//nim:240121053
//program gaji pegawai penusa
#include  <iostream>

using namespace std; 

int main()
{
	float gaji,pajak,pinjaman,gaber;
	char npeg[30],njab[30];
	
	cout << "Nama Pegawai : ";
	gets (npeg);
	cout << "Jabatan : ";
	cin >> njab;
	cout << "Gaji : ";
	cin >> gaji;
	pajak=0.15*gaji;
	cout << "pajak ; " <<pajak<<endl;
	cout<< "pinjam : ";
	cin >> pinjaman;
	gaber=gaji - (pinjaman + pajak);
	cout << "Gaji Bersih : " << gaber <<endl;
	
	return 0;
}
	
	