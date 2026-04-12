// coffe 클래스를 만들어보자. 에스프레소 한잔에는 커피와 물이 각각 1씩 소비되고,
// 아메리카노는 커피 1, 물 3이 소비되고, 설탕커피는 커피 1, 물 2, 설탕 1이 소비된다.
// main() 함수와 실행 결과를 참고 하여 어떤 맴버 변수와 함수가 필요한지 판단하여 CoffeMachine 클래스를 작성 하라.


#include <iostream>
#include <string>

using namespace std;

class CoffeMachine
{
private :
    int coffe;
    int water;
    int sugar;
public :
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffe();
    void show();
    void fill();

    CoffeMachine (int c, int w, int s); //생성자
};

void CoffeMachine::drinkEspresso()
{
    coffe -= 1;
    water -= 1;
}
void CoffeMachine::drinkAmericano()
{
    coffe -= 1;
    water -= 2;
}
void CoffeMachine::drinkSugarCoffe()
{
    coffe -= 1;
    water -= 2;
    sugar -= 1;
}
void CoffeMachine::show()
{
    cout << "커피 : " << coffe << " ";
    cout << "물 : " << water << " ";
    cout << "설탕 : " << sugar << endl;
}
void CoffeMachine::fill()
{
    coffe = 10;
    water = 10;
    sugar = 10;
}

CoffeMachine::CoffeMachine(int c, int w, int s)
{
    coffe = c;
    water = w;
    sugar = s;
}


int main()
{
    CoffeMachine java(5, 10, 6);  // 커피 : 5 , 물 : 10, 설탕 : 6으로 초기화
    java.drinkEspresso();         // 커피 : 1 , 물 : 1 
    java.show();                  // 현재 커피 머신의 상태 출력  
    java.drinkAmericano();        // 커피 : 5 , 물 : 2
    java.show();                  // 현재 커피 머신의 상태 출력  
    java.drinkSugarCoffe();       // 커피 : 1 , 물 : 2, 설탕 : 1  
    java.show();                  // 현재 커피 머신의 상태 출력  
    java.fill();                  // 커피 : 10 , 물 : 10, 설탕 : 10  
    java.show();
}