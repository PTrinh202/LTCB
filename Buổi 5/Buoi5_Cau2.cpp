#include <iostream>
using namespace std;
void hoanvi(int& a, int& b, int& c){
	int temp = a;
	a = b;
	b = c;
	c = temp;
}
int main(){
	int a = 1, b = 2, c = 3;
	hoanvi(a, b, c);
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	return 0;
}