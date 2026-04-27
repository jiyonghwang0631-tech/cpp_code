#include <iostream>
#include <string>

using namespace std;

class CoffeeMachine
{
private:
    int coffee;
    int water;
    int sugar;
public:
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffe();
    void show();
    void fill();

    CoffeeMachine(int c, int w, int s);
    ~CoffeeMachine();
};

void CoffeeMachine::drinkEspresso()
{
    coffee -= 1;
    water -= 1;
}
void CoffeeMachine::drinkAmericano()
{
    coffee -= 1;
    water -= 3;
}
void CoffeeMachine::drinkSugarCoffe()
{
    coffee -= 1;
    water -= 2;
    sugar -= 1;
}
void CoffeeMachine::show()
{
    cout << "커피: " << coffee << " " ; 
    cout << "물: " << water << " " ;
    cout << "설탕: " << sugar << " " << endl;
}
void CoffeeMachine::fill()
{
    coffee = 10;
    water = 10;
    sugar = 10;
}

CoffeeMachine::CoffeeMachine(int c, int w, int s)
{
    coffee = c;
    water = w;
    sugar = s;
}

CoffeeMachine::~CoffeeMachine()
{
}



int main()
{
    CoffeeMachine java(5, 10, 6);  // 커피 : 5 , 물 : 10, 설탕 : 6으로 초기화
    java.drinkEspresso();         // 커피 : 1 , 물 : 1 
    java.show();                  // 현재 커피 머신의 상태 출력  
    java.drinkAmericano();        // 커피 : 5 , 물 : 2
    java.show();                  // 현재 커피 머신의 상태 출력  
    java.drinkSugarCoffe();       // 커피 : 1 , 물 : 2, 설탕 : 1  
    java.show();                  // 현재 커피 머신의 상태 출력  
    java.fill();                  // 커피 : 10 , 물 : 10, 설탕 : 10  
    java.show();
}