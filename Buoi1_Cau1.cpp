//Giai phuong trinh bac nhat ax + b = 0
#include <iostream>
using namespace std;
int main() {
    float a, b, x;
    cout << "Nhap gia tri cua a: ";
    cin >> a;
    cout << "Nhap gia tri cua b: ";
    cin >> b;
    if (a != 0) {
        x = -b / a;
        cout << "Nghiem cua phuong trinh la x = " << x << endl;
    	} else {
        if (b == 0) {
            cout << "Phuong trinh vo so nghiem" << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    }
    return 0;
}
