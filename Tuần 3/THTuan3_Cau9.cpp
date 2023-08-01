#include <iostream>
using namespace std;
int dao_Vitri(int n) {
    int dao_vitri = 0;

    while (n > 0) {
        int kyso = n % 10;
        dao_vitri = dao_vitri * 10 + kyso;
        n /= 10;
    }

    return dao_vitri;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int dao = dao_Vitri(n);

    cout << "So dao nguoc la: " << dao <<endl;

    return 0;
}
//0950080149_Do Huynh Phuong Trinh_CNPM03
