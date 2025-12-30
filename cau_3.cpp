#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cin >> day >> month >> year;

    if (day * month == year)
        cout << "La ngay phep thuat";
    else
        cout << "Khong phai ngay phep thuat";

    return 0;
}

