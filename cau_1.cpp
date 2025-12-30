#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a > b) {
        cout << "So lon hon: " << a << endl;
        cout << "So nho hon: " << b;
    } else {
        cout << "So lon hon: " << b << endl;
        cout << "So nho hon: " << a;
    }
    return 0;
}

