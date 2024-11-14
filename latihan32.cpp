//dibuat oleh nindya alifa
//nim 240121053
//
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdio.h>
#include <string.h>

using namespace std; //strcmp = string compare = membandingkan string
                     //strcpy = sring copy =menambah dan mengcopy string
int main(){           
char kd[3];
char nama[20]="";
float harga=0 ;
int jml,
hasil = 0 ;

cout<<"Penjualan kumpoter STMIK PENUSA\n";
cout<<"-------------------------------------------------------------------------------------------------------------\n";
cout<<"Input kode :";
cin>> kd ;
hasil = strcmp(kd, "PII");
if (hasil==0)
{
	strcpy(nama,"komp PENTIUM II");
	harga = 1500000 ;
}
hasil = strcmp(kd, "PIII");
if (hasil==0)
{
	strcpy(nama,"komp PENTIUM III");
	harga = 2500000 ;
}
hasil = strcmp(kd, "PIV" );
if(hasil==0)
{
	strcpy(nama,"komp PENTIUM VI");	
	harga = 2500000 ;
}
cout << "Nama :" << nama << endl;
cout << "Harga :" << setw(9) << harga << endl;
cout << "Jumlah Jual :" ;
cin >> jml;
long tharga = jml * harga ;
cout << "Total Harga :" << setw(9) << tharga << endl;
cout<<"-------------------------------------------------------------------------------------------------------------\n";
return 0;
}





