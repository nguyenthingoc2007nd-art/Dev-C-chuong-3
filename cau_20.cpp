#include <iostream>
using namespace std;

int main() {
    int choice;
    double distance;

    cout << "1. Khong khi\n2. Nuoc\n3. Thep\n";
    cin >> choice;
    cin >> distance;

    if (distance < 0) {
        cout << "Khoang cach khong hop le";
        return 0;
    }

    double speed;

    switch (choice) {
        case 1: speed = 1100; break;
        case 2: speed = 4900; break;
        case 3: speed = 16400; break;
        default:
            cout << "Lua chon khong hop le";
            return 0;
    }

    double time = distance / speed;
    cout << "Thoi gian: " << time << " giay";

    return 0;
}

