#include <iostream>
using namespace std;

int main() {
    int calories, fat;
    cin >> calories >> fat;

    if (calories <= 0 || fat < 0 || fat * 9 > calories) {
        cout << "Du lieu khong hop le";
        return 0;
    }

    int fatCalories = fat * 9;
    double percent = (double)fatCalories / calories * 100;

    cout << "Ti le calo tu chat beo: " << percent << "%" << endl;

    if (percent < 30)
        cout << "Thuc pham it chat beo";

    return 0;
}

