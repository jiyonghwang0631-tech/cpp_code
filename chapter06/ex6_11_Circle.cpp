#include <iostream>
using namespace std;

class Circle
{
private:
    static int numOfCircles;
    int radius;
public:
    double getArea(void);
    static int getNumOfCircles();

    Circle(int r = 1);
    ~Circle();
};

double Circle::getArea(void)
{
    return 3.14 * radius * radius;
}

int Circle::getNumOfCircles()
{
    return numOfCircles;
}

Circle::Circle(int r)
{
    radius = r;
    numOfCircles++;
}

Circle::~Circle()
{
    numOfCircles--;
}

int Circle::numOfCircles = 0;

int main()
{
    Circle *p = new Circle[10];
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

    delete [] p;
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

    Circle a;
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

    Circle b;
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;
}
