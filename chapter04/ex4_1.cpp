#include <iostream>
#include <string>

using namespace std;

class Circle{
    int radius;
public :
    Circle() 
    {
        radius = 1;
    }
    Circle(int r) 
    {
        radius = r;
    }
    double getArena(); 
};

double Circle::getArena()
{
    return 3.14*radius*radius;
}

int main()
{
    Circle donut;
    Circle pizza(30);

    cout << donut.getArena() << endl;

    Circle *p;
    p = &donut;
    cout << p->getArena() << endl;
    cout << (*p).getArena() << endl;

    p = &pizza;
    cout << p->getArena() << endl;
    cout << (*p).getArena() << endl;

}