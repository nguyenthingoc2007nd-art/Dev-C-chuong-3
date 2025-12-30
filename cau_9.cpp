#include <iostream>
using namespace std;

int main() {
    int p, n, d, q;
    cin >> p >> n >> d >> q;

    int total = p + n*5 + d*10 + q*25;

    if (total == 100)
        cout << "Chinh xac 1 do la";
    else if (total > 100)
        cout << "Lon hon 1 do la";
    else
        cout << "Nho hon 1 do la";

    return 0;
}

