//dibuat oleh nindya alifa
//nim 240121053

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <windows.h>
using namespace std;

//deklarasi function
float pokok(float gaji, int jam);
int lembur(int gaji_pokok, int jam);
int jasa(int jam);
float makan(int jam);
int jamlembur(int jam, int gaji);
int label(int gaji, int jam);
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
	cout << setprecision(15);
	string nm;
	int jm_lmbur,pjg,maxpg = 50;
	const int gaji = 2000;
	float gjpkok,jamkrja,uanglmbr,uangmkn,uangjsa,gajtot;
	
	int pg = 1;
	char lagi;
	//proses input
	do{
	system("cls");
	cout << "------------------------------------------------------------------------------------";
	cout << "\n                                PT. Rejeki Nomplok \n";
	cout << "------------------------------------------------------------------------------------\n";
	cout << "\n Masukkan Nama: ";
	cin >> nm;
	cout << "\n Masukkan Jumlah Jam Kerja: ";
	cin >> jamkrja;
	
	system("cls");
	cout << "------------------------------------------------------------------------------------";
	cout << "\n                                PT. Rejeki Nomplok \n";
	cout << "------------------------------------------------------------------------------------\n";
	jm_lmbur = jamkrja - 7 ;
	gjpkok = pokok(gaji,jamkrja);
	uanglmbr = lembur(gaji,jamkrja) * jm_lmbur;
	uangjsa = jasa(jamkrja);
	uangmkn = makan(jamkrja);
	pjg = nm.length();
	
	cout << " "<< nm << " bekerja selama " << jamkrja << " jam:";
	gotoxy(pjg+2,4);cout <<"Gaji Pokok                ";
	gotoxy(33,4);label(gaji, jamkrja);
	gotoxy(49, 4);cout << "= " << gjpkok;
	gotoxy(pjg+2, 5);cout << "Uang Lembur";
	gotoxy(33,5);jamlembur(jamkrja, gaji);
	gotoxy(49, 5);cout << "= " << uanglmbr;
	gotoxy(pjg+2, 6);cout << "Uang Makan";
	gotoxy(49, 6);cout << "= " << uangmkn; 
	gotoxy(pjg+2, 7);cout << "Uang Jasa Lembur";
	gotoxy(49,7);cout << "= " << uangjsa;
	gajtot = gjpkok + uanglmbr + uangmkn + uangjsa;
	gotoxy(pjg+2, 8);cout << "Gaji yang diterima";
	gotoxy(49,8);cout << "= " << gajtot << endl;

	cout << "------------------------------------------------------------------------------------\n";

	pg++;
	cout << "\n Apakah Anda Ingin Menginput lagi[Y/T]: ";
	lagi = getch();
	cout << endl;
}
while(lagi == 'Y' || lagi == 'y' and pg <= maxpg );
	
	if(lagi == 't' || lagi == 'T'){
		system("cls");
		cout << "Anda Tidak Melanjutkan Input.";
	}
	return 0;
	
}

float pokok(float gaji, int jam){
	if(jam >= 0 and jam < 8){
		return (gaji * jam);
	}
	else if(jam >= 8){
		return (gaji * 7) ;
	}
}

int lembur(int gaji_pokok, int jam){
	if(jam > 7){
		return 1.5 * gaji_pokok;
	}
	if(jam < 7){
		return 0;
	}
}

int jasa(int jam){
	
	if(jam >= 9){
		return 3000;
	}
	else {
		return 0;
	}
}

float makan(int jam){
	if (jam >= 8 and jam <= 10){
		return 1500;
	}
	else if(jam > 10){
		return 2500;
	}
	else{
		return 0;
	}
}

int jamlembur(int jam, int gaji){
	if(jam > 7){
		int jml;
		jml = jam  - 7;
	cout << " = "<< jml << " x " << 1.5 * gaji;
	}
	else {
		return 0;
	}
}
int label(int gaji, int jam){
if(jam > 0 && jam <= 7)	{
	cout << " = " << jam << " x " << gaji;
}
else if (jam >= 8){
	cout << " = " << 7 << " x " << gaji;
}
else {
	return 0;
}
}
