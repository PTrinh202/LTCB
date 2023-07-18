//Viet chuong trinh nhap 2 so nguyen. Xuat ra min, max
#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout<<"Nhap vao 2 so nguyen: ";
	cin >> a >> b;
	if (a > b){
	cout<<"min = "<<b<<"\n";
	cout<<"max = "<<a<<"\n";
	}
	else if(a < b){
	cout<<"min = "<<a<<"\n";
	cout<<"max = "<<b<<"\n";
	}
	return 0;
}