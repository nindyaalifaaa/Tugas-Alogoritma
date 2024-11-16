//dibuat oleh nindya alifa
//nim 240121053
// parametrik 2 variable

#include <iostream>
#include <iomanip>

using namespace std;

float luas( float panjang, float lebar ); //ini dia dua variabelnya
int main()
{
float panjang_se, lebar_se, luas_se;

cout << "program menghitung luas segiempat \n";

//input panjang dan lebar 
cout << "\n\t panjang : " ; //t tabolasi
cin >> panjang_se ;
cout << "\n\t lebar : " ;
cin >> lebar_se ;
/*menghitung luas segiempat*/
luas_se = luas(panjang_se, lebar_se);
cout << "\n\n Luas Segiempat = " << luas_se;
}

float luas (float panjang ,float lebar)
{
	return (panjang * lebar);
}


