#include <iostream>
using namespace std;
int uscln(int a, int b) {
    if (b == 0) {
        return a;
    }
    return uscln(b, a % b);
}
int bscnn(int a, int b) {
    return (a * b) / uscln(a, b);
}
int main() {
    int num1, num2;
    cout << "Nhap vao hai so: ";
    cin >> num1 >> num2;
    int USCLN = uscln(num1, num2);
    int BSCNN = bscnn(num1, num2);
    cout << "Uoc so chung lon nhat la: " << USCLN <<endl;
    cout << "Boi so chung nho nhat la: " << BSCNN <<endl;

    return 0;
}
//0950080149_Do Huynh Phuong Trinh_CNPM03
