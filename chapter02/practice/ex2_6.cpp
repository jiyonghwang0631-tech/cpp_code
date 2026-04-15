#include <iostream>
#include <string>
using namespace std;

int main()
{
    string day;
    int start = 0;

    cout << "3월 1일은 무슨 요일입니까 >> ";
    cin >> day;

    // 요일 
    if(day == "일") start = 0;
    else if(day == "월") start = 1;
    else if(day == "화") start = 2;
    else if(day == "수") start = 3;
    else if(day == "목") start = 4;
    else if(day == "금") start = 5;
    else if(day == "토") start = 6;

    // 요일 출력 (헤더)
    cout << "\n일\t월\t화\t수\t목\t금\t토\n";

    // 시작 공백
    for(int i = 0; i < start; i++)
    {
        cout << "\t";
    }

    // 날짜 출력
    for(int i = 1; i <= 31; i++)
    {
        cout << i << "\t";

        if((i + start) % 7 == 0)
        {
            cout << endl;
        }
    }

    return 0;
}
// 3월 달력을 출력하는 프로그램을 작성해보자. 1일이 무슨 요일인지 입력받고 실행 결과와 같이 출력하라.
// 각 날은 탭 ('\t')으로 분리하여 출력하라


