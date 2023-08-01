#include <iostream>
using namespace std;
int x(int a, int b, int c){
	return (c-b)/a;
}
int main(){
	int a, b, c;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Nhap c: ";
	cin>>c;
	int kq = x(a, b, c);
	cout<<"Gia tri x la: "<<kq<<endl;
	return 0;
}
//0950080149_Do Huynh Phuong Trinh_CNPM3














