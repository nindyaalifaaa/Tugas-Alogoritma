//dibuat oleh nindya alifa
//nim 240121053
// parametrik 1 variable

#include <iostream>
#include <iomanip>

using namespace std;

float hitung(int s) ; // int s parametrik 1 variabel yg membawa nilai
int main()

{
	float volume, sisi;
	
	cout << "\n Memghitung volume KUBUS ";
	cout << "\n sisi KUBUS : " ;
	cin >> sisi;
	volume = hitung (sisi) ;
	cout << "\n volume KUBUS yaitu : " << 
	volume;
}
float hitung (int s)
{
	return (s *  s * s);
}
