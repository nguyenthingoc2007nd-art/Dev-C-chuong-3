#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int a = rand() % 900 + 100;
    int b = rand() % 900 + 100;

    int answer;
    cout << "  " << a << endl;
    cout << "+ " << b << endl;
    cout << "-----" << endl;
    cin >> answer;

    if (answer == a + b)
        cout << "Chuc mung! Ket qua dung.";
    else
        cout << "Sai. Ket qua dung la: " << a + b;

    return 0;
}

