#include <iostream>
using namespace std;

class Circle{
    int radius;
public :
    Circle() 
    {
       this->radius = 1;
    }
    Circle(int r) 
    {
       this->radius = r;
    }
    void setRadius(int r) 
    { 
       this->radius = r;
    }
    Circle(const Circle &c);
    
    double getArena(); 
};

double Circle::getArena()
{
    return 3.14*radius*radius;
}

Circle::Circle(const Circle &c)
{
    this->radius = c.radius;
    cout << "복사 생성자 실행 radius = " << radius <<endl;
}

int main()
{
    Circle src(30);
  
    // 복사 생성자 호출
    // Circle dest(src);       
    
    //복사 생성자가 호출 되지 않음
    Circle dest;
    dest = src;

    cout << "원본의 면적 = " << src.getArena() << endl;
    cout << "사본의 면적 = " << dest.getArena() << endl;

}
