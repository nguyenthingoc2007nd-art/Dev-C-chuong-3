#include <iostream>
using namespace std;

int main() {
    double lambda;
    cin >> lambda;

    if (lambda >= 1e-2)
        cout << "Song radio";
    else if (lambda >= 1e-3)
        cout << "Song cua lo vi song";
    else if (lambda >= 7e-7)
        cout << "Song hong ngoai";
    else if (lambda >= 4e-7)
        cout << "Song anh sang";
    else if (lambda >= 1e-8)
        cout << "Song tu ngoai";
    else if (lambda >= 1e-11)
        cout << "Tia X";
    else
        cout << "Tia gamma";

    return 0;
}

