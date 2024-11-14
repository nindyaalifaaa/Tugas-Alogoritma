//dibuat oleh nindya alifa
//nim 240121053
//fungsi fungsi dalam string
#include <iostream>
#include <string>

using namespace std;

int main(){
	string str1 = "STMIK";
	string str2 = "PENUSA";
	
	//concatemation
	string result = str1 + " " + str2;
	cout << "concatenated: " << result << std::endl;  //clated menggabungkan
	
	//length panjang karakter
	size_t length = result.length();
	cout << "length: " << length << std::endl;
	
	//substring posisi caraktrt
	string sub = result.substr(6, 6);
	cout << "substring: " << sub << std::endl;
	
	//find
	size_t pos = result.find("PENUSA");
	cout << "position of 'PENUSA': " << pos << std::endl;
	
	//replace menambah atau menyisipkan kata
	result.replace(0, 5, "Hi");
	cout << "replaced: " << result << std::endl;
	
	return 0;
}
