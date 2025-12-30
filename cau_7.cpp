#include <iostream>
using namespace std;

int main() {
    int sec;
    cin >> sec;

    int day = sec / 86400;
    sec %= 86400;
    int hour = sec / 3600;
    sec %= 3600;
    int minute = sec / 60;
    sec %= 60;

    if (day > 0) cout << day << " ngay ";
    if (hour > 0) cout << hour << " gio ";
    if (minute > 0) cout << minute << " phut ";
    if (sec > 0) cout << sec << " giay ";

    return 0;
}

