#include <iostream>
using namespace std;
int gia_tri(int n) {
    if (n == 1) {
        return 1;
    }
    return n * gia_tri(n - 1);
}

int main() {
    int n;
    cout << "Nhap vao mot so nguyen duong lon hon 1: ";
    cin >> n;
    int kq = gia_tri(n);
    cout << "Gia tri cua " << n << "! la: " << kq <<endl;

    return 0;
}
//0950080149_Do Huynh Phuong Trinh_CNPM03
