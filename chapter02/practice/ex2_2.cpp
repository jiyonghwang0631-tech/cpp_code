#include <iostream>

using namespace std;

int main()
{
    cout << "사각형의 두점 (x1, y1, x2, y2)을 입력 하세요 >> " << endl;

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double a = (x2 - x1) / 2.0;
    double b = (y2 - y1) / 2.0;
    double area = 3.14 * a * b;


    cout << " 타원의 면적은 : " << area << endl;
    return 0; 
}