//Cho 4 so xe. Tim so nut
#include <iostream>
using namespace std;
int count(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

int main() {
    int so_xe;
    cout << "Nhap so xe (4 chu so): ";
    cin >> so_xe;
    int so_nut = count(so_xe);
    cout << "So nut cua so xe la: " << so_nut << endl;
    return 0;
}
