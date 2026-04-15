#include <iostream>
using namespace std;

class Polygon
{
private:
    int size = 0;
    int *XList;
    int *YList;
public:
    Polygon(int size);
    void read();
    bool get(int n, int &x, int &y);
};

Polygon::Polygon(int size)
{
    this->size = size;
    XList = new int[size];
    YList = new int[size];
}

void Polygon::read()
{
    cout << "아래에 x, y 값으로 6개의 점을 입력하세요" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> XList[i] >> YList[i];  // 연속 입력 가능
    }
}

bool Polygon::get(int n, int &x, int &y)
{
    if (n < 1 || n > size)
        return false;
    x = XList[n - 1];
    y = YList[n - 1];
    return true;
}

int main()
{
    Polygon poly(6);
    poly.read();

    int n = 3, x, y;
    bool res = poly.get(n, x, y);

    if (res)
        cout << n << "번 째 점은 (" << x << "," << y << ")" << endl;
    else
        cout << n << "번 째 점은 없습니다." << endl;

    return 0;
}