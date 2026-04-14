// 빈칸 없는 문자열을 입력받아 각 문자를 분리하여 출력하는 프로그램을 작성하라.
// cin >>를 이용한 문자열 입력 및 streing 활용

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[100];

    cout << "빈칸 없이 문자열을 입력하세요>> ";
    cin >> a;

    for(int i = 0; i < strlen(a); i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}