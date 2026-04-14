#include <iostream>
using namespace std;    

int main()
{
    int n;
    
    cout << "정수를 입력하세요 >> ";
    
    cin >> n;

    cout << n << "의 10자리 수는 : " << (n / 10) % 10 << "입니다." << endl;

    // " / 연산 ", " % 연산" , '혼자하는 c 112p' 연산자

    return 0;
}

//정수 1개를 읽고 10자리 수가 얼마인지 출력하라