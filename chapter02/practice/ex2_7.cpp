// 빈칸 없는 두 개의 문자열을 입력 받아 두 개의 문자열이 같으면 "Yes", 아니면 "No"를 출력 하는 프로그램을 작성하라
// 다음 2개의 문항에 지시된 대로 각각 작성하라. 빈 칸 없는 문자열의 입력은 cin과 >> 연산자를 이용하면 된다.

//  cin >> 과 string 사용

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;

    cout << "두 문자열을 입력하세요>> ";
    
    cin >> a;
    
    cout << "두 문자열을 입력하세요>> ";   

    cin >> b;

    if(a == b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}