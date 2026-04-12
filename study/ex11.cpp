#include <iostream>
#include <string>

using namespace std;


class cube {
private:
    int width;
    int height;
    int depth;
public:
    cube(int w, int h, int d) : width(w), height(h), depth(d) {}
    int getVolume() {
        return width * height * depth;  
}

    void increase(int w, int h, int d) {
        width += w;
        height += h;
        depth += d;
    }
    bool isZero() {
        return getVolume() == 0;  
    }
};


int main()
{
    Cube cube(1, 2, 3);
    cout << "큐브의 부피는 " << cube.getVolume() << endl;
    cube.increase(1, 2, 3);
    cout << "큐브의 부피는 " << cube.getVolume() << endl;
    if(cube.isZero()) cout << "큐브의 부피는 0" << endl;
    else cout << "큐브의 부피는 0이 아님" << endl;
}