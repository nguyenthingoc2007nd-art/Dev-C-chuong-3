#include <iostream>
using namespace std;

int main() {
    int quantity;
    cin >> quantity;

    if (quantity < 10) {
        cout << "So luong khong hop le";
        return 0;
    }

    int price = 99;
    double discount = 0;

    if (quantity <= 19) discount = 0.2;
    else if (quantity <= 49) discount = 0.3;
    else if (quantity <= 99) discount = 0.4;
    else discount = 0.5;

    double total = quantity * price * (1 - discount);
    cout << "Tong tien: " << total;

    return 0;
}

