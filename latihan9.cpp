//nama:nindya alifa
//nim:240121053
//program penghitungan gaji pegawai
#include  <iostream>
#include  <iomanip>

using namespace std; 

int main()
{
	float gjper_jam=500,jmlh_jamker,lmbur,totgaj;
	char npegwai[30];
	
	cout<<"PERHITUNGAN GAJI PEGAWAI HARIAN"<<endl;
	cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ __ "<<endl;
	cout<<"Nama Pegawai : ";
	gets(npegwai);//gets biar bisa spasi
	cout<<"Jumlah Jam Kerja : ";
	cin>>jmlh_jamker;
	if(jmlh_jamker>7){
	
	lmbur=(1.5*gjper_jam*(jmlh_jamker-7));
	totgaj=(7*gjper_jam)+lmbur;
   }else{
 	
 	lmbur=0;
 	totgaj=(jmlh_jamker*gjper_jam)+lmbur;
   }
 	
 	cout<<"Total Gaji Pegawai harian = "<<totgaj<<endl;
 	
 	
	
	return 0;
}