#include <iostream>
#include <string>
using namespace std;

class Container
{
private:
    int *p;
    int size;
public:
    void read();
    void write();
    void rotate();
    void avg();


    Container(int size);
    ~Container();
};

void Container::read();
{
    cout << "정수 " << size << endl;
    for (int i = 0; i < size; i++)
    {
        /* code */
    }
    
}

void Container::write();
{

}

void Container::rotate();
{

}

void Container::avg();
{

}

Container::Container(int size)
{
}

Container::~Container()
{
}



int main()
{
    Container c(10);
    c.read();
    c.write();
    c.rotate();
    c.write();
    cout << "평균은 " << c.avg() << endl;
}