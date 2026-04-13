#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    cout << "문자열 입력>> ";
    getline(cin, a, '\n');

    string b;

    for (int i = 0; i < a.size(); i++)
    {
        // 공백 처리
        if (a[i] == ' ')
        {
            // b가 비어있지 않고, 마지막이 공백이면 skip
            if (b.size() > 0 && b[b.size() - 1] == ' ')
                continue;
        }

        // 문자 추가
        b.append(1, a[i]);
    }

    cout << b << endl;

    return 0;
}