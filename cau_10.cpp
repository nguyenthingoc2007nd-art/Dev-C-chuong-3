#include <iostream>
using namespace std;

int main() {
    int month, year;
    cin >> month >> year;

    bool leap = false;

    if (year % 100 == 0) {
        if (year % 400 == 0) leap = true;
    } else if (year % 4 == 0) {
        leap = true;
    }

    switch (month) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            cout << 31; break;
        case 4: case 6: case 9: case 11:
            cout << 30; break;
        case 2:
            if (leap) cout << 29;
            else cout << 28;
            break;
        default:
            cout << "Thang khong hop le";
    }
    return 0;
}

