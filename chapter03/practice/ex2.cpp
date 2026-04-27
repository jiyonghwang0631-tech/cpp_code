//커피는 커피원액, 우유, 물을 섞어 다양하게 만든다. 4개의 맴버 변수(int coffee, sugar, milk, water)와 생성자 2개,show() 맴버 함수를 가지고
//다양한 커피를 나타내는 coffee 클래스를 작성하라 main()함수와 실행결과를 확인하라

#include <iostream>

using namespace std;

class Coffee {
    int water;
    int milk;
    int sugar;
    int coffee;

public:
    Coffee();
    Coffee(int w, int m, int s, int ms);
    void show();
};


int main()
{
    Coffee espresso;
    Coffee americano(5, 0, 0, 10);
    Coffee cappucchino(5, 1, 5, 2);
    Coffee mySweet(3, 7, 5, 5);

    espresso.show();
    cout << endl;
    mySweet.show();
}



// class Coffee {
//     int coffee;
//     int sugar;
//     int milk;
//     int water;

// public:
//     Coffee() {
//         coffee = 10;
//         sugar = 0;
//         milk = 0;
//         water = 0;
//     }

//     Coffee(int c, int s, int m, int w) {
//         coffee = c;
//         sugar = s;
//         milk = m;
//         water = w;
//     }

//     void show() {
//         cout << "coffee ";
//         for (int i = 0; i < coffee; i++) cout << "*";
//         cout << endl;

//         cout << "sugar ";
//         for (int i = 0; i < sugar; i++) cout << "*";
//         cout << endl;

//         cout << "milk ";
//         for (int i = 0; i < milk; i++) cout << "*";
//         cout << endl;

//         cout << "water ";
//         for (int i = 0; i < water; i++) cout << "*";
//         cout << endl << endl;
//     }
// };