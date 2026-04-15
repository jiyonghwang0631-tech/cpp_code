//gpt 버전 (연습문제 6)

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string day;
    string week[7] = {"일", "월", "화", "수", "목", "금", "토"};

    cout << "3월 1일은 무슨 요일입니까 >> ";
    cin >> day;

    int start = -1;

    // 요일 위치 찾기
    for(int i = 0; i < 7; i++) {
        if(week[i] == day) {
            start = i;
            break;
        }
    }

    // 예외 처리
    if(start == -1) {
        cout << "잘못된 입력입니다.\n";
        return 0;
    }

    cout << "\n일\t월\t화\t수\t목\t금\t토\n";

    // 앞 공백 출력
    for(int i = 0; i < start; i++)
        cout << "\t";

    // 날짜 출력
    for(int i = 1; i <= 31; i++)
    {
        cout << i << "\t";
        if((i + start) % 7 == 0)
            cout << endl;
    }

    return 0;
}