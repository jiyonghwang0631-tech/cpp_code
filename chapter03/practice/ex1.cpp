#include <iostream>
#include <string>   
using namespace std;

class Picture {
	int width;
	int height;
	string place;
public:
	Picture();
	Picture(int width, int height, string place);
	int getWidth() { return width; }
	int getHeight() { return height; }
	string getPlace() { return place; }
};

Picture::Picture() {
	width = 5;
	height = 7;
	place = "모름";
}

Picture::Picture(int w, int h, string p) {
	width = w;
	height = h;
	place = p;
}

Picture::~Picture()
{
}


int main()
{
    Picture pic;  // 5 x 7 크기, 촬영 장소 "모름"
    picture mt(10, 14, "한라산");
    cout << pic.getwidth() << " X " << pic.getHigh() << " " << pic.getPlace() << endl;
    cout << mt.getWidth() <<" x " << mt.getHigh() << " " << mt.getPlace() << endl;
}