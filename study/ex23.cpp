// 소수점을 가지는 실수 5개를 입력받아 양수들만 합하여 출력하라. 
// 실수를 입력받고 합하기 위해서는 double 타입의 변수를 사용하라.
// cin으로 실수 읽기와 for문 연습

#include <iostream>
using namespace std;

int main()
{
    double a;
    double sum = 0;

    cout << "실수 5개를 입력하세요>> ";

    for(int i = 0; i < 5; i++)
    {
        cin >> a;

        if(a > 0)
        {
            sum += a;
        }
    }

    cout << "양수들의 합은 : " << sum << endl;

    return 0;
}