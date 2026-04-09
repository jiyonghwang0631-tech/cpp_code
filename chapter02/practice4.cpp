#include <iostream>
#include <string>
using namespace std;

int toInt(string s) {
    if (s == "가위") return 0;
    if (s == "바위" || s == "주먹") return 1;
    if (s == "보") return 2;
    return -1;
}

int main() {
    string s, t;
    cout << "로미오>>";
    cin >> s;
    cout << "줄리엣>>";
    cin >> t;

    int r = toInt(s);
    int j = toInt(t);

    if (r == j) {
        cout << "비겼습니다." << endl;
    } else if ((r + 1) % 3 == j) {
        cout << "로미오가 졌습니다." << endl;
    } else {
        cout << "로미오가 이겼습니다." << endl;
    }
}