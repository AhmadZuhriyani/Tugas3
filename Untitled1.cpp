#include <iostream>
using namespace std;

int main(){
	
	int gp,jk;
	int lmbr,gs,pjk,gk;
	
	cout <<"Penghitungan Gaji Karyawan"<<endl;
	cout <<"Masukkan Gaji Pokok Anda : Rp. ";
	cin >>gp;
	cout <<"Masukkan Jam Kerja Anda : ";
	cin>>jk;
	
	lmbr=jk-40;
	gs=(lmbr*1.5+40)*gp;
	pjk=gs*0.15;
	gk=gs-pjk;
	
}
	


