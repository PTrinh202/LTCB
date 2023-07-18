#include <iostream>
#define PI 3.14
using namespace std;
int main(){
	float r, chuvi, dientich;
	cout<<"Nhap ban kinh hinh tron \n";
	cin>> r;
	chuvi = 2 * PI * r;
	cout<<"Chu vi la: "<< chuvi <<"\n";
	dientich = PI * r * r;
	cout<<"Dien tich la: "<< dientich <<"\n";
	return 0;
}
