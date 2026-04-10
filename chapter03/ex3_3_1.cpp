#include <iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    double getArea();
    int read_radius();
    void write_radius(int r);
};
    
double Circle::getArea() {
    return 3.14 * radius * radius;
}
int Circle::read_radius() {
    return radius;
}
void Circle::write_radius(int r) {
    radius = r;
}

int main()
{
    Circle donut;
    donut.write_radius(1);
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;
 
    Circle pizza;
    pizza.write_radius(30);
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;
}