//Tinh gia tri bieu thuc S = 1 + 2 + ... + n
#include <iostream>
using namespace std;
int tinh_tong(int n) {
    int sum = 0;
    // Dung vong lap de cong don cac so tu 1 den n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    int sum = tinh_tong(n);
    cout << "Gia tri cua bieu thuc S = 1 + 2 + ... + " << n << " la: " << sum << endl;

    return 0;
}
