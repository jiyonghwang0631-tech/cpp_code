// 두 점으로 구성되는 사각형에 내접하는 타원의 면적을 출력하는 프로그램을 작성 하라.
// 두 점은 왼쪽 상단 점과 오른쪽 하단 점을 순서대로 입력하며 타원의 면적은 3.14*a*b로
// 구하면 된다. a화 b는 각각 타원의 반지름이다.
// 사격형의 두점 (x1, y1, x2, y2)을 입력하세요. 1 1 5 4
// 타원의 면적긍 9.42입니다.


#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    double a, b;

    cout << "사각형의 두 점 (x1 y1 x2 y2)을 입력하세요>> ";
    cin >> x1 >> y1 >> x2 >> y2;

    // 반지름 계산
    a = (x2 - x1) / 2.0;
    b = (y2 - y1) / 2.0;

    double area = 3.14 * a * b;

    cout << "타원의 면적은 " << area << "입니다." << endl;

    return 0;
}