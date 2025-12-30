#include <iostream>
using namespace std;

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    int s1 = a1 * b1;
    int s2 = a2 * b2;

    if (s1 > s2)
        cout << "Hinh 1 lon hon";
    else if (s1 < s2)
        cout << "Hinh 2 lon hon";
    else
        cout << "Hai hinh bang nhau";

    return 0;
}

