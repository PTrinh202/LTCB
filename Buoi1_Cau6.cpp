//Ký tu chu thuong in ra chu hoa tuong ung
#include <iostream>
#include <cctype>
using namespace std;

char th(char c) {
    return toupper(c);
}

int main() {
    char chu_thuong, chu_hoa;

    cout << "Nhap mot ky tu chu thuong: ";
    cin >> chu_thuong;

    chu_hoa = th(chu_thuong);

    cout << "Ky tu chu hoa tuong ung la: " << chu_hoa << endl;

    return 0;
}
