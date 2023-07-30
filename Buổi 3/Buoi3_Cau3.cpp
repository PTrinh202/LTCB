//Liet ke so nho hon N nhap tu ban phim (N < 100)
#include <iostream>
using namespace std;
int main(){
	int N;
	cout<<"Nhap N: ";
	cin >> N;
	for(int i = 0; i < N; i++){
		cout<< i <<" ";
	}
	cout<<"La cac so nho hon "<<N<<endl;
	return 0;
}
