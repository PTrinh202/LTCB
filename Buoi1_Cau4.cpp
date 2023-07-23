//Nhap vao so nguyen duong n tinh tong cac chu so do
#include <iostream>
using namespace std;
int main(){
	int n;
	int so, tong = 0;
	cout<<"Nhap so: ";
	cin>>n;
	so = n;
	while(so != 0){
		tong += so % 10;
		so /= 10;
		}
	cout<<"Tong cua "<<n<<" la "<<tong<<endl;
	return 0;
}
