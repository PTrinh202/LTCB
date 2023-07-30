//Viet chuong trinh nhap vao so nguyen duong n.Tinh tong S=1/2+1/4+_+1/2n
#include<iostream>
using namespace std;
int main(){
	int i, n;
	float s;
	s = 0;
	cout<<"Nhap n: ";
	cin>> n;
	for (int i = 1; i <= n; i++) {
        s += 1.0 / (2 * i);
    }
	cout<<"Tong S: "<<s<<endl;
	return 0;
}