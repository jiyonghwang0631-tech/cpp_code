// cout 과 연산자를 이용하여 1에서 55까지의 정수를 다음과 같이 한 줄에 10개씩 입력하라
// 각 수는 탭('\t')을 분리하여 출력하라
// cout, for 문 연습



#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 55; i++) // 초기화 값 조건 잘 살펴보기
    {
        cout << i << '\t';

        if(i % 10 == 0)
            cout << endl;
    }

    cout << endl;
    
    return 0;
}
