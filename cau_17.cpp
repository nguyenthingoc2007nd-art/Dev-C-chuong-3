#include <iostream>
using namespace std;

int main() {
    string name1, name2, name3;
    double h1, h2, h3;

    cin >> name1 >> h1;
    cin >> name2 >> h2;
    cin >> name3 >> h3;

    if (h1 < 2 || h1 > 5 || h2 < 2 || h2 > 5 || h3 < 2 || h3 > 5) {
        cout << "Du lieu khong hop le";
        return 0;
    }

    if (h1 >= h2 && h1 >= h3)
        cout << name1;
    else if (h2 >= h1 && h2 >= h3)
        cout << name2;
    else
        cout << name3;

    return 0;
}

