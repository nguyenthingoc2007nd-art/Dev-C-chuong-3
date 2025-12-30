#include <iostream>
using namespace std;

int main() {
    string name1, name2, name3;
    int t1, t2, t3;

    cin >> name1 >> t1;
    cin >> name2 >> t2;
    cin >> name3 >> t3;

    if (t1 < 0 || t2 < 0 || t3 < 0) {
        cout << "Thoi gian khong hop le";
        return 0;
    }

    if (t1 <= t2 && t1 <= t3) {
        cout << name1 << endl;
        if (t2 <= t3) cout << name2 << endl << name3;
        else cout << name3 << endl << name2;
    } else if (t2 <= t1 && t2 <= t3) {
        cout << name2 << endl;
        if (t1 <= t3) cout << name1 << endl << name3;
        else cout << name3 << endl << name1;
    } else {
        cout << name3 << endl;
        if (t1 <= t2) cout << name1 << endl << name2;
        else cout << name2 << endl << name1;
    }

    return 0;
}

