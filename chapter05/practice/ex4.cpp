// main() 함수와 실행 결과를 참고하여 combineBubble() 함수를 작성하라.
// combineBubble()은 두 버블의 크기가 다르면 큰 버블을 작은 버블의 크기만큼 더 키우고
// 작은 버블의ㅏ 크기를 0으로 한 뒤 true를 리턴한다. 두 버블의 크기가 같으면
// 아무런 작업 없이 false만 리턴 한다.

#include <iostream>

using namespace std;

class Bubble
{
private :
    int radius;
public :
    Bubble(int radius)
    {
        this->radius = radius;
    }
    int getRadius()
    {
        return radius;
    }
    void setRadius(int n) 
    {
        radius = n ;
    }
};


bool combineBubble(Bubble &x, Bubble &y)
{
   int r1 = x.getRadius();
   int r2 = y.getRadius();

    if(r1 == r2)
    {
        return false;
    }
    if(r1 > r2)
    {
        x.setRadius(r1 + r2);
        y.setRadius(0);
    }
    else
    {
        x.setRadius(0);
        y.setRadius(r1 + r2);
    }

    return true;
}

bool combineBubble(Bubble *x, Bubble *y)
{
    int r1 = x->getRadius();
    int r2 = y->getRadius();

    if(r1 == r2)
    {
        return false;
    }
    if(r1 > r2)
    {
        x->setRadius(r1 + r2);
        y->setRadius(0);
    }
    else
    {
        x->setRadius(0);
        y->setRadius(r1+r2);

    }
    return true;
}


int main()
{
    Bubble a(5), b(10);
    if(combineBubble(&a, &b) == false)
        cout << "두 버블의 크기가 같음" << endl;
    else
        cout << "큰 쪽으로 병합됨" << endl;
    cout << "버블 a의 반지름 " << a.getRadius() << endl;
    cout << "버블 b의 반지름 " << b.getRadius() << endl;

}
