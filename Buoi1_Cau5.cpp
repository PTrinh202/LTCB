//Tim so lon nhat trong 3 so
#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Nhap c: ";
	cin>>c;
	int max;
	max = a;
	if(b > max) {
	max=b;}
	if(c > max) {
	max=c;}
	cout<<"Giá tri lon nhat: "<<max;
	return 0;
}