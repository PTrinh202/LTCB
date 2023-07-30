////Viet chuong trinh nhap vao so nguyen duong n.Tinh tong S=1+1.2+_+1.2.3+_+n
#include <iostream>
using namespace std;
int main(){
	int i, n;
	long s=0, a=1;
	cout<<"Nhap n: ";
	cin>>n;
	for(int i = 1; i <= n; i++){
		a = a * i;
		s = s + a;
	}
	cout<<"Tong S: "<<s<<endl;
	return 0;
}
