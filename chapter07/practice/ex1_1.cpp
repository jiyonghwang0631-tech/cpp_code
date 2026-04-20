#include <iostream>
using namespace std;

class Coffee
{
private :
    int water, espresso, sugar, cream;
public :

    Coffee(int water = 1, int coffee = 1, int sugar = 0, int cream = 0);
    void show()
    {
        cout << "물 " << water << ", 커피 " << espresso;
        cout << ", 설탕 " << sugar << ", 크림 " << cream << endl;
    }
	Coffee operator + (Coffee a);
	Coffee operator + (int espresso);

};

Coffee::Coffee(int water, int coffee, int sugar, int cream)
{
    this->water = water;
    this->espresso = coffee;
    this->sugar = sugar;
    this->cream = cream;
}

Coffee Coffee::operator + (Coffee a)
{
    Coffee tmp;
    tmp.water = this->water + a.water;
    tmp.espresso = this->espresso + a.espresso;
    tmp.cream = this->cream + a.cream;
    tmp.sugar = this->sugar + a.sugar;

    return tmp;

}

Coffee Coffee::operator + (int espresso)
{
    Coffee tmp = *this;
    tmp.espresso = this->espresso + espresso;
    return tmp;
}


int main()
{
    Coffee black (2, 5, 0, 0), dabang(2, 2, 2, 2), c, d;
    c = black + dabang;
    d = c + 1;
    c.show(); d.show();  
}