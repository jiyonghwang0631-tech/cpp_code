//객체에 대한 참조에 의한 호출, 참조 매개 변수 연습
// addBuble 함수를 구현하라

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



void addBubble(Bubble &c, Bubble &a, Bubble &b)
{
    int sum = a.getRadius() + b.getRadius();

    c.setRadius((c.getRadius()) + sum);   
    
}

void addBubble(Bubble *x, Bubble *y, Bubble *z)
{
    // int sum = (*y).getRadius() + (*z).getRadius();
    // (*x).setRadius((*x).getRadius() + sum );

    int sum = y->getRadius() + z->getRadius();
    x->setRadius(x->getRadius() + sum );

}

int main()
{
    Bubble a(5), b(10), c(130);
    addBubble(&c, &a, &b); // 버블 c=c+a+b의 크기로 만들기
    cout << "버블 c의 반지름 " << c.getRadius() << endl;

}

