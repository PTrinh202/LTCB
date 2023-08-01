#include <iostream>
using namespace std;
int min(int a, int b){
	return (a<b) ? a:b;
}
int main(){
	int num1, num2;
	cout<<"Nhap 2 so: ";
	cin >>num1>>num2;
	int so_nho_hon = min(num1, num2);
	cout<<"So nho hon la: "<<so_nho_hon<<endl;
	return 0;
}
/*int min(int a, int b){
	return (a<b) ? a:b;
}
int main(){
	int num1, num2, num3;
	cout<<"Nhap 3 so: ";
	cin>>num1>>num2>>num3;
	int so_nho_hon = min(num1, min(num2, num3));
	cout<<"So nho hon la: "<<so_nho_hon<<endl;
	return 0;
}*/