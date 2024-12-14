/*

username: admin
password: 123

==TUGAS PROYEK ALGORITMA PEMROGRAMAN==
===== KELOMPOK 2 ====
>NINDYA ALIFA
>CITRA ANDINI
>AKBAR MAULANA PURBA
>ALVEN CORNELIUS SEMBIRING

*/

#include <iostream>
#include <conio.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <windows.h>
#include <string>



using namespace std;

struct Barang {
	int kodeBarang,hargaBeli,hargaJual,stokAwal,stokAkhir,terjual;
	string namaBarang,satuan;
};

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//tambah data
void tambah(const string &filename) {
	char lg;
	int i= 0;

	ofstream file(filename, ios::app);
	if (!file.is_open()) {
		gotoxy(0,10);
		cout << "\t\t\t\t Error: Tidak dapat membuka file!" << endl;
		system("pause");
	}

	do {
add:
		system("cls");
		cout << "\t\t\t==================================================== \n";
		cout  << "\t\t\t---             Tambah Data Barang               --- \n";
		cout << "\t\t\t==================================================== \n";

		Barang barang[50];
		cout << "\t\t\t Masukkan Kode Barang: ";
		cin >> barang[i].kodeBarang;
		cin.ignore();

		int kode = barang[i].kodeBarang;

		ifstream infile(filename.c_str());
		vector<Barang> dataList;
		string line;

		while (getline(infile, line)) {


			stringstream ss(line);
			Barang barang;
			string kodeBarang2;
			getline(ss,kodeBarang2, ',');
			barang.kodeBarang = stoi(kodeBarang2);
			dataList.push_back(barang);
		}
		for (auto &barang : dataList) {

			if (kode == barang.kodeBarang) {
				system("cls");
				gotoxy(0,10);
				cout << "\t\t\t\t Kode Barang Sudah Digunakan!\n";
				cout << "\t\t\t\t Tekan Sembarang Untuk Menambah Data Kembali...";
				getch();
				goto add;
			}
		}

		cout << "\t\t\t Nama Barang: ";
		getline(cin, barang[i].namaBarang);
		cout << "\t\t\t Satuan: ";
		cin >> barang[i].satuan;
		cout << "\t\t\t Harga Beli: ";
		cin >> barang[i].hargaBeli;
		cout << "\t\t\t Harga Jual: ";
		cin >> barang[i].hargaJual;
		cout << "\t\t\t Stok Awal: ";
		cin >> barang[i].stokAwal;
		cout << "\t\t\t jumlah Terjual: ";
		cin >> barang[i].terjual;
		cout << "\t\t\t Stok Akhir: ";

		barang[i].stokAkhir = barang[i].stokAwal - barang[i].terjual;
		cout << barang[i].stokAkhir << endl;
		file << barang[i].kodeBarang << "," << barang[i].namaBarang << "," << barang[i].satuan << ","
		     << barang[i].hargaBeli << "," << barang[i].hargaJual << "," << barang[i].stokAwal << "," << barang[i].terjual <<
		     "," << barang[i].stokAkhir << endl;
		i++;
		cout << "\t\t\t Apakah Ingin Menambah Barang Lagi[Y/T]: ";
		cin >> lg;
	} while(lg == 'y' || lg == 'Y');
	file.close();
	system("cls");
	gotoxy(0,10);
	cout << "\t\t\t\t Data berhasil ditambahkan!" << endl;
	cout << "\t\t\t\t Tekan Sembarang Untuk Balik Ke Menu Utama...";
	getch();
}


//ubah data
void ubah(const string &filename) {
	char con;
	ifstream file(filename.c_str());
	if (!file.is_open()) {
		system("cls");
		gotoxy(0,10);
		cout << "\t\t\t\t Error: Tidak dapat membuka file!\n" ;
		cout << "\t\t\t\t Tekan Sembarang Untuk Balik Ke Menu Utama...";
		getch();
		return;
	}

	vector<Barang> dataList;
	string line;
	while (getline(file, line)) {


		stringstream ss(line);
		Barang barang;
		string kodeBarang,hargaBeli,hargaJual,stokAwal,terjual,stokAkhir;
		getline(ss,kodeBarang, ',');
		getline(ss, barang.namaBarang, ',');
		getline(ss, barang.satuan, ',');
		getline(ss, hargaBeli, ',');
		getline(ss, hargaJual, ',');
		getline(ss, stokAwal, ',');
		getline(ss, terjual, ',');
		getline(ss, stokAkhir, ',');
		barang.kodeBarang = stoi(kodeBarang);
		barang.hargaJual  = stoi(hargaJual);
		barang.hargaBeli = stoi(hargaBeli);
		barang.stokAwal = stoi(stokAwal);
		barang.terjual= stoi(terjual);
		barang.stokAkhir = stoi(stokAkhir);
		dataList.push_back(barang);

	}
	file.close();

	int targetId;
	gotoxy(0,10);
	cout << "\t\t\t\t Masukkan Kode Barang yang ingin diperbarui: ";
	cin >> targetId;
	cin.ignore();

	bool found = false;
	for (auto &barang : dataList) {

		if (barang.kodeBarang == targetId) {
			found = true;
			system("cls");
			cout << "\t\t\t==================================================== \n";
			cout << "\t\t\t---                Ubah Data Barang              --- \n";
			cout << "\t\t\t==================================================== \n";
			cout << "\t\t\t Masukkan Nama Barang: ";
			getline(cin, barang.namaBarang);
			cout << "\t\t\t Masukkan Satuan: ";
			cin >> barang.satuan;
			cout << "\t\t\t Masukkan Harga Beli: ";
			cin >> barang.hargaBeli;
			cout << "\t\t\t Masukkan Harga Jual: ";
			cin >> barang.hargaJual;
			cout << "\t\t\t Masukkan Stok Barang: ";
			cin >> barang.stokAwal;
			cout << "\t\t\t Masukkan jumlah Terjual: ";
			cin >> barang.terjual;
			barang.stokAkhir = barang.stokAwal - barang.terjual;
			break;
		}


	}
	if(!found) {
		system("cls");
		gotoxy(0,10);
		cout << "\t\t\t\t Kode " << targetId << " Tidak Diemukan!\n";
		gotoxy(0,11);
		cout << "\t\t\t\t Tekan Sembarang Untuk Balik Ke Menu Utama...";
		getch();
		return;
	}
	gotoxy(0,10);
	cout << "\t\t\t Anda Yakin Ingin Mengubah Data Dengan Kode Barang [ "<< targetId<<" ] (Y/T): ";
	cin >> con;
	if(con == 'y' || con == 'Y' ) {

		ofstream outFile(filename, ios::trunc);
		Barang barang;
		for (const auto &barang : dataList) {
			outFile << barang.kodeBarang << "," << barang.namaBarang << "," << barang.satuan << ","
			        << barang.hargaBeli << "," << barang.hargaJual << "," << barang.stokAwal << "," << barang.terjual << "," << barang.stokAkhir << endl;
		}

		outFile.close();
		system("cls");
		gotoxy(0,10);
		cout << "\t\t\t\t Data berhasil Diubah!" << endl;
		gotoxy(0,11);
		cout << "\t\t\t\t Tekan Sembarang Untuk Balik Ke Menu Utama..." << endl;
		getch();
		return;
	} else {
		system("cls");
		gotoxy(0,10);
		cout << "\t\t\t\t Data Batal Diubah!" << endl;
		gotoxy(0,11);
		cout << "\t\t\t\t Tekan Sembarang Untuk Balik Ke Menu Utama...";
		getch();
	}
}

//hapus data
void hapus(const string &filename) {
	ifstream file(filename);
	char con;
	if (!file.is_open()) {
		gotoxy(0,10);
		cout << "\t\t\t\t Error: Tidak dapat membuka file!" << endl;
		gotoxy(0,11);
		cout << "\t\t\t\t Tekan Sembarang Untuk Balik Ke Menu Utama...";
		getch();
		return;
	}

	vector<Barang> dataList;
	string line,nama;
	while (getline(file, line)) {
		Barang barang;
		stringstream ss(line);

		string kodeBarang,hargaBeli,hargaJual,stokAwal,terjual,stokAkhir;
		getline(ss,kodeBarang, ',');
		getline(ss, barang.namaBarang, ',');
		getline(ss, barang.satuan, ',');
		getline(ss, hargaBeli, ',');
		getline(ss, hargaJual, ',');
		getline(ss, stokAwal, ',');
		getline(ss, terjual, ',');
		getline(ss, stokAkhir, ',');
		nama = barang.namaBarang;
		barang.kodeBarang = stoi(kodeBarang);
		barang.hargaJual  = stoi(hargaJual);
		barang.hargaBeli = stoi(hargaBeli);
		barang.stokAwal = stoi(stokAwal);
		barang.terjual= stoi(terjual);
		barang.stokAkhir = stoi(stokAkhir);
		dataList.push_back(barang);

	}

	file.close();

	int targetId;
	gotoxy(0,10);
	cout << "\t\t\t\t Masukkan Kode yang ingin dihapus: ";
	cin >> targetId;
	bool found = false;
	for (auto it = dataList.begin(); it != dataList.end(); ++it) {
		if (it->kodeBarang == targetId) {
			found = true;
			dataList.erase(it);
			break;
		}
	}
	if (!found) {
		system("cls");
		gotoxy(0,10);
		cout << "\t\t\t\t Data Barang dengan Kode " << targetId << " tidak ditemukan!" << endl;
		gotoxy(0,11);
		cout << "\t\t\t\t Tekan Sembarang Untuk Balik Ke Menu Utama...";
		getch();
		return;
	}
	cout << "\t\t\t\t Apakah Anda Yakin Ingin Menghapus "<< nama <<" Dengan Kode [ " << targetId <<" ] (Y/T): ";
	cin >> con;



	if(con == 'y' || con == 'Y') {
		ofstream outFile(filename, ios::trunc);
		for (const auto &barang : dataList) {
			outFile << barang.kodeBarang << "," << barang.namaBarang << "," << barang.satuan << ","
			        << barang.hargaBeli << "," << barang.hargaJual << "," << barang.stokAwal << "," << barang.terjual << "," << barang.stokAkhir << endl;
		}


		outFile.close();
		system("cls");
		gotoxy(0,10);
		cout << "\t\t\t\t Data berhasil dihapus!" << endl;
		gotoxy(0,11);
		cout << "\t\t\t\t Tekan Sembarang Untuk Balik Ke Menu Utama...";
		getch();
	} else {
		system("cls");
		gotoxy(0,10);
		cout << "\t\t\t\t Data batal dihapus!" << endl;
		gotoxy(0,11);
		cout << "\t\t\t\t Tekan Sembarang Untuk Balik Ke Menu Utama...";
		getch();
	}
}


//tampil data
void tampil(const string &filename) {
	int i;
	int totalJual=0;
	int totalStokAwal = 0;
	int hJual= 0;
	int hBeli = 0;
	int totalStokAkhir = 0;
	ifstream file(filename.c_str());

	if (!file.is_open()) {
		gotoxy(0,10);
		cout << "\t\t\t\t Error: Tidak dapat membuka file!";
		gotoxy(0,11);
		cout << "\t\t\t\t Tekan Sembarang Untuk Balik Ke Menu Utama...";
		getch();
		return;
	}
	string line;
	cout << "\n\t +------------------------------------------------------------------------------------------------------+ \t\n";
	cout << "\t |                                  LAPORAN DATA BARANG TOKO KELOMPOK 2                                 | \t\n";
	cout << "\t +------------------------------------------------------------------------------------------------------+ \t\n";
	cout << "\t | " << setw(1) <<"No | "
	     << setw(5) <<"Kode Barang |"
	     << setw(9) << " Nama Barang | "
	     << setw(8) << "Satuan | "
	     << setw(8) << "Harga Beli |"
	     << setw(8) << " Harga Jual | "
	     << setw(8) << "Stok Awal | "
	     << setw(7) << "Terjual | "
	     << "Stok Akhir | \n";
	cout << "\t +------------------------------------------------------------------------------------------------------+ \t\n";
	while (getline(file, line)) {

		stringstream ss(line);
		string kodeBarang,namaBarang,satuan,hargaBeli,hargaJual,stokAwal,terjual,stokAkhir;
		getline(ss,kodeBarang, ',');
		getline(ss, namaBarang, ',');
		getline(ss, satuan, ',');
		getline(ss, hargaBeli, ',');
		getline(ss, hargaJual, ',');
		getline(ss, stokAwal, ',');
		getline(ss, terjual, ',');
		getline(ss, stokAkhir, ',');
		i++;
		cout << setw(11) << "| " <<setw(1) << i
		     << setw(12) <<kodeBarang
		     << setw(15) << namaBarang
		     << setw(11) << satuan
		     << setw(12) << hargaBeli
		     << setw(12) << hargaJual
		     << setw(12) << stokAwal
		     << setw(10) << terjual
		     << setw(10) << stokAkhir
		     <<setw(9) << " |  "
		     << "\n";

		Barang barang;
		barang.hargaBeli = stoi(hargaBeli);
		barang.hargaJual = stoi(hargaJual);
		barang.terjual= stoi(terjual);
		barang.stokAkhir = stoi(stokAkhir);
		barang.stokAwal = stoi(stokAwal);
		hBeli += barang.hargaBeli;
		hJual += barang.hargaJual;
		totalJual += barang.terjual;
		totalStokAwal += barang.stokAwal;
		totalStokAkhir += barang.stokAkhir;
	}

	cout << "\t +------------------------------------------------------------------------------------------------------+ \t\n";
	cout << setw(56) << " = " << hBeli
	     << setw(6) << " = " << hJual
	     << setw(9) << " = " << totalStokAwal
	     << setw(8) << " = " << totalJual
	     << setw(8) << " = " << totalStokAkhir
	     << endl;

	cout << "\n\t\t\t\t Tekan Sembarang Untuk Kembali Ke Menu Utama...";
	getch();
	return;
	file.close();
}


//print data
void cetak(const string &filename) {
	ifstream file(filename);
	if (!file.is_open()) {
		gotoxy(0,10);
		cout << "\t\t\t\t Error: Tidak dapat membuka file!" << endl;
		cout << "\t\t\t\t Tekan Sembarang Untuk Kembali Ke Menu Utama...";
		getch();
		return;
	}

	ofstream cetak("cetak.txt");
	string line;

	while (getline(file, line)) {
		cetak << line << endl;
	}
	file.close();
	cetak.close();

	int status = system("notepad /p cetak.txt");
	if (status == 0) {
		gotoxy(0,10);
		cout << "\t\t\t\t Data berhasil dikirim ke printer!" << endl;
		cout << "\t\t\t\t Tekan Sembarang Untuk Kembali Ke Menu Utama...";
		getch();
	} else {
		gotoxy(0,10);
		cout << "\t\t\t\t Error: Gagal Mencetak Data!" << endl;
		cout << "\t\t\t\t Tekan Sembarang Untuk Kembali Ke Menu Utama...";
		getch();
	}
	remove("cetak.txt");
}


int main() {
	cout << setprecision(15);
	string filename = "Data-barang.Dat";
	int pil;
	char ch;
	string un = "admin";
	string pass ="123";
	string user = "";
	string pw = "";


login:
	system("cls");
	cout << endl;
	gotoxy(0,7);
	cout << "\t\t\t            ---Halaman Login Toko Kelompok 2---\n" ;
	cout << "\t\t\t         +========================================+\n";
	cout << "\t\t\t               Username: ";
	cin >> user;
	cout << "\t\t\t               Password: ";
	cin >> pw;

	if(user == un && pw == pass) {
		system("cls");
		gotoxy(0,10);
		cout << "\t\t\t\t Anda Berhasil Login!\n";
		cout << "\t\t\t\t Tekan Sembarang Untuk Melanjutkan....";
		getch();
		goto mainmenu;
	} else {
		system("cls");
		gotoxy(0,10);
		cout << "\t\t\t\t Username/Passwword Salah!\n";
		cout << "\t\t\t\t Tekan Sembarang Untuk Kembali Kembali...";
		getch();
		goto login;
	}


mainmenu:
	system("cls");
	cout << "\t\t\t===============================================================\n";
	cout << "\t\t\t---                     Toko Kelompok 2                     ---\n";
	cout << "\t\t\t---              Jl. Melati II, Kec.Perbaungan              ---\n";
	cout << "\t\t\t---                     +62 81276392389                     ---\n";
	cout << "\t\t\t===============================================================\n";

	cout << endl;

	cout << "\t\t\tMenu: \n";
	cout << "\t\t\t1. Tambah Data Barang \n";
	cout << "\t\t\t2. Edit Data Barang \n";
	cout << "\t\t\t3. Hapus Data Barang \n";
	cout << "\t\t\t4. Lihat Data Barang \n";
	cout << "\t\t\t5. Cetak Data Barang \n";
	cout << "\t\t\t6. Keluar \n";
	cout << "\t\t\tPilih Opsi: ";
	cin >> pil;
	switch(pil) {
		case 1:
			system("cls");
			tambah(filename);
			goto mainmenu;
			break;
		case 2:
			system("cls");
			ubah(filename);
			goto mainmenu;
			break;
		case 3:
			system("cls");
			hapus(filename);
			goto mainmenu;
			break;
		case 4:
			system("cls");
			tampil(filename);
			goto mainmenu;
			break;
		case 5:
			system("cls");
			cetak(filename);
			goto mainmenu;
			break;
		case 6:

			system("cls");
			break;
		default:
			system("cls");
			gotoxy(0,10);
			cout << "\t\t\t\t Pilihan " << pil <<" Tidak Tersedia!\n";
			cout << "\t\t\t\t Tekan Sembarang Untuk Kembali Kembali...";
			getch();
			goto mainmenu;
			break;
	}

	return 0;
}