//dibuat oleh nindya alifa
//nim 240121053
//nonparametrik atau tidak membawa nilai ada di php

#include <iostream>
#include <iomanip>


using namespace std;

void hitung() ; // mendekralasikan (prototype) fungsi yang tidak menghasilkan nilai
int main()

{
	
cout << "\n Menghitung volume KUBUS" ;
hitung() ; //memanggil fungsi hitung;
return 0;
}

void hitung()
{
	float sisi, volume ;
	cout << "\n sisi KUBUS : " ;
	cin >> sisi ;
	volume = sisi * sisi * sisi;
	cout << "\n Volume KUBUS yaitu : " << volume;
}


