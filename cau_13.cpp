#include <iostream>
using namespace std;

int main() {
    int books;
    cin >> books;

    if (books == 0) cout << "0 diem";
    else if (books == 1) cout << "5 diem";
    else if (books == 2) cout << "15 diem";
    else if (books == 3) cout << "30 diem";
    else cout << "60 diem";

    return 0;
}

