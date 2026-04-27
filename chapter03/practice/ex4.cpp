#include <iostream>
#include <string>

using namespace std;

class Cube
{
private:
    int width;
    int height;
    int depth;
public:
    int getVolume();
    void increase(int w, int h, int d);
    bool isZero();

    Cube(int w, int h, int d);
    ~Cube();
};

int Cube::getVolume()
{
    return width * height * depth;
}

void Cube::increase(int w, int h, int d)
{
    width += w;
    height += h;
    depth += d;
}

bool Cube::isZero()
{
    return getVolume() == 0;
}

Cube::Cube(int w, int h, int d)
{
    width = w;
    height = h;
    depth = d;
}

Cube::~Cube()
{
}


int main()
{
    Cube cube(1, 2, 3);
    cout << "큐브의 부피는 " << cube.getVolume() << endl;
    cube.increase(1, 2, 3);
    cout << "큐브의 부피는 " << cube.getVolume() << endl;
    if(cube.isZero()) cout << "큐브의 부피는 0" << endl;
    else cout << "큐브의 부피는 0이 아님" << endl;
}