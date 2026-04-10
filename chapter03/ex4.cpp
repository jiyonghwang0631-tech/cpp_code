#include <iostream>
#include <string>
using namespace std;
    
class picture {
    int width;
    int height;
    string name;
           
public:
    int getWidth();
    int getHeight();
    string getPlace();
    
    picture();
    picture(int w, int h, string n);
};

picture::picture() {
    width = 5;
    height = 7;
    name = "모름";
}

picture::picture(int w, int h, string n) {
    width = w;
    height = h;
    name = n;
}           

int picture::getWidth() {
    return width;
}

int picture::getHeight() {
    return height;
}

string picture::getPlace() {
    return name;
}

int main()
{
    picture pic;
    picture mt(10, 14, "한라산");
    cout << pic.getWidth() << "X" << pic.getHeight() << " " << pic.getPlace() << endl;
    cout << mt.getWidth() << "X" << mt.getHeight() << " " << mt.getPlace() << endl;
}