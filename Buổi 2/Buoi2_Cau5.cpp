//Tim uoc so chung lon nhat cua 2 so nguyen duong a va b
#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    int ucln = gcd(a, b);
    cout << "Uoc so chung lon nhat cua " << a << " va " << b << " la: " << ucln << endl;

    return 0;
}
