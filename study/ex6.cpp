#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[10], t[10];
    cout << "로미오>>";
    cin >> s;
    cout << "줄리엣>>";
    cin >> t;
    
    if(strcmp(s, "가위") == 0 && strcmp(t, "보") == 0)
    cout << "로미오가 이겼습니다." << endl;

    if(strcmp(s, "바위") == 0 && strcmp(t, "보") == 0)
    cout << "로미오가 졌습니다." << endl;

    
}