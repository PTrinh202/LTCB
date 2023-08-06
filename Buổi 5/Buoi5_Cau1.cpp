#include <iostream>
#include <cmath>
using namespace std;
double tch (double a, double b){
	double canh_h = sqrt(a*a + b*b);
	return canh_h;
}
int main(){
	double c1, c2;
	cout<<"Nhap canh goc vuong: ";
	cin>>c1>>c2;
	double canh_h = tch(c1, c2);
	cout<<"Do dai canh huyen: "<<canh_h<<endl;
	return 0;
}