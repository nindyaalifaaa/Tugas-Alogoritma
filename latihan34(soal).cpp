//dibuat oleh nindya alifa
//nim 240121053

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstdlib>
#include <string.h>
using namespace std;
int main(){
	cout << setprecision(20);
	char nm[20],glngn[5],kode[4],jbtn[20];
	float gaji,tnjngn,pnjmn,pjk,gjktor,gjbrsh;
	char lagi,label;
	int btspgwai = 0;
	int hasil = 0;
	cout << "             GAJI PEGAWAI PT. TELKOM" << endl;
	cout << "---------------------------------------------------" << endl;
	
	do{
		
	system("cls");
		
		cout << "Pegawai ke-" << btspgwai + 1 << endl;
		cout << "Nama Pegawai             : ";
		cin >> nm;
		cout << "Golongan                 : ";
		cin >> glngn;
		cout << "Kode Jabatan             : ";
		cin >> kode;
		
		hasil = strcmp(glngn, "Ia");
		if(hasil == 0){
			gaji = 500000;
		}
			hasil = strcmp(glngn, "IIa");
		if(hasil == 0){
			gaji = 750000;
		}
		hasil = strcmp(glngn, "IIIa");
		if(hasil == 0){
			gaji = 1000000;
		}
		hasil = strcmp(glngn, "Ib");
		if(hasil == 0){
			gaji = 1500000;
		}
			hasil = strcmp(glngn, "IIb");
		if(hasil == 0){
			gaji = 1750000;
		}
			hasil = strcmp(glngn, "IIIb");
		if(hasil == 0){
			gaji = 2500000;
		}
		
		hasil = strcmp(kode, "Dir");
		if(hasil == 0){
			strcpy(jbtn, "Direktur");
			tnjngn = 450000;
		}
		hasil = strcmp(kode, "Sek");
		if(hasil == 0){
			strcpy(jbtn, "Sekretaris");
			tnjngn = 300000;
		}
		hasil = strcmp(kode, "Wak");
		if(hasil == 0){
			strcpy(jbtn, "Wakil Direktur");
			tnjngn = 375000;
		}
		hasil = strcmp(kode, "Stf");
		if(hasil == 0){
			strcpy(jbtn, "Staf Administrasi");
			tnjngn = 20000;
		}
		
		
		cout << "Jabatan                  : " << jbtn << endl;
		cout << "Gaji                     : " << gaji << endl;
		cout << "Tunjangan                : " << tnjngn << endl;
		cout << "Pinjaman                 : ";
		cin >> pnjmn;
		pjk = gaji * 0.05;
		cout << "Pajak                    : " << pjk << endl;
		gjktor = gaji - tnjngn;
		cout << "Total Gaji Kotor         : " << gjktor << endl;
		gjbrsh = gjktor - pnjmn - pjk;
		cout << "Total Gaji Bersih        : " << gjbrsh << endl;
		cout << endl;
		cout << "---------------------------------------------------" << endl;
		
		btspgwai++;
		cout << endl;
		cout << "Masih Ingin Menghitung Gaji Lagi[Y/T]: ";
		lagi = getch();
		cout << endl;
	}while(lagi == 'Y' || lagi == 'y');
	if(lagi == 'T' || lagi == 't'){
		system("cls");
		cout << "Anda Tidak Melanjutkan Input";
}
	return 0;
}
