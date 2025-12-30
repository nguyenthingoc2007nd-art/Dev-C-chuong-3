#include <iostream>
using namespace std;

int main() {
    int checks;
    double balance;
    cin >> balance >> checks;

    if (balance < 0 || checks < 0) {
        cout << "Du lieu khong hop le";
        return 0;
    }

    double fee = 10;

    if (checks < 20) fee += checks * 0.10;
    else if (checks <= 39) fee += checks * 0.08;
    else if (checks <= 59) fee += checks * 0.06;
    else fee += checks * 0.04;

    if (balance < 400) fee += 15;

    cout << "Phi ngan hang: " << fee;
    return 0;
}

