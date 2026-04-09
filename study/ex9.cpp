// 정수를 1개 읽고 10자리 수가 얼마인지 출력하라

#include <iostream>
using namespace std;

int main()
{
    int a;
    int count = 0;

    cout << "정수를 입력하세요>> ";
    cin >> a;

    // 0일 때 처리
    if(a == 0) {
        count = 1;
    } else {
        // 음수 처리
        if(a < 0) a = -a;

        while(a > 0) {
            a /= 10;
            count++;
        }
    }

    cout << "자리수는 " << count << "자리입니다." << endl;

    return 0;
}