#include <iostream>
#include <string>

using namespace std;

int main()
{
    Cube cube(1, 2, 3);
    cout << "큐브의 부피는 " << cube.getVolume() << endl;
    cube.increase(1, 2, 3);
    cout << "큐브의 부피는 " << cube.getVolume() << endl;
    if(cube.isZero()) cout << "큐브의 부피는 0" << endl;
    else cout << "큐브의 부피는 0이 아님" << endl;
}