//dibuat oleh nindya alifa
//nim 240121053
//menggunakan sizeof 
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char nama [20]; //banyak carakter yg bisa dimasukkan
	char alamat [35];
	
	cout << "Masukkan nama anda :";
	cin.getline( nama, sizeof(nama) );  //sizeof fungsinys membaca string sesuai dengan ukuran yg sydah di definisikan 
	cout << "Masukkan alamat anda :";    //gdk batasnya
	cin.getline( alamat, sizeof(alamat) );
	cout << "Nama anda adalah :" << nama << endl;
	cout << "Alamat anda  :" << alamat << endl;
	system("color 0C"); //warna font
	return 0;
}
