// Tim uoc so chung lon nhat cua 2 so nguyen duong a va b
#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	while(a != b){
		if(a > b){
			a -= b;
		}
		else{
			b -= a;
		}
	}
	cout<<"Uoc so chung lon nhat la: "<<a<<endl;
	return 0;
}
