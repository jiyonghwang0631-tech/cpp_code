#include <iostream>
using namespace std;

class Person
{
private :
    /* data */
public:
    int money;

    void addMoney(int money);
    
    static int sharedMoney;

    static void addShared(int n);

    Person();
    ~Person();
            
};
// 라인 클래스랑 맞추기

void Person::addMoney(int money) // 매개변수 값. 인자값을 넣기 위해
{
    this->money = this->money + money;
    
}

int Person::sharedMoney = 10;


void Person::addShared(int n)       //this 못쓰는 이유 : sharedmoney는 공유를 하기 때문에 쓸 필요가 없다.
{                                   //money는 객체가 만들어 지면서 생성이 되는것이 때문에 구분이 필요함. ex) han의 money, lee의 money
   sharedMoney = sharedMoney + n;
;    
}

Person::Person(){}

Person::~Person(){}

int main()
{
    Person::sharedMoney = 20;

    // Person han;
    // han.money = 100
    // han.sharemoney = 200;

    // Person lee;
    // lee.money = 150;
    // lee.addMoney(200);
    // lee.addShared(200);




}