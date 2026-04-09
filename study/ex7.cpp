// 키보드로 부터 2개의 정수를 입력 받아 합, 차 곱을 구하여 출력하라
// 두 개의 정수를 입력하세요 >> 25 7 
// 25+7= 32
// 25-7= 18
// 25*7= 175    

#include <iostream>
using namespace std;    

int main()
{
    int num1, num2;
    cout << "두 개의 정수를 입력하세요 >> ";
    cin >> num1 >> num2;
    cout << num1 << "+" << num2 << "= " << num1 + num2 << endl;
    cout << num1 << "-" << num2 << "= " << num1 - num2 << endl;
    cout << num1 << "*" << num2 << "= " << num1 * num2 << endl;
    return 0;
}