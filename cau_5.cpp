#include <iostream>
using namespace std;

int main() {
    int weight, height;
    cin >> weight >> height;

    int bmi = weight * 10000 / (height * height);

    if (bmi < 18.5)
        cout << "Gay";
    else if (bmi <= 25)
        cout << "Binh thuong";
    else
        cout << "Thua can";

    return 0;
}

