#include <iostream>
using namespace std;
int main(){
	int mssv, namhoc;
	string hoten, lop, khoa;
	cout<<"***BAI TAP THUC HANH MON LAP TRINH C***"<<endl;
	cout<<"******************Tuan 1***************"<<endl;
	cout<<"MSSV: "; 
	cin>>mssv;
	cout<<"Ho va ten: "; 
	cin>>hoten;
	cout<<"Lop: "; 
	cin>>lop;
	cout<<"Khoa: "; 
	cin>>khoa;
	cout<<"Nam hoc: "; 
	cin>>namhoc;
	cout<<"***BANG DIEM***"<<endl;
	float m1, m2, m3, m4, m5;
	cout<<"Mon 1: ";
	cin >> m1;
	cout<<"Mon 2: ";
	cin >> m2;
	cout<<"Mon 3: ";
	cin >> m3;
	cout<<"Mon 4: ";
	cin >> m4;
	cout<<"Mon 5: ";
	cin >> m5;
	float tb;
	tb = (m1 + m2 + m3 + m4 + m5)/5;
	cout<<"Diem TB: "<<tb<<endl;
	return 0;
}