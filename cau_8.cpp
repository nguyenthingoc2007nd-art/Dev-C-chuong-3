#include <iostream>
#include <string>
using namespace std;

int main() {
    string c1, c2;
    cin >> c1 >> c2;

    if ((c1 == "red" && c2 == "blue") || (c1 == "blue" && c2 == "red"))
        cout << "purple";
    else if ((c1 == "red" && c2 == "yellow") || (c1 == "yellow" && c2 == "red"))
        cout << "orange";
    else if ((c1 == "blue" && c2 == "yellow") || (c1 == "yellow" && c2 == "blue"))
        cout << "green";
    else
        cout << "Loi mau";

    return 0;
}

