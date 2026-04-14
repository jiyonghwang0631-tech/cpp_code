#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;

    cout << "빈칸 없이 문자열을 입력하세요>> ";
   
    cin >> a;

    for(char c : a)
        cout << c << ' ';

    return 0;
}