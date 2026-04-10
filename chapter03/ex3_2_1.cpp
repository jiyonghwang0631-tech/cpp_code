#include <iostream>
using namespace std;

class Rectangle {
public:
    int width;
    int height;

    int getArea();
    
    Rectangle();               
    Rectangle(int w);
    Rectangle(int w, int h);   
};

Rectangle::Rectangle() : Rectangle(1,1) {
}
Rectangle::Rectangle(int w) :Rectangle(w,1) {
}
Rectangle::Rectangle(int w, int h) {
    width = w;
    height = h;
    cout << "너비" << width << ", 높이 " << height << ", 사각형 생성" << endl;
}


int Rectangle::getArea() {
    return width * height;
}

int main()
{
    Rectangle rect1;
    cout << "사각형의 면적은 " << rect1.getArea() << endl;

    Rectangle rect2(10);
    cout << "사각형의 면적은 " << rect2.getArea() << endl; 

    Rectangle rect3(10, 20);
    cout << "사각형의 면적은 " << rect3.getArea() << endl;
    
}