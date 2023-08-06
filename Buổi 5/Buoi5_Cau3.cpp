#include <iostream>
using namespace std;
int tinh_gtri(int x, int a, int b, int c){
	return a*x*x+b*x+c;
}
int main(){
	int x;
	cout<<"Nhap x: ";
	cin>>x;
	int a = 2, b = 3, c = 1;
	int kq = tinh_gtri(x, a, b, c);
	cout<<"Gia tri ax^2 + bx + c = "<<kq<<endl;
	return 0;
}