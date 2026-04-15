//한개의 색을 나타내는 빨강, 초록 파랑 성분을 가진 color 클래스이다.
//get() 맴버 함수를 구현하라.

#include <iostream>
using namespace std;

class Color
{
private :
    int r, g, b;
public :
    Color(int r, int g, int b);
    void get();
};

void Color::get(int &r, int &g, int &b)
{
    r = 
    g = 
    b = 
}



int main()
{
    Color fore(255, 0, 0), back(15, 128, 200);
    int r, g, b;
    fore.get(r, g, b);
    cout << "red = " << r << ", green = " << ", blue = " << b << endl;
    back.get(r, g, b);
    cout << "red = " << r << ", green = " << ", blue = " << b << endl;

}
