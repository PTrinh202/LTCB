//Kiem tra so nguyen n la so nguyen to khong ?
#include <iostream>
using namespace std;
bool so_nguyen_to(int n) {
    // Kiem tra truong hop dac biet
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }

    // Kiem tra cac so tu 2 den can bac 2 cua n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;

    cout << "Nhap so nguyen n: ";
    cin >> n;

    if (so_nguyen_to(n)) {
        cout << n << " la so nguyen to" << endl;
    } else {
        cout << n << " khong la so nguyen to" << endl;
    }

    return 0;
}
