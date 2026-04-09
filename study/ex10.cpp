//소수점을 가지는 실수 5개를 입력받아 양수들만 합하여 출력하라
// 실수를  입력 받고 합하기 위해서는 double 타빙븨 변수를 사용하라.

#include <iostream>

using namespace std;

int main()
{
    double numbers[5];
    double sum = 0;

    cout << "소수점을 가지는 실수 5개를 입력하세요 >> ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
        if (numbers[i] > 0) {
            sum += numbers[i];
        }
    }

    cout << "양수들의 합은 " << sum << endl;
    return 0;
}