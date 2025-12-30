#include <iostream>
using namespace std;

int main() {
    int mass;
    cin >> mass;

    int weight = mass * 98 / 10;

    if (weight > 100)
        cout << "Vat qua nang";
    else if (weight < 10)
        cout << "Vat qua nhe";
    else
        cout << "Trong luong: " << weight;

    return 0;
}

