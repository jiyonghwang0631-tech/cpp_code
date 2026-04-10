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

Rectangle::Rectangle() {
    width = 1;
    height = 1;
    cout << "너비" << width << "높이" << height << "사각형 생성" << endl;
}
Rectangle::Rectangle(int w) {
    width = w;
    height = 1;
    cout << "너비" << width << "높이" << height << "사각형 생성" << endl;
}
Rectangle::Rectangle(int w, int h) {
    width = w;
    height = h;
    cout << "너비" << width << "높이" << height << "사각형 생성" << endl;
}


int Rectangle::getArea() {
    return width * height;
}

int main()
{
    Rectangle rect;
    rect.width = 10;
    rect.height = 20;
    cout << "rect 면적은 " << rect.getArea() << endl;
    return 0;
}