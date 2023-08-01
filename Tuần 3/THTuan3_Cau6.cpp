#include <iostream>
using namespace std;
int chuvi(int length, int width) {
    return 2 * (length + width);
}
int dientich(int length, int width) {
    return length * width;
}
void veHCN(int length, int width) {
    for (int i = 0; i < width	; i++) {
        for (int j = 0; j < length; j++) {
            if(i == 0 || i == width-1 || j == 0 || j == length-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout <<endl;
    }
}
int main() {
    int length, width;
    cout << "Nhap vao do dai cua hinh chu nhat: ";
    cin >> length;
    cout << "Nhap vao do rong cua hinh chu nhat: ";
    cin >> width;
    int CHUVI = chuvi(length, width);
    int DIENTICH = dientich(length, width);
    veHCN(length, width);
    cout << "Chu vi cua hinh chu nhat la: " << CHUVI <<endl;
    cout << "Dien tich cua hinh chu nhat la: " << DIENTICH <<endl;
    cout << "Hinh chu nhat: " <<endl;
    return 0;
}
//0950080149_Do Huynh Phuong Trinh_CNPM03