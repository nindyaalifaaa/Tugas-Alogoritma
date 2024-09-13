//nama:nindya alifa
//nim:240121053
//membuat program daftar mahasiswa
#include  <iostream>
#include  <iomanip>

using namespace std; 

int main()
{
	char namamhs[30],nim[10],nhruf;
	float nhdir,ntugs,nuts,nuas,nakhir;
	
	cout<<"DAFTAR NILAI MAHASISWA" << endl;
	cout<<"Mata Kuliah : Algoritma Pemrograman" << endl;
	cout<<"------------------------------------" << endl;
	cout<<"Nama Mahasiswa : ";
	gets(namamhs); //gets digunakan jika suatu kata menggunakan spasi
	cout<<"Nim : "; 
	cin>>nim;
	cout<<"Nilai Hadir : ";
	cin>>nhdir;
	cout<<"Nilai Tugas : ";
	cin>>ntugs;
	cout<<"Nilai UTS : ";
	cin>>ntugs;
	cout<<"Nilai UAS : ";
	cin>>nuas;
	
	nakhir=(0.1*nhdir)+(0.15*ntugs)+(0.35*nuts)+(0.4*nuas);
	
	if(nhdir>=85 && nakhir<100) { //artinya dan
		nhruf= 'A' ; //ini adalah if tunggal
	}else if(nakhir>=70 && nakhir<85) {
		nhruf= 'B' ;//jika di tmbah else maka menjadi if jamak
	}else if(nakhir>=60 && nakhir<70) {
		nhruf= 'C' ;
	}else if(nakhir>=50 && nakhir<60) {
		nhruf= 'D' ;
	}else if(nakhir>=0 && nakhir<50) {
		nhruf= 'E' ;
	}else {
		nhruf= '-' ;
	}
	
	cout<<"Nilai Akhir = " <<nakhir<<endl;
	cout<<"Nilai Huruf= " <<nhruf<<endl;

	
	return 0;
}
